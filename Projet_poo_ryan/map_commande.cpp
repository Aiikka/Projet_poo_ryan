#include "pch.h"
#include "map_Commande.h"

NS_Composants::map_Commande::map_Commande()
{
    this->id_commande = -1;
    this->id_client = -1;
    this->id_personnel = -1;
    this->date_commande = "RIEN";
    this->nom_commande = "RIEN";
}

String^ NS_Composants::map_Commande::SELECT()
{
    return  " SELECT id_commande , date_commande , nom_commande FROM TB_Commande";
}



String^ NS_Composants::map_Commande::SELECTbyId_Client()
{
    return  " SELECT id_commande , date_commande , nom_commande FROM TB_Commande" + "WHERE(id_client = " + this->id_client + ");";
}

String^ NS_Composants::map_Commande::SELECTbyId_Personnel()
{
    return  " SELECT id_commande , date_commande , nom_commande FROM TB_Commande" + "WHERE(id_personnel = " + this->id_personnel + ");";
}

String^ NS_Composants::map_Commande::UPDATE() {
    return "UPDATE TB_Commande" + "SET nom_commande='" + this->nom_commande + "', date_commande='" + this->date_commande + "'"
        + "WHERE(id_paiement = " + this->id_commande + ");";
}

String^ NS_Composants::map_Commande::DELETE()
{
    return "DELETE FROM TB_Commande" + "WHERE(id_commande =" + this->id_commande + ");";
}

String^ NS_Composants::map_Commande::INSERT()
{
    return "INSERT INTO TB_Commande(nom_commande,date_commande)" + "VALUES('" + this->nom_commande + "','" + this->date_commande + ");";
}

void NS_Composants::map_Commande::setId_Commande(int id_commande)
{
    this->id_commande = id_commande;
}

void NS_Composants::map_Commande::setId_Client(int id_client)
{
    this->id_client = id_client;
}

void NS_Composants::map_Commande::setId_Personnel(int id_personnel)
{
    this->id_personnel = id_personnel;
}


void NS_Composants::map_Commande::setNom_commande(String^ nom_com)
{
    this->nom_commande = nom_com;
}

void NS_Composants::map_Commande::setdate_commande(String^ date_com)
{
    this->date_commande = date_com;
}

int NS_Composants::map_Commande::getId_commande()
{
    return this->id_commande;
}

int NS_Composants::map_Commande::getId_Client()
{
    return 0;
}

int NS_Composants::map_Commande::getId_Personnel()
{
    return this->id_personnel;
}



String^ NS_Composants::map_Commande::getNom_commande()
{
    return this->nom_commande;
}

String^ NS_Composants::map_Commande::getdate_commande()
{
    return this->date_commande;
}
