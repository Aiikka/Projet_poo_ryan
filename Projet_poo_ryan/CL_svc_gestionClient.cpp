#include "pch.h"
#include "CL_svc_gestionClient.h"



namespace NS_SVC

{

    CL_svc_gestionClient::CL_svc_gestionClient(void)
    {

        this->CAD = gcnew NS_Composants::CL_CAD();
        this->client = gcnew NS_Composants::CL_Client();
        this->adresse = gcnew NS_Composants::CL_Adresse();
        this->livrer = gcnew NS_Composants::CL_mappLIVRER();

    }

    DataSet^ CL_svc_gestionClient::listeClients(String^ dataTableName)
    {

        this->ds = gcnew DataSet();
        this->ds = this->CAD->getRows(this->client->SELECT(), dataTableName);
        return this->ds;

    }



    void CL_svc_gestionClient::ajouter(String^ nom, String^ prenom, String^ date_nais, array<String^>^ adresseliv, array<String^>^ adressefac)
    {
        int id;
        int i;

        this->client->setNom(nom);
        this->client->setPrenom(prenom);
        this->client->setdate_nais(date_nais);


        id = this->CAD->actionRowsID(this->client->INSERT());


        // adresse liv
        for (i = 0; i < adresseliv->Length - 1; i++)
        {

            this->adresse->setville(adresseliv[i]); i++;
            this->adresse->setcp(adresseliv[i]);
           // this->livrer->setId_Client(id);
            this->CAD->actionRows(this->adresse->INSERT());
            this->CAD->actionRows(this->livrer->INSERT());

        }

        // adresse fac

        for (i = 0; i < adressefac->Length - 1; i++)

        {

            this->adresse->setville(adresseliv[i]); i++;
            this->adresse->setcp(adresseliv[i]);
            //this->facturer->setId_Client(id);
            this->CAD->actionRows(this->adresse->INSERT());
            this->CAD->actionRows(this->facturer->INSERT());

        }

    }

   
    void CL_svc_gestionClient::CL_svc_gestionClient::modifier(int id_client, String^ nom, String^ prenom, array<String^>^ lesAdresses)
    {

        int i;
        this->client->setId_Client(id_client);
        this->client->setNom(nom);
        this->client->setPrenom(prenom);
        this->CAD->actionRows(this->client->UPDATE());

        for (i = 0; i < lesAdresses->Length - 1; i++)
        {

            this->adresse->setville(lesAdresses[i]); i++;
            this->adresse->setcp(lesAdresses[i]);
            this->CAD->actionRows(this->adresse->UPDATE());

        }

    }

    void CL_svc_gestionClient::supprimer(int idClient)
    {
        this->client->setId_Client(idClient);
        this->CAD->actionRows(this->client->DELETE());

    }

}