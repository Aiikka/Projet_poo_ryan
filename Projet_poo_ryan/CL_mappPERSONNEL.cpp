

#include "pch.h"
#include "CL_mappPERSONNEL.h"





namespace NS_Composants

{

    CL_mappPERSONNEL::CL_mappPERSONNEL(void)

    {

        this->id_personnel = -1;

        this->nom = "RIEN";

        this->prenom = "RIEN";

        this->adresse = "RIEN" ;

        this->date_emb = "RIEN";

        this->id_personnel_1 = -1;

    }

    String^ CL_mappPERSONNEL::SELECT(void)

    {

        return "SELECT id_personnel, nom, prenom, adresse, date_emb, id_personnel_1  " +

            "FROM TB_PERSONNEL "  ;

            /*"WHERE(id_personne = " + this->id_facture + ");";*/

    }

    String^ CL_mappPERSONNEL::SELECTBYIDPERSONNEL(void)

    {

        return "SELECT id_personnel, nom, prenom, adresse, date_emb  " +

            "FROM TB_PERSONNEL " +

            "WHERE(id_personnel_1 = " + this->id_personnel_1 + ");";

    }

    String^ CL_mappPERSONNEL::INSERT(void)

    {

        return "INSERT INTO TB_PERSONNEL( nom, prenom, adresse, date_emb , id_personnel_1) " +

            "VALUES('" + this->nom + "', '" + this->prenom + "', '" + this->adresse + "', " + this->date_emb + "', " + this->id_personnel_1 + ");";

    }

    String^ CL_mappPERSONNEL::UPDATE(void)

    {

        return "UPDATE TB_PERSONNEL " +

            "SET nom ='" + this->nom + "', prenom ='" + this->prenom + "', adresse ='" + this->adresse  + "', date_emb ='" + this->date_emb + "', id_personnel_1 ='" + this->id_personnel_1 + "' " +

            "WHERE(id_personnel =  " + this->id_personnel + "); ";

    }

    String^ CL_mappPERSONNEL::DELETE(void)

    {

        return "DELETE FROM TB_PERSONNEL " +

            "WHERE(id_personnel = " + this->id_personnel + ");";

    }

    void CL_mappPERSONNEL::setid_personnel(int IdFACTURE)

    {

        if (IdFACTURE > 0)this->id_personnel = IdFACTURE;

    }

    void CL_mappPERSONNEL::setnom(String^ nomsociete)

    {

        if (nomsociete != "")this->nom = nomsociete;

    }

    void CL_mappPERSONNEL::setprenom(String^ adressesociete)

    {

        if (adressesociete != "")this->prenom = adressesociete;

    }

    void CL_mappPERSONNEL::setadresse(String^ adressesociete)

    {

        if (adressesociete != "")this->adresse = adressesociete;

    }

    void CL_mappPERSONNEL::setdate_emb(String^ adressesociete)

    {

        if (adressesociete != "")this->date_emb = adressesociete;

    }

    void CL_mappPERSONNEL::setid_personnel_1(int numserv)

    {

        if (numserv > 0)this->id_personnel_1 = numserv;

    }


    ////////////////////////////////////////////////////////

    int CL_mappPERSONNEL::getid_personnel(void)

    {

        return this->id_personnel;

    }

    String^ CL_mappPERSONNEL::getnom(void)

    {

        return this->nom;

    }


    String^ CL_mappPERSONNEL::getprenom(void)

    {

        return this->prenom;

    }

    String^ CL_mappPERSONNEL::getadresse(void)

    {

        return this->adresse;

    }

    String^ CL_mappPERSONNEL::getdate_emb(void)

    {

        return this->date_emb;

    }

    int CL_mappPERSONNEL::getid_personnel_1(void)

    {

        return this->id_personnel_1;

    }


}
