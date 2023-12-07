#pragma once
using namespace System;
namespace NS_Composants {
	ref class map_Commande
	{
	private:
		int id_commande;
		String^ nom_commande;
		String^ date_commande;
		int id_client;
		int id_personnel;
	public:
		map_Commande();
		String^ SELECT();
		String^ SELECTbyId_Client();
		String^ SELECTbyId_Personnel();
		String^ UPDATE();
		String^ DELETE();
		String^ INSERT();
		void setId_Commande(int);
		void setId_Client(int);
		void setId_Personnel(int);
		void setNom_commande(String^);
		void setdate_commande(String^);
		int getId_commande();
		int getId_Client();
		int getId_Personnel();
		String^ getNom_commande();
		String^ getdate_commande();

	};

}

