#include "pch.h"
#include "CL_mappARTICLE.h"





namespace NS_Composants

{

    CL_mappARTICLE::CL_mappARTICLE(void)

    {

        this->id_article = -1;

        this->nom_article = "RIEN";

        this->prix = 0.0;

        this->design_article = "RIEN";

        this->reap_article = 0;

    }

    String^ CL_mappARTICLE::SELECT(void)

    {

        return "SELECT id_adresse, adresse, ville, cp, id_personne " +

            "FROM TB_ADRESSE " +

            "WHERE(id_personne = " + this->id_article + ");";

    }

    String^ CL_mappARTICLE::INSERT(void)

    {

        return "INSERT INTO TB_ADRESSE(adresse, ville, cp, id_personne) ";// +

            //"VALUES('" + this->adresse + "', '" + this->ville + "', '" + this->cp + "', " + this->id_personne + ");";

    }

    String^ CL_mappARTICLE::UPDATE(void)

    {

        return "UPDATE TB_ADRESSE ";

           // "SET adresse ='" + this->adresse + "', ville ='" + this->ville + "', cp ='" + this->cp + "' " +

            //"WHERE(id_adresse =  " + this->id_adresse + "); ";

    }

    String^ CL_mappARTICLE::DELETE(void)

    {

        return "DELETE FROM ARTICLE " +

            "WHERE(id_article = " + this->id_article + ");";

    }

    void CL_mappARTICLE::setIdArticle(int IdARTICLE)

    {

        if (IdARTICLE > 0)this->id_article = IdARTICLE;

    }

    void CL_mappARTICLE::setnom_article(String^ nomartcile)

    {

        if (nomartcile != "")this->nom_article = nomartcile;

    }

    void CL_mappARTICLE::setprix(float price)

    {

        if (price > 0 )this->prix = price;

    }

    void CL_mappARTICLE::setdesign_article(String^ design)

    {

        if (design != "")this->design_article = design;

    }


    void CL_mappARTICLE::setreap_article(int reap)

    {

        if (reap > 0)this->reap_article = reap;

    }

    int CL_mappARTICLE::getIdArticle(void)

    {

        return this->id_article;

    }

    String^ CL_mappARTICLE::getnom_article(void)

    {

        return this->nom_article;

    }

    float CL_mappARTICLE::getprix(void)

    {

        return this->prix;

    }

    String^ CL_mappARTICLE::getdesign_article(void)

    {

        return this->design_article;

    }

    int CL_mappARTICLE::getreap_article(void)

    {

        return this->reap_article;

    }

}

