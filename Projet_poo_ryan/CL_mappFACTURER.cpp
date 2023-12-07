#include "pch.h"
#include "CL_mappFACTURER.h"





namespace NS_Composants

{

    CL_mappFACTURER::CL_mappFACTURER(void)

    {

        this->id_client = -1;

        this->id_adresse = -1;

    }

    String^ CL_mappFACTURER::SELECT(void)

    {

        return "SELECT id_adresse, adresse, ville, cp, id_personne " +

            "FROM TB_ADRESSE ";

            //"WHERE(id_personne = " + this->id_article + ");";

    }

    String^ CL_mappFACTURER::INSERT(void)

    {

        return "INSERT INTO TB_ADRESSE(adresse, ville, cp, id_personne) "; 

            //"VALUES('" + this->adresse + "', '" + this->ville + "', '" + this->cp + "', " + this->id_personne + ");";

    }

    String^ CL_mappFACTURER::UPDATE(void)

    {

        return "UPDATE TB_ADRESSE ";

           // "SET adresse ='" + this->adresse + "', ville ='" + this->ville + "', cp ='" + this->cp + "' " +

            //"WHERE(id_adresse =  " + this->id_adresse + "); ";

    }

    String^ CL_mappFACTURER::DELETE(void)

    {

        return "DELETE FROM ARTICLE ";

            //"WHERE(id_article = " + this->id_article + ");";

    }



}
