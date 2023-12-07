
#include "pch.h"
#include "CL_mappLIVRER.h"





namespace NS_Composants

{

    CL_mappLIVRER::CL_mappLIVRER(void)

    {

        this->id_client = -1;

        this->id_adresse = -1;

    }

    String^ CL_mappLIVRER::SELECT(void)

    {

        return "SELECT id_adresse, adresse, ville, cp, id_personne " +

            "FROM TB_ADRESSE "  ;

           // "WHERE(id_personne = " + this->id_article + ");";

    }

    String^ CL_mappLIVRER::INSERT(void)

    {

        return "INSERT INTO TB_ADRESSE(adresse, ville, cp, id_personne) ";

            //+ "VALUES('" + this->adresse + "', '" + this->ville + "', '" + this->cp + "', " + this->id_personne + ");";

    }

    String^ CL_mappLIVRER::UPDATE(void)

    {

        return "UPDATE TB_ADRESSE ";

            //"SET adresse ='" + this->adresse + "', ville ='" + this->ville + "', cp ='" + this->cp + "' " +

            //"WHERE(id_adresse =  " + this->id_adresse + "); ";

    }

    String^ CL_mappLIVRER::DELETE(void)

    {

        return "DELETE FROM ARTICLE ";

            //"WHERE(id_article = " + this->id_article + ");";

    }

    

}