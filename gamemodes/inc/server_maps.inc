//============================[ Faction maps ]==================================
#define COLOR_YELLOW 0xFFFF00AA

stock RemoveServerBuildings(playerid)
{
	//LSPD exterior
	/*RemoveBuildingForPlayer(playerid, 4064, 1571.6016, -1675.7500, 35.6797, 0.25);
	RemoveBuildingForPlayer(playerid, 3976, 1571.6016, -1675.7500, 35.6797, 0.25);*/
	//Camp ground
	RemoveBuildingForPlayer(playerid, 3276, 1564.8984, -52.3594, 20.7656, 0.25);
	RemoveBuildingForPlayer(playerid, 3276, 1564.2109, -64.4688, 20.7031, 0.25);
	RemoveBuildingForPlayer(playerid, 3276, 1563.3359, -76.2734, 20.6328, 0.25);
	RemoveBuildingForPlayer(playerid, 3276, 1562.3203, -88.1875, 20.3750, 0.25);
	RemoveBuildingForPlayer(playerid, 935, 1550.5625, 11.1094, 23.6328, 0.25);
	RemoveBuildingForPlayer(playerid, 935, 1551.5000, 10.7422, 23.5859, 0.25);
	RemoveBuildingForPlayer(playerid, 13002, 1554.0547, -0.3125, 26.8125, 0.25);
	RemoveBuildingForPlayer(playerid, 1427, 1554.0625, 13.2969, 23.8516, 0.25);
	RemoveBuildingForPlayer(playerid, 13003, 1559.6250, 20.0156, 23.5469, 0.25);
	RemoveBuildingForPlayer(playerid, 3276, 1564.3438, -40.5938, 20.9453, 0.25);
	RemoveBuildingForPlayer(playerid, 706, 1589.2109, 15.3594, 21.5234, 0.25);
	//FMD
	RemoveBuildingForPlayer(playerid, 5930, 1134.2500, -1338.0781, 23.1563, 0.25);
	RemoveBuildingForPlayer(playerid, 5935, 1120.1563, -1303.4531, 18.5703, 0.25);
	RemoveBuildingForPlayer(playerid, 5708, 1134.2500, -1338.0781, 23.1563, 0.25);
	RemoveBuildingForPlayer(playerid, 5737, 1120.1563, -1303.4531, 18.5703, 0.25);
	//Furniture Store Exterior
	RemoveBuildingForPlayer(playerid, 5931, 1114.3125, -1348.1016, 17.9844, 0.25);
	RemoveBuildingForPlayer(playerid, 5810, 1114.3125, -1348.1016, 17.9844, 0.25);
	//Bratva
	RemoveBuildingForPlayer(playerid, 13744, 1272.5938, -803.1094, 86.3594, 0.25);
	RemoveBuildingForPlayer(playerid, 617, 1254.7656, -763.2578, 90.8516, 0.25);
	RemoveBuildingForPlayer(playerid, 617, 1317.4297, -812.0938, 75.2969, 0.25);
	//Prison
	RemoveBuildingForPlayer(playerid, 3366, 276.6563, 1955.7656, 16.6328, 0.25);
	RemoveBuildingForPlayer(playerid, 16094, 191.1406, 1870.0391, 21.4766, 0.25);
	RemoveBuildingForPlayer(playerid, 3268, 276.6563, 1955.7656, 16.6328, 0.25);
	//FBI
	RemoveBuildingForPlayer(playerid, 4075, 1791.7969, -1716.9844, 12.5234, 0.25);
	RemoveBuildingForPlayer(playerid, 4076, 1783.1016, -1702.3047, 14.3516, 0.25);
	RemoveBuildingForPlayer(playerid, 4077, 1781.4766, -1648.4219, 26.8359, 0.25);
	RemoveBuildingForPlayer(playerid, 4078, 1783.1016, -1647.3125, 23.2578, 0.25);
	RemoveBuildingForPlayer(playerid, 1531, 1767.2109, -1617.5391, 15.0391, 0.25);
	RemoveBuildingForPlayer(playerid, 1531, 1799.1328, -1708.7656, 14.1016, 0.25);
	RemoveBuildingForPlayer(playerid, 713, 1807.5156, -1625.8828, 12.7031, 0.25);
	RemoveBuildingForPlayer(playerid, 1266, 1805.0234, -1692.4453, 25.1484, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 1750.2656, -1719.6328, 15.6250, 0.25);
	RemoveBuildingForPlayer(playerid, 1294, 1788.2031, -1727.9063, 16.9063, 0.25);
	RemoveBuildingForPlayer(playerid, 4018, 1791.7969, -1716.9844, 12.5234, 0.25);
	RemoveBuildingForPlayer(playerid, 4027, 1783.1016, -1702.3047, 14.3516, 0.25);
	RemoveBuildingForPlayer(playerid, 700, 1777.8516, -1677.1953, 14.3125, 0.25);
	RemoveBuildingForPlayer(playerid, 1294, 1753.7656, -1671.3125, 17.2500, 0.25);
	RemoveBuildingForPlayer(playerid, 1260, 1805.0234, -1692.4453, 25.1484, 0.25);
	RemoveBuildingForPlayer(playerid, 700, 1761.4609, -1651.7422, 14.3125, 0.25);
	RemoveBuildingForPlayer(playerid, 4028, 1781.4766, -1648.4219, 26.8359, 0.25);
	RemoveBuildingForPlayer(playerid, 3984, 1783.1016, -1647.3125, 23.2578, 0.25);
	RemoveBuildingForPlayer(playerid, 1294, 1753.7656, -1632.0625, 17.2500, 0.25);
	RemoveBuildingForPlayer(playerid, 700, 1792.8047, -1640.9531, 14.3125, 0.25);
	
	//LEC
	RemoveBuildingForPlayer(playerid, 1268, 193.9453, -1453.7344, 24.6406, 0.25);
	RemoveBuildingForPlayer(playerid, 730, 184.7031, -1451.4297, 10.2031, 0.25);
	RemoveBuildingForPlayer(playerid, 1268, 218.2266, -1434.5625, 24.6406, 0.25);
	RemoveBuildingForPlayer(playerid, 732, 188.8984, -1464.4063, 11.2969, 0.25);
	RemoveBuildingForPlayer(playerid, 6362, 201.4453, -1476.8516, 17.9609, 0.25);
	RemoveBuildingForPlayer(playerid, 1308, 198.3984, -1461.6563, 12.2578, 0.25);
	RemoveBuildingForPlayer(playerid, 673, 193.1484, -1449.2344, 11.0703, 0.25);
	RemoveBuildingForPlayer(playerid, 673, 189.2422, -1444.7734, 11.0703, 0.25);
	RemoveBuildingForPlayer(playerid, 1259, 193.9453, -1453.7344, 24.6406, 0.25);
	RemoveBuildingForPlayer(playerid, 673, 197.9688, -1454.4609, 11.0703, 0.25);
	RemoveBuildingForPlayer(playerid, 6350, 247.3906, -1454.8281, 37.7344, 0.25);
	RemoveBuildingForPlayer(playerid, 1259, 218.2266, -1434.5625, 24.6406, 0.25);
	RemoveBuildingForPlayer(playerid, 1226, 203.1953, -1429.2031, 15.8125, 0.25);
	RemoveBuildingForPlayer(playerid, 673, 223.0469, -1419.7266, 11.0703, 0.25);
	RemoveBuildingForPlayer(playerid, 673, 227.8672, -1424.9531, 11.0703, 0.25);
	RemoveBuildingForPlayer(playerid, 1308, 232.5000, -1426.0078, 12.5859, 0.25);
	RemoveBuildingForPlayer(playerid, 620, 235.8906, -1422.5469, 10.3203, 0.25);
	RemoveBuildingForPlayer(playerid, 6499, 290.8750, -1412.0938, 21.3047, 0.25);
	RemoveBuildingForPlayer(playerid, 16336, -225.1875, 1394.8359, 68.5781, 0.25);
	RemoveBuildingForPlayer(playerid, 16614, -346.6719, 1595.0781, 79.6641, 0.25);
	RemoveBuildingForPlayer(playerid, 16615, -389.7656, 1515.1641, 74.5547, 0.25);
	RemoveBuildingForPlayer(playerid, 16616, -326.6953, 1541.3906, 74.5547, 0.25);
	RemoveBuildingForPlayer(playerid, 16335, -225.1875, 1394.8359, 68.5781, 0.25);
	RemoveBuildingForPlayer(playerid, 16137, -389.7656, 1515.1641, 74.5547, 0.25);
	RemoveBuildingForPlayer(playerid, 16138, -326.6953, 1541.3906, 74.5547, 0.25);
	RemoveBuildingForPlayer(playerid, 16136, -350.0625, 1594.3438, 75.3125, 0.25);
	
	//ugly SF tree in the middle of city
	RemoveBuildingForPlayer(playerid, 713, -1920.1875, 882.1953, 34.1406, 0.25);
	//mat pickup 1 water
	RemoveBuildingForPlayer(playerid, 4711, 1392.1875, -1336.8047, 15.9844, 0.25);
	//taxi
	RemoveBuildingForPlayer(playerid, 1226, 1774.7578, -1931.3125, 16.3750, 0.25);
	RemoveBuildingForPlayer(playerid, 5024, 1748.8438, -1883.0313, 14.1875, 0.25);
	RemoveBuildingForPlayer(playerid, 5083, 1748.8438, -1883.0313, 14.1875, 0.25);
	RemoveBuildingForPlayer(playerid, 1226, 1774.7578, -1901.5391, 16.3750, 0.25);
	//SANG Gate house and radar
	RemoveBuildingForPlayer(playerid, 3337, -92.0469, 2072.0313, 16.6719, 0.25);
	RemoveBuildingForPlayer(playerid, 1411, 347.1953, 1799.2656, 18.7578, 0.25);
	RemoveBuildingForPlayer(playerid, 1411, 342.9375, 1796.2891, 18.7578, 0.25);
	//courthouse
	RemoveBuildingForPlayer(playerid, 2172, 217.1875, 169.9688, 1002.0234, 0.25);
	RemoveBuildingForPlayer(playerid, 1806, 215.5625, 170.2266, 1002.0156, 0.25);
	RemoveBuildingForPlayer(playerid, 1806, 210.9844, 170.2266, 1002.0156, 0.25);
	RemoveBuildingForPlayer(playerid, 1806, 222.6250, 170.1641, 1002.0156, 0.25);
	RemoveBuildingForPlayer(playerid, 1806, 217.8516, 170.6016, 1002.0156, 0.25);
	RemoveBuildingForPlayer(playerid, 2193, 223.2031, 170.2422, 1002.0234, 0.25);
	RemoveBuildingForPlayer(playerid, 2166, 198.8672, 170.8672, 1002.0313, 0.25);
	RemoveBuildingForPlayer(playerid, 2193, 210.2813, 171.3047, 1002.0234, 0.25);
	RemoveBuildingForPlayer(playerid, 1806, 210.9844, 171.5469, 1002.0156, 0.25);
	RemoveBuildingForPlayer(playerid, 2172, 216.1953, 170.9453, 1002.0234, 0.25);
	RemoveBuildingForPlayer(playerid, 2172, 217.1875, 171.9844, 1002.0234, 0.25);
	RemoveBuildingForPlayer(playerid, 1806, 222.6250, 171.4922, 1002.0156, 0.25);
	RemoveBuildingForPlayer(playerid, 2193, 211.3203, 173.4453, 1002.0234, 0.25);
	RemoveBuildingForPlayer(playerid, 2356, 211.3828, 174.2344, 1002.0234, 0.25);
	RemoveBuildingForPlayer(playerid, 2356, 215.2188, 172.3125, 1002.0234, 0.25);
	RemoveBuildingForPlayer(playerid, 1806, 215.5625, 174.2266, 1002.0156, 0.25);
	RemoveBuildingForPlayer(playerid, 2172, 216.1953, 172.9609, 1002.0234, 0.25);
	RemoveBuildingForPlayer(playerid, 2172, 217.1875, 174.0234, 1002.0234, 0.25);
	RemoveBuildingForPlayer(playerid, 1806, 217.8516, 172.6172, 1002.0156, 0.25);
	RemoveBuildingForPlayer(playerid, 2193, 222.2188, 172.2656, 1002.0234, 0.25);
	RemoveBuildingForPlayer(playerid, 1806, 222.6250, 174.3047, 1002.0156, 0.25);
	RemoveBuildingForPlayer(playerid, 2193, 223.2266, 174.4063, 1002.0234, 0.25);
	RemoveBuildingForPlayer(playerid, 2193, 210.3203, 175.4688, 1002.0234, 0.25);
	RemoveBuildingForPlayer(playerid, 1806, 210.9844, 175.5938, 1002.0156, 0.25);
	RemoveBuildingForPlayer(playerid, 2172, 216.1953, 175.0000, 1002.0234, 0.25);
	RemoveBuildingForPlayer(playerid, 2356, 218.1484, 174.5781, 1002.0234, 0.25);
	RemoveBuildingForPlayer(playerid, 2193, 222.2109, 176.4297, 1002.0234, 0.25);
	RemoveBuildingForPlayer(playerid, 1806, 222.6250, 175.6250, 1002.0156, 0.25);
	RemoveBuildingForPlayer(playerid, 1806, 199.3047, 166.8828, 1002.0156, 0.25);
	RemoveBuildingForPlayer(playerid, 2166, 199.8594, 166.9375, 1002.0313, 0.25);
	RemoveBuildingForPlayer(playerid, 14856, 198.4688, 168.6797, 1003.8984, 0.25);
	RemoveBuildingForPlayer(playerid, 2356, 198.7813, 169.0313, 1002.0156, 0.25);
	RemoveBuildingForPlayer(playerid, 2165, 199.8594, 168.8984, 1002.0313, 0.25);
	RemoveBuildingForPlayer(playerid, 1715, 210.1875, 148.1094, 1002.0234, 0.25);
	RemoveBuildingForPlayer(playerid, 1715, 211.4688, 148.1094, 1002.0156, 0.25);
	RemoveBuildingForPlayer(playerid, 1715, 215.0078, 147.3125, 1002.0234, 0.25);
	RemoveBuildingForPlayer(playerid, 1715, 216.6328, 147.2578, 1002.0234, 0.25);
	RemoveBuildingForPlayer(playerid, 1715, 216.6719, 148.2031, 1002.0234, 0.25);
	RemoveBuildingForPlayer(playerid, 1715, 215.1094, 148.2422, 1002.0234, 0.25);
	RemoveBuildingForPlayer(playerid, 1714, 211.0313, 150.0156, 1002.0156, 0.25);
	RemoveBuildingForPlayer(playerid, 1715, 215.0859, 149.2500, 1002.0234, 0.25);
	RemoveBuildingForPlayer(playerid, 1715, 216.6563, 149.2578, 1002.0234, 0.25);
	RemoveBuildingForPlayer(playerid, 2029, 215.9844, 149.9531, 1002.0156, 0.25);
	RemoveBuildingForPlayer(playerid, 1715, 215.8594, 150.8047, 1002.0234, 0.25);
	RemoveBuildingForPlayer(playerid, 2193, 210.2969, 162.9531, 1002.0234, 0.25);
	RemoveBuildingForPlayer(playerid, 2193, 210.3203, 167.1172, 1002.0234, 0.25);
	RemoveBuildingForPlayer(playerid, 2193, 211.3203, 160.9297, 1002.0234, 0.25);
	RemoveBuildingForPlayer(playerid, 1806, 210.9844, 161.6875, 1002.0156, 0.25);
	RemoveBuildingForPlayer(playerid, 1806, 210.9844, 163.0156, 1002.0156, 0.25);
	RemoveBuildingForPlayer(playerid, 2193, 211.3125, 165.0938, 1002.0234, 0.25);
	RemoveBuildingForPlayer(playerid, 1806, 210.9844, 165.8281, 1002.0156, 0.25);
	RemoveBuildingForPlayer(playerid, 2193, 211.3047, 169.2813, 1002.0234, 0.25);
	RemoveBuildingForPlayer(playerid, 1806, 210.9844, 167.1484, 1002.0156, 0.25);
	RemoveBuildingForPlayer(playerid, 1806, 215.5625, 162.5078, 1002.0156, 0.25);
	RemoveBuildingForPlayer(playerid, 2172, 216.1953, 163.2813, 1002.0234, 0.25);
	RemoveBuildingForPlayer(playerid, 1806, 215.5625, 164.5547, 1002.0156, 0.25);
	RemoveBuildingForPlayer(playerid, 2172, 216.1953, 165.2969, 1002.0234, 0.25);
	RemoveBuildingForPlayer(playerid, 2356, 215.2188, 166.8516, 1002.0234, 0.25);
	RemoveBuildingForPlayer(playerid, 2172, 216.1953, 167.3359, 1002.0234, 0.25);
	RemoveBuildingForPlayer(playerid, 1715, 220.1797, 147.2969, 1002.0156, 0.25);
	RemoveBuildingForPlayer(playerid, 1715, 221.4531, 147.2031, 1002.0156, 0.25);
	RemoveBuildingForPlayer(playerid, 1714, 221.1094, 149.2969, 1002.0234, 0.25);
	RemoveBuildingForPlayer(playerid, 2172, 217.1875, 164.3203, 1002.0234, 0.25);
	RemoveBuildingForPlayer(playerid, 2172, 217.1875, 162.3047, 1002.0234, 0.25);
	RemoveBuildingForPlayer(playerid, 2172, 217.1875, 166.3594, 1002.0234, 0.25);
	RemoveBuildingForPlayer(playerid, 1806, 217.8516, 162.9375, 1002.0156, 0.25);
	RemoveBuildingForPlayer(playerid, 1806, 217.8516, 164.9609, 1002.0156, 0.25);
	RemoveBuildingForPlayer(playerid, 1806, 217.8516, 166.9375, 1002.0156, 0.25);
	RemoveBuildingForPlayer(playerid, 1806, 222.6250, 161.7266, 1002.0156, 0.25);
	RemoveBuildingForPlayer(playerid, 2193, 223.2031, 161.8906, 1002.0234, 0.25);
	RemoveBuildingForPlayer(playerid, 1806, 222.6250, 163.0547, 1002.0156, 0.25);
	RemoveBuildingForPlayer(playerid, 2193, 222.2031, 163.9219, 1002.0234, 0.25);
	RemoveBuildingForPlayer(playerid, 1806, 222.6250, 165.7656, 1002.0156, 0.25);
	RemoveBuildingForPlayer(playerid, 2193, 223.2422, 166.0547, 1002.0234, 0.25);
	RemoveBuildingForPlayer(playerid, 2356, 222.2031, 167.2188, 1002.0234, 0.25);
	RemoveBuildingForPlayer(playerid, 2193, 222.2188, 168.0781, 1002.0234, 0.25);
	RemoveBuildingForPlayer(playerid, 14887, 228.3594, 167.5156, 1004.0703, 0.25);
	RemoveBuildingForPlayer(playerid, 14885, 244.6875, 166.6953, 1005.5781, 0.25);
	//gym light
	RemoveBuildingForPlayer(playerid, 1315, 2221.9531, -1725.0156, 15.7188, 0.25);
	//blueberry junkyard
	RemoveBuildingForPlayer(playerid, 13191, 65.2578, -303.9844, 14.4531, 0.25);
	RemoveBuildingForPlayer(playerid, 13192, 164.7109, -234.1875, 0.4766, 0.25);
	RemoveBuildingForPlayer(playerid, 13193, 173.5156, -323.8203, 0.5156, 0.25);
	RemoveBuildingForPlayer(playerid, 13195, 36.8281, -256.2266, 0.4688, 0.25);
	RemoveBuildingForPlayer(playerid, 1426, 29.1719, -292.2734, 1.4063, 0.25);
	RemoveBuildingForPlayer(playerid, 1431, 36.4297, -291.0625, 1.5703, 0.25);
	RemoveBuildingForPlayer(playerid, 1426, 24.5938, -291.7578, 1.4063, 0.25);
	RemoveBuildingForPlayer(playerid, 1438, 29.2344, -286.0547, 1.2188, 0.25);
	RemoveBuildingForPlayer(playerid, 1440, 32.4063, -289.2188, 1.6484, 0.25);
	RemoveBuildingForPlayer(playerid, 1438, 33.6016, -279.3516, 1.1172, 0.25);
	RemoveBuildingForPlayer(playerid, 12861, 36.8281, -256.2266, 0.4688, 0.25);
	RemoveBuildingForPlayer(playerid, 1450, 43.4844, -252.5703, 1.2031, 0.25);
	RemoveBuildingForPlayer(playerid, 1449, 43.1094, -254.9609, 1.2188, 0.25);
	RemoveBuildingForPlayer(playerid, 12859, 173.5156, -323.8203, 0.5156, 0.25);
	RemoveBuildingForPlayer(playerid, 12805, 65.2578, -303.9844, 14.4531, 0.25);
	RemoveBuildingForPlayer(playerid, 12956, 96.3281, -261.1953, 3.8594, 0.25);
	RemoveBuildingForPlayer(playerid, 12860, 164.7109, -234.1875, 0.4766, 0.25);
	//lspd jail cells
	RemoveBuildingForPlayer(playerid, 14843, 266.3516, 81.1953, 1001.2813, 0.25);
	//dillimore pd jail
	RemoveBuildingForPlayer(playerid, 14883, 320.8672, 314.2109, 1000.1484, 0.25);
	RemoveBuildingForPlayer(playerid, 2602, 317.0391, 317.6797, 998.6641, 0.25);
	
	//demorgan fence
	RemoveBuildingForPlayer(playerid, 16094, 191.1406, 1870.0391, 21.4766, 0.25);

	return 1;
}
stock CreateSANGLSAIR()
{
    //exterior
	CreateDynamicObject(8253, 1446.32, -2422.67, 16.45,   0.00, 0.00, 270.00);
	CreateDynamicObject(8247, 1491.43, -2415.10, 16.45,   0.00, 0.00, 270.00);
	CreateDynamicObject(7981, 1479.16, -2414.78, 17.53,   0.00, 0.00, 270.00);
	CreateDynamicObject(1682, 1478.00, -2420.52, 28.39,   0.00, 0.00, 142.00);
	CreateDynamicObject(944, 1457.33, -2417.85, 13.33,   0.00, 0.00, 80.00);
	CreateDynamicObject(1332, 1460.09, -2433.35, 13.55,   0.00, 0.00, 80.00);
	CreateDynamicObject(1333, 1460.66, -2430.90, 13.40,   0.00, 0.00, 91.00);
	CreateDynamicObject(1327, 1459.84, -2434.82, 13.40,   0.00, 10.00, 120.00);
	CreateDynamicObject(923, 1459.76, -2428.59, 13.44,   0.00, 0.00, 100.00);
	CreateDynamicObject(2607, 1453.58, -2414.33, 13.10,   0.00, 0.00, 0.00);
	CreateDynamicObject(1412, 1503.58, -2402.47, 13.73,   0.00, 0.00, 90.00);
	CreateDynamicObject(8673, 1502.97, -2437.14, 14.01,   0.00, 0.00, 90.00);
	CreateDynamicObject(8673, 1502.95, -2464.87, 14.01,   0.00, 0.00, 90.00);
	CreateDynamicObject(8673, 1492.95, -2475.30, 14.01,   0.00, 0.00, 0.00);
	CreateDynamicObject(10252, 1502.31, -2451.22, 13.70,   0.00, 0.00, 90.00);
	CreateDynamicObject(1412, 1503.59, -2397.20, 13.73,   0.00, 0.00, 90.00);
	CreateDynamicObject(1412, 1503.57, -2391.91, 13.73,   0.00, 0.00, 90.00);
	CreateDynamicObject(8673, 1472.51, -2475.32, 14.01,   0.00, 0.00, 0.00);
	CreateDynamicObject(3036, 1503.00, -2454.81, 13.74,   0.00, 0.00, 156.00);
	CreateDynamicObject(3036, 1503.00, -2454.81, 10.84,   0.00, 0.00, 156.00);
	CreateDynamicObject(3568, 1489.00, -2437.23, 15.02,   0.00, 0.00, 260.00);
	CreateDynamicObject(11292, 1454.12, -2413.26, 13.94,   0.00, 0.00, 0.00);
	CreateDynamicObject(2197, 1454.49, -2411.64, 12.72,   0.00, 0.00, 270.00);
	CreateDynamicObject(11295, 1372.93, -2423.40, 18.30,   0.00, 0.00, 0.00);
	CreateDynamicObject(3035, 1432.86, -2429.13, 13.29,   0.00, 0.00, 270.00);
	CreateDynamicObject(3761, 1438.26, -2411.14, 13.74,   0.00, 0.00, 272.00);
	CreateDynamicObject(2921, 1458.96, -2435.28, 18.10,   0.00, 0.00, 180.00);
	CreateDynamicObject(3172, 1488.83, -2399.07, 12.52,   0.00, 0.00, -84.00);
	CreateDynamicObject(2738, 1457.73, -2411.63, 13.33,   0.00, 0.00, 0.00);
	CreateDynamicObject(2515, 1458.17, -2414.02, 13.73,   0.00, 0.00, 270.00);
	CreateDynamicObject(2685, 1458.40, -2413.69, 14.23,   0.00, 0.00, 270.00);
	CreateDynamicObject(2741, 1458.35, -2414.09, 14.26,   0.00, 0.00, 270.00);
	CreateDynamicObject(2904, 1456.08, -2412.28, 13.95,   0.00, 0.00, 90.00);
	CreateDynamicObject(2904, 1456.03, -2412.28, 13.95,   0.00, 0.00, 90.00);
	CreateDynamicObject(2197, 1454.48, -2412.36, 12.72,   0.00, 0.00, 270.00);
	CreateDynamicObject(2595, 1455.46, -2412.26, 14.77,   0.00, 0.00, -142.00);
	CreateDynamicObject(1806, 1451.82, -2412.69, 12.73,   0.00, 0.00, 98.00);
	CreateDynamicObject(1808, 1450.25, -2411.61, 12.73,   0.00, 0.00, 90.00);
	CreateDynamicObject(3066, 1435.84, -2418.87, 13.54,   0.00, 0.00, 0.00);
	CreateDynamicObject(943, 1448.95, -2413.10, 13.30,   0.00, 0.00, 0.00);
	CreateDynamicObject(1431, 1437.95, -2412.68, 13.09,   0.00, 0.00, 11.00);
	CreateDynamicObject(1431, 1442.84, -2410.80, 13.09,   0.00, 0.00, 178.00);
	CreateDynamicObject(1226, 1459.58, -2437.32, 16.39,   0.00, 0.00, 90.00);
	CreateDynamicObject(11631, 1450.59, -2413.47, 13.93,   0.00, 0.00, 90.00);
	CreateDynamicObject(1778, 1456.32, -2412.02, 12.73,   0.00, 0.00, 171.00);
	CreateDynamicObject(2613, 1456.00, -2412.14, 12.73,   0.00, 0.00, 0.00);
	CreateDynamicObject(1334, 1497.55, -2401.07, 13.65,   0.00, 0.00, 0.00);
	CreateDynamicObject(1339, 1495.14, -2396.68, 13.18,   0.00, 0.00, -229.00);
	CreateDynamicObject(1328, 1495.41, -2397.61, 13.05,   0.00, 0.00, 0.00);
	CreateDynamicObject(3262, 1503.89, -2456.67, 12.54,   0.00, 0.00, 105.00);
	CreateDynamicObject(1536, 1479.25, -2401.84, 12.55,   0.00, 0.00, 0.00);
	CreateDynamicObject(8673, 1428.79, -2475.33, 14.01,   0.00, 0.00, 0.00);
	CreateDynamicObject(8673, 1408.35, -2475.33, 14.01,   0.00, 0.00, 0.00);
	CreateDynamicObject(8673, 1387.90, -2475.33, 14.01,   0.00, 0.00, 0.00);
	CreateDynamicObject(8673, 1374.60, -2475.34, 14.01,   0.00, 0.00, 0.00);
	CreateDynamicObject(3664, 1374.34, -2457.75, 19.34,   0.00, 0.00, 90.00);
	CreateDynamicObject(2960, 1438.89, -2475.22, 13.29,   0.00, 90.00, 90.00);
	CreateDynamicObject(2960, 1462.06, -2475.17, 13.29,   0.00, 90.00, 90.00);



	//interior - will put this into interior ID hence hiding objects at this height (and shadows ect)
	CreateDynamicObject(16642, 263.70, 1773.81, 400.57,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(16642, 263.19, 1773.87, 400.71,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(19169, 266.16, 1751.15, 398.97,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(19168, 264.66, 1751.15, 398.97,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(2163, 266.55, 1749.99, 398.03,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(2163, 265.84, 1751.53, 398.03,   0.00, 0.00, 180.00, 50, 50);
	CreateDynamicObject(19170, 264.66, 1749.65, 398.97,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(19171, 266.16, 1749.65, 398.97,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(2163, 264.99, 1749.30, 398.03,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(2163, 264.29, 1750.86, 398.03,   0.00, 0.00, 270.00, 50, 50);
	CreateDynamicObject(2198, 266.41, 1751.36, 398.99,   0.00, 180.00, 0.00, 50, 50);
	CreateDynamicObject(2198, 265.44, 1751.32, 398.99,   0.00, 180.00, 0.00, 50, 50);
	CreateDynamicObject(2198, 264.47, 1749.48, 398.99,   0.00, 180.00, 180.00, 50, 50);
	CreateDynamicObject(2198, 265.37, 1749.51, 398.99,   0.00, 180.00, 180.00, 50, 50);
	CreateDynamicObject(2163, 265.84, 1751.53, 397.39,   0.00, 0.00, 180.00, 50, 50);
	CreateDynamicObject(2163, 264.29, 1750.86, 397.39,   0.00, 0.00, 270.00, 50, 50);
	CreateDynamicObject(2163, 264.99, 1749.30, 397.39,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(2163, 266.55, 1749.99, 397.39,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(2161, 272.13, 1751.19, 398.29,   0.00, 0.00, 270.00, 50, 50);
	CreateDynamicObject(2167, 271.90, 1752.18, 398.29,   0.00, 0.00, 273.00, 50, 50);
	CreateDynamicObject(11292, 276.75, 1750.13, 399.29,   0.00, 0.00, 180.00, 50, 50);
	CreateDynamicObject(11292, 276.33, 1753.97, 399.29,   0.00, 0.00, 180.00, 50, 50);
	CreateDynamicObject(2197, 270.76, 1749.93, 398.29,   0.00, 0.00, 270.00, 50, 50);
	CreateDynamicObject(16644, 262.55, 1746.70, 400.70,   90.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(3386, 251.74, 1752.49, 397.79,   0.00, 0.00, 180.00, 50, 50);
	CreateDynamicObject(3384, 271.24, 1753.93, 399.63,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(3567, 268.05, 1745.40, 400.59,   0.00, 90.00, 90.00, 50, 50);
	CreateDynamicObject(3567, 268.06, 1745.42, 402.59,   0.00, 90.00, 90.00, 50, 50);
	CreateDynamicObject(16087, 266.09, 1743.26, 399.54,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(8595, 265.65, 1734.50, 400.99,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(2356, 263.13, 1751.32, 398.28,   0.00, 0.00, -164.00, 50, 50);
	CreateDynamicObject(2356, 262.80, 1749.34, 398.28,   0.00, 0.00, -69.00, 50, 50);
	CreateDynamicObject(2356, 265.47, 1747.76, 398.28,   0.00, 0.00, 33.00, 50, 50);
	CreateDynamicObject(2356, 267.35, 1751.70, 398.28,   0.00, 0.00, 99.00, 50, 50);
	CreateDynamicObject(2356, 269.04, 1753.53, 398.28,   0.00, 0.00, 4.00, 50, 50);
	CreateDynamicObject(2356, 269.93, 1755.14, 398.28,   0.00, 0.00, -127.00, 50, 50);
	CreateDynamicObject(11631, 268.47, 1754.85, 399.53,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(945, 265.41, 1750.33, 408.98,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(2197, 270.78, 1753.05, 398.29,   0.00, 0.00, 270.00, 50, 50);
	CreateDynamicObject(3017, 271.72, 1749.99, 399.98,   0.00, 0.00, 180.00, 50, 50);
	CreateDynamicObject(3031, 269.97, 1747.30, 399.87,   0.00, 0.00, 47.00, 50, 50);
	CreateDynamicObject(2902, 270.23, 1747.69, 398.93,   0.00, 90.00, 0.00, 50, 50);
	CreateDynamicObject(2707, 271.24, 1750.82, 400.55,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(2707, 271.23, 1752.45, 400.55,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(19602, 271.93, 1751.41, 399.71,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(19787, 270.75, 1752.02, 401.19,   0.00, 0.00, 270.00, 50, 50);
	CreateDynamicObject(19805, 261.28, 1746.80, 400.35,   0.00, 0.00, 180.00, 50, 50);
	CreateDynamicObject(19814, 267.86, 1755.55, 399.44,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(19825, 270.64, 1752.03, 402.35,   0.00, 0.00, 270.00, 50, 50);
	CreateDynamicObject(19826, 262.67, 1755.55, 399.71,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(11706, 266.33, 1755.28, 398.29,   0.00, 0.00, 3.00, 50, 50);
	CreateDynamicObject(11711, 264.30, 1755.58, 400.97,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(11728, 267.02, 1755.63, 399.58,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(11727, 258.58, 1747.66, 400.81,   0.00, 0.00, -225.00, 50, 50);
	CreateDynamicObject(11727, 255.96, 1750.33, 400.81,   0.00, 0.00, -225.00, 50, 50);
	CreateDynamicObject(11729, 251.46, 1753.52, 398.29,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(11730, 251.48, 1754.20, 398.29,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(11729, 251.46, 1754.91, 398.29,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(11738, 251.52, 1754.11, 398.54,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(11745, 251.98, 1753.48, 398.52,   0.00, 0.00, 5.00, 50, 50);
	CreateDynamicObject(11292, 253.41, 1756.17, 399.57,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(11721, 261.41, 1755.54, 399.01,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(19942, 263.87, 1749.84, 398.98,   0.00, 90.00, 90.00, 50, 50);
	CreateDynamicObject(19907, 240.94, 1748.88, 398.19,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(19903, 251.73, 1756.82, 398.36,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(19816, 252.20, 1757.26, 398.56,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(19815, 253.16, 1757.49, 399.93,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(19843, 253.17, 1757.32, 398.82,   0.00, 70.00, -90.00, 50, 50);
	CreateDynamicObject(19846, 253.44, 1757.18, 398.62,   -10.00, 70.00, -90.00, 50, 50);
	CreateDynamicObject(19623, 252.43, 1757.35, 398.41,   0.00, 0.00, 30.00, 50, 50);
	CreateDynamicObject(2171, 258.50, 1748.46, 398.29,   0.00, 0.00, 135.00, 50, 50);
	CreateDynamicObject(2184, 258.99, 1747.65, 398.29,   0.00, 0.00, -20.00, 50, 50);
	CreateDynamicObject(2196, 260.43, 1747.87, 399.06,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(328, 258.43, 1748.50, 399.07,   90.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(1271, 259.59, 1751.71, 398.61,   0.00, 0.00, 10.00, 50, 50);
	CreateDynamicObject(3016, 259.61, 1751.75, 399.08,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(1421, 255.73, 1752.53, 399.00,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(3006, 259.51, 1754.90, 398.10,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(19858, 263.59, 1760.47, 399.52,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(8555, 265.14, 1757.42, 374.95,   0.00, 0.00, 0.00, 50, 50); //floor
	CreateDynamicObject(3113, 274.38, 1760.59, 399.72,   0.00, 15.50, 90.00, 50, 50);
	CreateDynamicObject(2202, 257.37, 1749.60, 398.28,   0.00, 0.00, 135.00, 50, 50);
	return 1;

}
stock CreateSAnewsINT()
{
	SetDynamicObjectMaterial(CreateDynamicObject(6959, -1934.02039, 521.73389, 1182.36780,   0.00000, 90.00000, 90.00000, 1, -1, -1), 0, 8947, "vgslockup", "villainnwall02_128", 0xFFFFFFFF);
	SetDynamicObjectMaterial(CreateDynamicObject(6959, -1959.85217, 547.42078, 1189.16968,   0.00000, 90.00000, 0.00000, 1, -1, -1), 0, 8947, "vgslockup", "villainnwall02_128", 0xFFFFFFFF);
	SetDynamicObjectMaterial(CreateDynamicObject(19362, -1954.18396, 529.84302, 1201.23291,   0.00000, 0.00000, 0.00000, 1, -1, -1), 0, 8947, "vgslockup", "villainnwall02_128", 0xFFFFFFFF);
	SetDynamicObjectMaterial(CreateDynamicObject(19362, -1954.18396, 529.84302, 1197.73364,   0.00000, 0.00000, 0.00000, 1, -1, -1), 0, 8947, "vgslockup", "villainnwall02_128", 0xFFFFFFFF);
	SetDynamicObjectMaterial(CreateDynamicObject(19435, -1954.20215, 526.67981, 1201.94690,   90.00000, 0.00000, 0.00000, 1, -1, -1), 0, 8947, "vgslockup", "villainnwall02_128", 0xFFFFFFFF);
	SetDynamicObjectMaterial(CreateDynamicObject(19435, -1954.25781, 526.65521, 1203.50232,   90.00000, 0.00000, 0.00000, 1, -1, -1), 0, 8947, "vgslockup", "villainnwall02_128", 0xFFFFFFFF);
	SetDynamicObjectMaterial(CreateDynamicObject(19362, -1954.18396, 523.70300, 1201.23291,   0.00000, 0.00000, 0.00000, 1, -1, -1), 0, 8947, "vgslockup", "villainnwall02_128", 0xFFFFFFFF);
	SetDynamicObjectMaterial(CreateDynamicObject(19362, -1954.18396, 523.70300, 1197.73267,   0.00000, 0.00000, 0.00000, 1, -1, -1), 0, 8947, "vgslockup", "villainnwall02_128", 0xFFFFFFFF);
	SetDynamicObjectMaterial(CreateDynamicObject(19454, -1949.44482, 531.35992, 1198.60376,   0.00000, 0.00000, 90.00000, 1, -1, -1), 0, 8947, "vgslockup", "villainnwall02_128", 0xFFFFFFFF);
	SetDynamicObjectMaterial(CreateDynamicObject(19454, -1949.46118, 531.37140, 1202.69177,   0.00000, 0.00000, 90.00000, 1, -1, -1), 0, 8947, "vgslockup", "villainnwall02_128", 0xFFFFFFFF);
	SetDynamicObjectMaterial(CreateDynamicObject(19454, -1939.81274, 531.35992, 1198.60376,   0.00000, 0.00000, 90.00000, 1, -1, -1), 0, 8947, "vgslockup", "villainnwall02_128", 0xFFFFFFFF);
	SetDynamicObjectMaterial(CreateDynamicObject(19454, -1939.81274, 531.35992, 1202.69177,   0.00000, 0.00000, 90.00000, 1, -1, -1), 0, 8947, "vgslockup", "villainnwall02_128", 0xFFFFFFFF);
	SetDynamicObjectMaterial(CreateDynamicObject(19377, -1961.72571, 537.48901, 1198.60217,   0.00000, 0.00000, 90.00000, 1, -1, -1), 0, 8947, "vgslockup", "villainnwall02_128", 0xFFFFFFFF);
	SetDynamicObjectMaterial(CreateDynamicObject(19377, -1949.80566, 537.48901, 1198.60217,   0.00000, 0.00000, 90.00000, 1, -1, -1), 0, 8947, "vgslockup", "villainnwall02_128", 0xFFFFFFFF);
	SetDynamicObjectMaterial(CreateDynamicObject(19377, -1948.98145, 542.29999, 1198.60217,   0.00000, 0.00000, 0.00000, 1, -1, -1), 0, 8947, "vgslockup", "villainnwall02_128", 0xFFFFFFFF);
	SetDynamicObjectMaterial(CreateDynamicObject(19377, -1949.80566, 544.33099, 1198.60217,   0.00000, 0.00000, 90.00000, 1, -1, -1), 0, 8947, "vgslockup", "villainnwall02_128", 0xFFFFFFFF);
	SetDynamicObjectMaterial(CreateDynamicObject(19377, -1959.42981, 544.33301, 1198.60217,   0.00000, 0.00000, 90.00000, 1, -1, -1), 0, 8947, "vgslockup", "villainnwall02_128", 0xFFFFFFFF);
	SetDynamicObjectMaterial(CreateDynamicObject(19377, -1945.07715, 542.21710, 1198.60217,   0.00000, 0.00000, 0.00000, 1, -1, -1), 0, 8947, "vgslockup", "villainnwall02_128", 0xFFFFFFFF);
	SetDynamicObjectMaterial(CreateDynamicObject(19377, -1959.79333, 520.51007, 1198.60217,   0.00000, 0.00000, 0.00000, 1, -1, -1), 0, 8947, "vgslockup", "villainnwall02_128", 0xFFFFFFFF);
	SetDynamicObjectMaterial(CreateDynamicObject(19377, -1959.79333, 520.51007, 1209.64917,   0.00000, 0.00000, 0.00000, 1, -1, -1), 0, 8947, "vgslockup", "villainnwall02_128", 0xFFFFFFFF);
	SetDynamicObjectMaterial(CreateDynamicObject(19377, -1957.03052, 530.40948, 1209.64917,   0.00000, 0.00000, 90.00000, 1, -1, -1), 0, 8947, "vgslockup", "villainnwall02_128", 0xFFFFFFFF);
	SetDynamicObjectMaterial(CreateDynamicObject(19377, -1950.99854, 530.40747, 1209.64917,   0.00000, 0.00000, 90.00000, 1, -1, -1), 0, 8947, "vgslockup", "villainnwall02_128", 0xFFFFFFFF);
	SetDynamicObjectMaterial(CreateDynamicObject(19377, -1942.48254, 530.40948, 1212.52954,   0.00000, 0.00000, 90.00000, 1, -1, -1), 0, 8947, "vgslockup", "villainnwall02_128", 0xFFFFFFFF);
	SetDynamicObjectMaterial(CreateDynamicObject(19377, -1939.26355, 530.40747, 1209.64917,   0.00000, 0.00000, 90.00000, 1, -1, -1), 0, 8947, "vgslockup", "villainnwall02_128", 0xFFFFFFFF);
	SetDynamicObjectMaterial(CreateDynamicObject(19377, -1965.77625, 529.17993, 1191.82495,   0.00000, 0.00000, 90.00000, 1, -1, -1), 0, 14596, "papaerchaseoffice", "wall_stone6_256", 0xFFFFFFFF);
	SetDynamicObjectMaterial(CreateDynamicObject(19377, -1960.94202, 525.74072, 1215.33960,   0.00000, 0.00000, 0.00000, 1, -1, -1), 0, 14596, "papaerchaseoffice", "wall_stone6_256", 0xFFFFFFFF);
	SetDynamicObjectMaterial(CreateDynamicObject(6959, -1940.10730, 527.49188, 1209.93347,   0.00000, 0.00000, 0.00000, 1, -1, -1), 0, 13724, "docg01_lahills", "sw_mansionwin", 0xFFFFFFFF);
	SetDynamicObjectMaterial(CreateDynamicObject(6959, -1939.45740, 537.86249, 1202.97363,   0.00000, 0.00000, 0.00000, 1, -1, -1), 0, 1491, "int_doors", "CJ_W_wood", 0xFFFFFFFF);
	SetDynamicObjectMaterial(CreateDynamicObject(6959, -1940.12939, 527.52997, 1198.63281,   0.00000, 0.00000, 0.00000, 1, -1, -1), 0, 1491, "int_doors", "CJ_W_wood", 0xFFFFFFFF);
	SetDynamicObjectMaterial(CreateDynamicObject(6959, -1939.45740, 537.86249, 1204.57422,   0.00000, 0.00000, 0.00000, 1, -1, -1), 0, 1491, "int_doors", "CJ_W_wood", 0xFFFFFFFF);
	CreateDynamicObject(9518, -1943.89392, 500.71091, 1198.82068,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(9518, -1954.87610, 500.71091, 1208.40674,   0.00000, 180.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(2774, -1951.99902, 507.11160, 1198.59888,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(2774, -1946.85400, 507.11160, 1198.59888,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(2774, -1949.98303, 507.11160, 1203.74390,   90.00000, 0.00000, 90.00000, 1, -1, -1);
	CreateDynamicObject(2774, -1949.64697, 507.11160, 1209.13391,   90.00000, 0.00000, 90.00000, 1, -1, -1);
	CreateDynamicObject(2774, -1958.76794, 507.11160, 1198.59888,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(2774, -1940.08496, 507.11160, 1198.59888,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(2774, -1940.08496, 517.15662, 1198.59888,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(2774, -1958.76221, 517.13745, 1198.59888,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(2774, -1949.54895, 517.15662, 1198.59888,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(2774, -1961.79895, 517.15662, 1198.58496,   -90.00000, 0.00000, 90.00000, 1, -1, -1);
	CreateDynamicObject(1806, -1952.85095, 518.90991, 1198.60046,   0.00000, 0.00000, 200.00000, 1, -1, -1);
	CreateDynamicObject(2165, -1950.97180, 517.11139, 1198.60156,   0.00000, 0.00000, 180.00000, 1, -1, -1);
	CreateDynamicObject(19176, -1949.41003, 506.82651, 1200.05762,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(2774, -1949.64697, 517.15662, 1209.13391,   90.00000, 0.00000, 90.00000, 1, -1, -1);
	CreateDynamicObject(8947, -1966.96448, 510.99741, 1201.49414,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(8947, -1932.43347, 509.79639, 1201.49414,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(8947, -1932.43347, 520.04541, 1207.54211,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(3850, -1955.93225, 517.13678, 1205.05261,   0.00000, 0.00000, 90.00000, 1, -1, -1);
	CreateDynamicObject(3850, -1952.35596, 517.15521, 1205.05261,   0.00000, 0.00000, 90.00000, 1, -1, -1);
	CreateDynamicObject(3850, -1946.72034, 517.13678, 1205.05261,   0.00000, 0.00000, 90.00000, 1, -1, -1);
	CreateDynamicObject(3850, -1943.02429, 517.13678, 1205.05261,   0.00000, 0.00000, 90.00000, 1, -1, -1);
	CreateDynamicObject(14867, -1946.60461, 521.21088, 1200.13196,   0.00000, 0.00000, -180.00000, 1, -1, -1);
	CreateDynamicObject(2774, -1958.76794, 522.00763, 1191.04675,   0.00000, 180.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(2774, -1954.16174, 522.00763, 1191.04675,   0.00000, 180.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(2774, -1966.63501, 522.00763, 1202.16406,   -90.00000, 0.00000, 90.00000, 1, -1, -1);
	CreateDynamicObject(2008, -1954.96606, 517.27197, 1198.57007,   0.00000, 0.00000, 180.00000, 1, -1, -1);
	CreateDynamicObject(640, -1955.46460, 507.50919, 1199.30115,   0.00000, 0.00000, 90.00000, 1, -1, -1);
	CreateDynamicObject(640, -1943.42859, 507.50919, 1199.30115,   0.00000, 0.00000, 90.00000, 1, -1, -1);
	CreateDynamicObject(2240, -1957.09094, 516.95880, 1199.89844,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(2257, -1939.84680, 511.87280, 1203.90710,   0.00000, 0.00000, -90.00000, 1, -1, -1);
	CreateDynamicObject(2707, -1956.08569, 517.56567, 1202.88489,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(2707, -1957.07971, 517.56567, 1202.88489,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(2707, -1955.09167, 517.56567, 1202.88489,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(2707, -1954.09766, 517.56567, 1202.88489,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(2707, -1953.10376, 517.56567, 1202.88489,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(2707, -1952.10974, 517.56567, 1202.88489,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(2707, -1951.25769, 517.56567, 1202.88489,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(2011, -1947.16211, 508.57126, 1198.60181,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(2011, -1951.52979, 508.49530, 1198.60181,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(2011, -1949.39539, 515.59241, 1198.60181,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(1713, -1952.67773, 509.06290, 1198.60181,   0.00000, 0.00000, 180.00000, 1, -1, -1);
	CreateDynamicObject(1713, -1955.86890, 509.05807, 1198.60181,   0.00000, 0.00000, 180.00000, 1, -1, -1);
	CreateDynamicObject(2855, -1954.05420, 510.73621, 1199.08362,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(9345, -1935.61487, 514.42932, 1198.83984,   0.00000, 0.00000, 180.00000, 1, -1, -1);
	CreateDynamicObject(9345, -1935.61487, 514.42932, 1199.33667,   0.00000, 0.00000, 180.00000, 1, -1, -1);
	CreateDynamicObject(9345, -1931.05017, 513.19043, 1199.34668,   0.00000, 0.00000, 180.00000, 1, -1, -1);
	CreateDynamicObject(825, -1942.37158, 515.30511, 1200.32983,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(14455, -1959.44824, 514.25989, 1200.19238,   0.00000, 0.00000, -90.00000, 1, -1, -1);
	CreateDynamicObject(1713, -1954.28821, 512.58069, 1198.60181,   0.00000, 0.00000, 360.00000, 1, -1, -1);
	CreateDynamicObject(2315, -1954.27979, 510.60620, 1198.60046,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(2854, -1953.50586, 510.59689, 1198.65771,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(2852, -1956.47754, 510.77734, 1199.09314,   0.00000, 0.00000, 84.00000, 1, -1, -1);
	CreateDynamicObject(14596, -1966.33569, 530.11639, 1203.49451,   0.00000, 0.00000, 180.00000, 1, -1, -1);
	CreateDynamicObject(8947, -1966.96252, 510.99640, 1206.03308,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(2164, -1959.45435, 518.68103, 1198.59607,   0.00000, 0.00000, 90.00000, 1, -1, -1);
	CreateDynamicObject(2007, -1959.06909, 520.61798, 1198.60242,   0.00000, 0.00000, 90.00000, 1, -1, -1);
	CreateDynamicObject(2774, -1947.42102, 517.83759, 1203.74390,   -90.00000, 0.00000, 270.00000, 1, -1, -1);
	CreateDynamicObject(3851, -1948.53760, 531.28870, 1200.39600,   0.00000, 0.00000, 90.00000, 1, -1, -1);
	CreateDynamicObject(1806, -1955.97778, 519.07062, 1198.60046,   0.00000, 0.00000, 165.00000, 1, -1, -1);
	CreateDynamicObject(2774, -1960.20251, 529.77881, 1203.44226,   -90.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(2774, -1960.20642, 529.77881, 1203.74414,   -90.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(14597, -1945.36548, 543.63977, 1206.54224,   0.00000, 0.00000, 270.12000, 1, -1, -1);
	CreateDynamicObject(14598, -1933.57349, 534.16309, 1202.71008,   0.00000, 0.00000, 270.00000, 1, -1, -1);
	CreateDynamicObject(2774, -1960.20642, 529.77881, 1209.24084,   -90.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(14393, -1945.37817, 526.44971, 1200.89172,   0.00000, 0.00000, 180.00000, 1, -1, -1);
	CreateDynamicObject(14392, -1945.47375, 526.44159, 1199.89063,   0.00000, 0.00000, 180.00000, 1, -1, -1);
	CreateDynamicObject(3851, -1937.23669, 531.28870, 1200.39600,   0.00000, 0.00000, 90.00000, 1, -1, -1);
	CreateDynamicObject(8947, -1929.18616, 538.15411, 1201.38306,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(8947, -1930.89795, 548.13538, 1201.38306,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(2132, -1938.82947, 538.67548, 1198.60193,   0.00000, 0.00000, -90.00000, 1, -1, -1);
	CreateDynamicObject(2133, -1938.82947, 539.67999, 1198.60059,   0.00000, 0.00000, -90.00000, 1, -1, -1);
	CreateDynamicObject(2131, -1938.82947, 542.68060, 1198.60181,   0.00000, 0.00000, -90.00000, 1, -1, -1);
	CreateDynamicObject(2147, -1938.82947, 540.66949, 1198.60107,   0.00000, 0.00000, -90.00000, 1, -1, -1);
	CreateDynamicObject(1432, -1941.95947, 539.95538, 1198.71191,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(2616, -1944.94666, 540.08228, 1200.19714,   0.00000, 0.00000, 90.00000, 1, -1, -1);
	CreateDynamicObject(2611, -1944.97620, 539.78668, 1200.30408,   0.00000, 0.00000, 90.00000, 1, -1, -1);
	CreateDynamicObject(2149, -1938.69250, 539.66638, 1199.79907,   0.00000, 0.00000, 268.20499);
	CreateDynamicObject(1209, -1944.66223, 541.80719, 1198.59985,   0.00000, 0.00000, 90.00000, 1, -1, -1);
	CreateDynamicObject(2241, -1938.72070, 541.73328, 1201.49609,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(2011, -1944.23572, 537.85986, 1198.60132,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(2261, -1938.77234, 538.10681, 1200.73035,   0.00000, 0.00000, -90.00000, 1, -1, -1);
	CreateDynamicObject(1713, -1957.38135, 512.58484, 1198.60181,   0.00000, 0.00000, 360.00000, 1, -1, -1);
	CreateDynamicObject(2315, -1957.57727, 510.71524, 1198.60046,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(19325, -1945.06824, 528.03540, 1199.48462,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(9518, -1934.89038, 549.92542, 1198.79272,   0.00000, 0.00000, 180.00000, 1, -1, -1);
	CreateDynamicObject(2606, -1960.05505, 540.34998, 1200.59387,   0.00000, 0.00000, 90.00000, 1, -1, -1);
	CreateDynamicObject(2606, -1960.05505, 540.34998, 1201.03394,   0.00000, 0.00000, 90.00000, 1, -1, -1);
	CreateDynamicObject(2606, -1960.05505, 540.34998, 1201.47388,   0.00000, 0.00000, 90.00000, 1, -1, -1);
	CreateDynamicObject(2606, -1960.05505, 542.31000, 1201.03394,   0.00000, 0.00000, 90.00000, 1, -1, -1);
	CreateDynamicObject(2606, -1960.05505, 542.31000, 1200.59387,   0.00000, 0.00000, 90.00000, 1, -1, -1);
	CreateDynamicObject(2606, -1960.05505, 542.31000, 1201.47388,   0.00000, 0.00000, 90.00000, 1, -1, -1);
	CreateDynamicObject(2774, -1960.20251, 553.42383, 1203.44226,   -90.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(2169, -1955.04236, 540.01801, 1198.60168,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(2169, -1954.01746, 540.96051, 1198.59973,   0.00000, 0.00000, 180.00000, 1, -1, -1);
	CreateDynamicObject(2169, -1953.04736, 540.01801, 1198.60168,   0.00000, 0.00000, 90.00000, 1, -1, -1);
	CreateDynamicObject(2190, -1954.73901, 540.85962, 1199.38379,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(330, -1954.14514, 540.37744, 1199.36865,   90.00000, 0.00000, -188.00000, 1, -1, -1);
	CreateDynamicObject(2232, -1956.22961, 543.59515, 1199.21265,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(2894, -1954.39661, 540.97510, 1199.39001,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(1962, -1954.94324, 544.18701, 1200.88147,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(1958, -1953.51221, 540.89130, 1199.38635,   0.00000, 0.00000, 193.00000, 1, -1, -1);
	CreateDynamicObject(1955, -1954.58667, 540.55579, 1199.39526,   -113.00000, -11.00000, 324.00000, 1, -1, -1);
	CreateDynamicObject(1955, -1954.57129, 540.86603, 1199.68018,   0.00000, 295.00000, 1.00000, 1, -1, -1);
	CreateDynamicObject(1954, -1954.00977, 540.46661, 1199.45703,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(2190, -1955.38867, 541.32648, 1199.38379,   0.00000, 0.00000, 127.00000, 1, -1, -1);
	CreateDynamicObject(3387, -1954.71497, 543.76270, 1198.60205,   0.00000, 0.00000, -91.00000, 1, -1, -1);
	CreateDynamicObject(3387, -1953.35913, 543.66864, 1198.60205,   0.00000, 0.00000, -91.00000, 1, -1, -1);
	CreateDynamicObject(1663, -1954.61328, 541.95819, 1199.02515,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(1663, -1954.78625, 539.29608, 1199.02515,   0.00000, 0.00000, 142.00000, 1, -1, -1);
	CreateDynamicObject(1663, -1951.89148, 540.62250, 1199.02515,   0.00000, 0.00000, 273.00000, 1, -1, -1);
	CreateDynamicObject(1955, -1953.32446, 540.37268, 1199.39526,   -113.00000, -11.00000, 251.00000, 1, -1, -1);
	CreateDynamicObject(1955, -1953.02930, 540.55847, 1199.70117,   0.00000, -91.00000, -55.00000, 1, -1, -1);
	CreateDynamicObject(1955, -1954.54614, 540.35889, 1199.39526,   -113.00000, -55.00000, 120.00000, 1, -1, -1);
	CreateDynamicObject(1955, -1954.45605, 540.09308, 1199.74316,   0.00000, -76.00000, 207.00000, 1, -1, -1);
	CreateDynamicObject(2002, -1952.24963, 543.68512, 1198.60254,   0.00000, 0.00000, 4.00000, 1, -1, -1);
	CreateDynamicObject(2002, -1946.32642, 508.53812, 1198.60254,   0.00000, 0.00000, 180.00000, 1, -1, -1);
	CreateDynamicObject(2225, -1953.05627, 539.56293, 1198.60144,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(2611, -1951.66418, 537.64160, 1200.09204,   0.00000, 0.00000, -180.00000, 1, -1, -1);
	CreateDynamicObject(14633, -1954.85486, 546.61298, 1200.06116,   0.00000, 0.00000, 180.00000, 1, -1, -1);
	CreateDynamicObject(2165, -1937.55957, 542.85272, 1204.54626,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(2166, -1939.53674, 541.86206, 1204.54492,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(2165, -1935.59961, 542.85272, 1204.54626,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(2165, -1935.59961, 546.85669, 1204.54626,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(2166, -1933.37390, 546.71063, 1204.54492,   0.00000, 0.00000, -90.00000, 1, -1, -1);
	CreateDynamicObject(2165, -1939.06323, 546.89581, 1204.54626,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(2164, -1941.07166, 547.39948, 1204.54724,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(2167, -1936.78479, 547.47406, 1204.54504,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(2200, -1931.98755, 543.53192, 1204.54565,   0.00000, 0.00000, -90.00000, 1, -1, -1);
	CreateDynamicObject(2356, -1938.66870, 541.63470, 1204.54541,   0.00000, 0.00000, 25.00000, 1, -1, -1);
	CreateDynamicObject(2356, -1936.80847, 541.63501, 1204.54541,   0.00000, 0.00000, -11.00000, 1, -1, -1);
	CreateDynamicObject(2356, -1935.24158, 542.25085, 1204.54541,   0.00000, 0.00000, 193.00000, 1, -1, -1);
	CreateDynamicObject(2356, -1933.34326, 546.01453, 1204.54541,   0.00000, 0.00000, 258.00000, 1, -1, -1);
	CreateDynamicObject(2356, -1934.97510, 545.61475, 1204.54541,   0.00000, 0.00000, 360.00000, 1, -1, -1);
	CreateDynamicObject(2356, -1938.13147, 545.79950, 1204.54541,   0.00000, 0.00000, 4.00000, 1, -1, -1);
	CreateDynamicObject(2309, -1941.79089, 541.25653, 1204.54370,   0.00000, 0.00000, 273.00000, 1, -1, -1);
	CreateDynamicObject(2309, -1941.73120, 542.78320, 1204.54370,   0.00000, 0.00000, 267.00000, 1, -1, -1);
	CreateDynamicObject(2173, -1939.12500, 535.52509, 1204.54504,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(2173, -1937.08496, 535.52509, 1204.54504,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(2173, -1936.06946, 536.55389, 1204.54504,   0.00000, 0.00000, 180.00000, 1, -1, -1);
	CreateDynamicObject(2173, -1938.10974, 536.55341, 1204.54504,   0.00000, 0.00000, 180.00000, 1, -1, -1);
	CreateDynamicObject(2173, -1935.08521, 535.56427, 1204.54504,   0.00000, 0.00000, 90.00000, 1, -1, -1);
	CreateDynamicObject(1671, -1933.80042, 536.47375, 1204.96484,   0.00000, 0.00000, -89.00000, 1, -1, -1);
	CreateDynamicObject(1671, -1936.51099, 534.50018, 1204.96484,   0.00000, 0.00000, -192.94000, 1, -1, -1);
	CreateDynamicObject(1671, -1938.75024, 534.41394, 1205.07312,   0.00000, 0.00000, 162.61290, 1, -1, -1);
	CreateDynamicObject(1671, -1940.14941, 535.94818, 1204.96484,   0.00000, 0.00000, -273.00000, 1, -1, -1);
	CreateDynamicObject(1671, -1938.65833, 537.38788, 1204.96484,   0.00000, 0.00000, -360.00000, 1, -1, -1);
	CreateDynamicObject(1671, -1936.79517, 537.56537, 1204.96484,   0.00000, 0.00000, -287.00000, 1, -1, -1);
	CreateDynamicObject(3077, -1931.81958, 536.16486, 1204.03821,   0.00000, 0.00000, -90.00000, 1, -1, -1);
	CreateDynamicObject(14532, -1932.48853, 533.35852, 1205.51794,   0.00000, 0.00000, 62.00000, 1, -1, -1);
	CreateDynamicObject(19165, -1931.82385, 536.85382, 1206.22021,   90.00000, 0.00000, -90.00000, 1, -1, -1);
	CreateDynamicObject(2615, -1931.87231, 535.31671, 1206.08679,   0.00000, 0.00000, -90.00000, 1, -1, -1);
	CreateDynamicObject(2076, -1938.61792, 536.06763, 1207.82764,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(2076, -1936.47595, 536.06763, 1207.82764,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(2010, -1940.60071, 539.12891, 1204.54700,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(2010, -1940.63049, 532.75623, 1204.54700,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(2206, -1944.64856, 553.10278, 1204.54724,   0.00000, 0.00000, 180.00000, 1, -1, -1);
	CreateDynamicObject(14455, -1942.63196, 550.14148, 1206.18481,   0.00000, 0.00000, 90.00000, 1, -1, -1);
	CreateDynamicObject(14455, -1948.07202, 554.49353, 1206.18481,   0.00000, 0.00000, 270.00000, 1, -1, -1);
	CreateDynamicObject(1714, -1945.41040, 554.61230, 1204.55103,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(1811, -1951.16870, 544.92328, 1205.16235,   0.00000, 0.00000, 344.26666, 1, -1, -1);
	CreateDynamicObject(2161, -1947.10510, 556.78223, 1204.56335,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(2164, -1944.95068, 556.73285, 1204.55103,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(2254, -1946.60400, 556.68604, 1207.17737,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(1705, -1946.69214, 548.79785, 1204.54614,   0.00000, 0.00000, 180.00000, 1, -1, -1);
	CreateDynamicObject(1705, -1943.13208, 548.78027, 1204.54614,   0.00000, 0.00000, 180.00000, 1, -1, -1);
	CreateDynamicObject(2166, -1953.66296, 545.68860, 1204.54492,   0.00000, 0.00000, -90.00000, 1, -1, -1);
	CreateDynamicObject(2960, -1951.92285, 544.01288, 1206.68457,   0.00000, 90.00000, 90.00000, 1, -1, -1);
	CreateDynamicObject(2960, -1952.07410, 543.88818, 1206.68457,   0.00000, 90.00000, 180.00000, 1, -1, -1);
	CreateDynamicObject(19325, -1955.50696, 543.88141, 1206.60864,   0.00000, 0.00000, 90.00000, 1, -1, -1);
	CreateDynamicObject(2165, -1955.67749, 545.70795, 1204.54626,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(2894, -1953.60754, 545.74323, 1205.33484,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(2165, -1955.15723, 542.18420, 1204.54626,   0.00000, 0.00000, -90.00000, 1, -1, -1);
	CreateDynamicObject(2007, -1958.43481, 540.83649, 1204.54346,   0.00000, 0.00000, 90.00000, 1, -1, -1);
	CreateDynamicObject(2007, -1958.43481, 540.83649, 1205.94348,   0.00000, 0.00000, 90.00000, 1, -1, -1);
	CreateDynamicObject(2007, -1958.43481, 541.84448, 1204.54346,   0.00000, 0.00000, 90.00000, 1, -1, -1);
	CreateDynamicObject(2007, -1958.43481, 542.82452, 1204.54346,   0.00000, 0.00000, 90.00000, 1, -1, -1);
	CreateDynamicObject(2007, -1958.43481, 542.82452, 1205.94348,   0.00000, 0.00000, 90.00000, 1, -1, -1);
	CreateDynamicObject(2007, -1958.43481, 541.84448, 1205.94348,   0.00000, 0.00000, 90.00000, 1, -1, -1);
	CreateDynamicObject(2163, -1956.11536, 540.24768, 1204.54529,   0.00000, 0.00000, 180.00000, 1, -1, -1);
	CreateDynamicObject(1806, -1953.72083, 545.00745, 1204.54541,   0.00000, 0.00000, 288.09891, 1, -1, -1);
	CreateDynamicObject(1702, -1949.47766, 543.36475, 1204.54578,   0.00000, 0.00000, -90.00000, 1, -1, -1);
	CreateDynamicObject(2199, -1958.76160, 544.89795, 1204.54468,   0.00000, 0.00000, 90.00000, 1, -1, -1);
	CreateDynamicObject(2200, -1958.14050, 547.50775, 1204.54431,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(14391, -1946.69812, 527.21100, 1199.61255,   0.00000, 0.00000, 196.00000, 1, -1, -1);
	CreateDynamicObject(14391, -1958.94348, 540.84711, 1199.53247,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(14632, -1950.26172, 546.02649, 1206.02905,   0.00000, 0.00000, 90.00000, 1, -1, -1);
	CreateDynamicObject(948, -1949.68982, 540.60999, 1204.54797,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(949, -1949.56250, 546.71442, 1205.17163,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(2011, -1954.97815, 540.51892, 1204.54431,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(2194, -1946.11047, 552.86908, 1205.75696,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(2247, -1956.63074, 547.24384, 1206.84570,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(14867, -1953.25696, 539.44427, 1206.03674,   0.00000, 0.00000, -180.00000, 1, -1, -1);
	CreateDynamicObject(2191, -1949.64014, 533.13544, 1204.54761,   0.00000, 0.00000, 181.00000, 1, -1, -1);
	CreateDynamicObject(2167, -1958.79883, 534.60309, 1204.54382,   0.00000, 0.00000, 91.00000, 1, -1, -1);
	CreateDynamicObject(2258, -1951.81738, 547.56226, 1207.12842,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(18755, -1934.64197, 533.66669, 1200.50586,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(18756, -1934.62891, 535.58551, 1200.47754,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(18757, -1934.62891, 531.59912, 1200.47754,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(18755, -1937.91895, 527.55402, 1206.45300,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(18756, -1937.92590, 529.56940, 1206.42017,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(18757, -1937.92590, 525.61169, 1206.42017,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(2774, -1954.30237, 518.21448, 1209.47192,   90.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(2774, -1949.54895, 518.21448, 1209.47192,   90.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(2774, -1944.30103, 518.21448, 1209.47192,   90.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(2774, -1940.08496, 518.21448, 1209.46985,   90.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(2774, -1959.98376, 518.21033, 1209.45190,   90.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(2202, -1952.49231, 532.86145, 1204.54480,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(2167, -1958.84949, 535.63458, 1204.54382,   0.00000, 0.00000, 91.00000, 1, -1, -1);
	CreateDynamicObject(9345, -1936.75269, 521.48163, 1204.74829,   0.00000, 0.00000, 180.00000, 1, -1, -1);
	CreateDynamicObject(9345, -1936.75269, 521.48163, 1205.24634,   0.00000, 0.00000, 180.00000, 1, -1, -1);
	CreateDynamicObject(9345, -1931.19067, 521.48163, 1205.26233,   0.00000, 0.00000, 180.00000, 1, -1, -1);
	CreateDynamicObject(9345, -1931.19067, 520.03961, 1205.26233,   0.00000, 0.00000, 180.00000, 1, -1, -1);
	CreateDynamicObject(14402, -1943.99548, 521.96399, 1205.90747,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(14402, -1941.67419, 521.40784, 1205.90747,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(638, -1953.05054, 529.71680, 1205.20667,   0.00000, 0.00000, 90.00000, 1, -1, -1);
	CreateDynamicObject(2257, -1951.86792, 530.28522, 1207.21680,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(1216, -1943.72400, 511.85321, 1199.20776,   0.00000, 0.00000, -16.00000, 1, -1, -1);
	CreateDynamicObject(1216, -1941.27466, 511.12018, 1199.20776,   0.00000, 0.00000, -16.00000, 1, -1, -1);
	CreateDynamicObject(1663, -1957.26672, 540.24512, 1199.02515,   0.00000, 0.00000, 280.00000, 1, -1, -1);
	CreateDynamicObject(2256, -1950.42664, 537.40106, 1201.00012,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(2010, -1958.71924, 524.23828, 1198.60132,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(2010, -1959.05115, 528.69135, 1198.60132,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(18075, -1946.83398, 510.12341, 1208.73242,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(18075, -1957.02075, 510.13211, 1208.73242,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(18075, -1957.01941, 524.43011, 1208.73242,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(18075, -1946.83398, 524.43011, 1208.73242,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(945, -1954.02405, 540.15125, 1207.89270,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(18075, -1959.55554, 530.48059, 1203.00244,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(1734, -1941.82349, 539.76111, 1202.94458,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(18075, -1948.15674, 532.04657, 1203.00244,   0.00000, 0.00000, -90.00000, 1, -1, -1);
	CreateDynamicObject(1533, -1961.12585, 527.12506, 1210.19922,   0.00000, 0.00000, -90.00000, 1, -1, -1);
	CreateDynamicObject(1533, -1963.48926, 529.30328, 1192.77478,   0.00000, 0.00000, -180.00000, 1, -1, -1);
	CreateDynamicObject(1713, -1959.11353, 530.25732, 1198.60181,   0.00000, 0.00000, 89.00000, 1, -1, -1);
	CreateDynamicObject(1713, -1952.12598, 536.62579, 1198.60181,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(1713, -1950.94189, 529.35504, 1204.54370,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(1713, -1957.20605, 529.49261, 1204.54370,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(1713, -1938.40918, 539.22144, 1204.54370,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(17556, -1919.38330, 557.78351, 1174.05945,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(10183, -1907.13855, 564.07758, 1169.76855,   0.00000, 0.00000, -44.43500, 1, -1, -1);
	CreateDynamicObject(10183, -1931.38086, 563.97272, 1169.76855,   0.00000, 0.00000, 135.46001, 1, -1, -1);
	CreateDynamicObject(17556, -1919.38135, 567.87952, 1174.00134,   0.00000, 0.00000, 180.00000, 1, -1, -1);
	CreateDynamicObject(2949, -1910.73669, 541.28729, 1169.68884,   0.00000, 0.00000, -90.00000, 1, -1, -1);
	CreateDynamicObject(18755, -1921.05676, 586.37207, 1171.66675,   0.00000, 0.00000, 90.00000, 1, -1, -1);
	CreateDynamicObject(18756, -1921.02234, 582.54999, 1171.66785,   0.00000, 0.00000, -90.00000, 1, -1, -1);
	CreateDynamicObject(18757, -1921.04077, 582.54999, 1171.66785,   0.00000, 0.00000, -90.00000, 1, -1, -1);
	CreateDynamicObject(3055, -1918.98547, 541.33447, 1170.18042,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(982, -1937.66223, 588.59460, 34.97530,   0.00000, 0.00000, 90.00000, 1, -1, -1);
	CreateDynamicObject(982, -1937.58875, 571.72052, 35.00330,   0.00000, 0.00000, 90.00000, 1, -1, -1);
	CreateDynamicObject(984, -1924.77246, 578.23779, 35.00300,   0.00000, 0.00000, 0.00000, 1, -1, -1);
	CreateDynamicObject(984, -1956.77258, 571.72778, 34.94730,   0.00000, 0.00000, 90.00000, 1, -1, -1);
	CreateDynamicObject(983, -1953.64978, 588.59833, 34.97530,   0.00000, 0.00000, 90.00000, 1, -1, -1);
	CreateDynamicObject(983, -1957.76575, 588.59833, 34.97530,   0.00000, 0.00000, 90.00000, 1, -1, -1);
	CreateDynamicObject(983, -1960.96484, 585.34497, 34.97530,   0.00000, 0.00000, 180.00000, 1, -1, -1);
	CreateDynamicObject(983, -1924.75317, 585.38013, 34.97530,   0.00000, 0.00000, 180.00000, 1, -1, -1);
	CreateDynamicObject(1811, -1945.63403, 551.45215, 1205.16235,   0.00000, 0.00000, -84.00000, 1, -1, -1);
	return 1;
}
//LSPD stuff by Nate/Jacob
stock CustObjectLSPDExterior(objectid, Float:x, Float:y, Float:z, Float:rx, Float:ry, Float:rz) //
{
	new LSPDExterior=CreateDynamicObject(objectid, x, y, z, rx, ry, rz); //
	SetDynamicObjectMaterial(LSPDExterior, 6, 10398, "countryclub_sfs", "hc_brickwall1", 0); //Wall
	SetDynamicObjectMaterial(LSPDExterior, 12, 10789, "xenon_sfse", "newindow4", 0); //Windows
	SetDynamicObjectMaterial(LSPDExterior, 4, 10053, "slapart01sfe", "whitedecosfe4", 0); //White pill
	SetDynamicObjectMaterial(LSPDExterior, 5, 10053, "slapart01sfe", "whitedecosfe4", 0); //White pill
	SetDynamicObjectMaterial(LSPDExterior, 2, 3979, "civic01_lan", "sl_laglasswall2", 0); //Glass above the door
	SetDynamicObjectMaterial(LSPDExterior, 8, 10398, "countryclub_sfs", "hc_brickwall1", 0); //Garage wall
	SetDynamicObjectMaterial(LSPDExterior, 9, 16150, "ufo_bar", "GEwhite1_64", 0); //Roof
	SetDynamicObjectMaterial(LSPDExterior, 7, 10053, "slapart01sfe", "whitedecosfe4", 0); //Top
}

stock CreateFurnitureExterior(){
	new IKEA;
	IKEA = CreateObject(5810, 1114.31250, -1348.10156, 17.98440,   0.00000, 0.00000, 0.00000);
	SetObjectMaterial(IKEA, 5, 18265, "w_town3cs_t", "ws_whitewall2_top", 0);//Blue
	SetObjectMaterial(IKEA, 1, 13014, "sw_block04", "studiowall2_law", 0);//Yellow
	SetObjectMaterial(IKEA, 7, 10359, "roads_sfs", "ws_carparknew2", 0);//Roof
	SetObjectMaterial(IKEA, 2, 8488, "flamingo1", "shopwindowlow2_256", 0);//windows
	//I
	new IKEAI;
	IKEAI = CreateDynamicObject(19327,1095.7576900,-1369.6868900,20.9198000,0.0000000,0.0000000,0.0000000); //
	SetDynamicObjectMaterialText(IKEAI, 0, "D", OBJECT_MATERIAL_SIZE_256x128, "Tahoma", 180, 1, 0xFF0000BB, 0x00000000, OBJECT_MATERIAL_TEXT_ALIGN_CENTER);
	//K
	new IKEAK;
	IKEAK = CreateDynamicObject(19327,1096.5737300,-1369.6888400,20.9198000,0.0000000,0.0000000,0.0000000); //
	SetDynamicObjectMaterialText(IKEAK, 0, "I", OBJECT_MATERIAL_SIZE_256x128, "Tahoma", 180, 1, 0xFF0000BB, 0x00000000, OBJECT_MATERIAL_TEXT_ALIGN_CENTER);
	//E
	new IKEAE;
	IKEAE = CreateDynamicObject(19327,1097.3896500,-1369.6908000,20.9198000,0.0000000,0.0000000,0.0000000); //
	SetDynamicObjectMaterialText(IKEAE, 0, "K", OBJECT_MATERIAL_SIZE_256x128, "Tahoma", 180, 1, 0xFF0000BB, 0x00000000, OBJECT_MATERIAL_TEXT_ALIGN_CENTER);
	//A
	new IKEAA;
	IKEAA = CreateDynamicObject(19327,1098.2055700,-1369.6927500,20.9198000,0.0000000,0.0000000,0.0000000); //
	SetDynamicObjectMaterialText(IKEAA, 0, "K", OBJECT_MATERIAL_SIZE_256x128, "Tahoma", 180, 1, 0xFF0000BB, 0x00000000, OBJECT_MATERIAL_TEXT_ALIGN_CENTER);
	//Home
	new IKEAHome;
	IKEAHome = CreateDynamicObject(19327,1096.0216100,-1369.6927500,19.9958000,0.0000000,0.0000000,0.0000000); //
	SetDynamicObjectMaterialText(IKEAHome, 0, "HOME", OBJECT_MATERIAL_SIZE_256x128, "Tahoma", 40, 1, 0xFF0000BB, 0x00000000, OBJECT_MATERIAL_TEXT_ALIGN_CENTER);
	//Furnishing
	new IKEAFurnishing;
	IKEAFurnishing = CreateDynamicObject(19327,1098.3575400,-1369.6927500,19.9958000,0.0000000,0.0000000,0.0000000); //
	SetDynamicObjectMaterialText(IKEAFurnishing, 0, "FURNISHING", OBJECT_MATERIAL_SIZE_256x128, "Tahoma", 40, 1, 0xFF0000BB, 0x00000000, OBJECT_MATERIAL_TEXT_ALIGN_CENTER);
	//Sign
	new IKEASign;
	IKEASign = CreateDynamicObject(19327,1136.5773900,-1369.6822500,14.9830000,0.0000000,0.0000000,0.0000000); //
	SetDynamicObjectMaterialText(IKEASign, 0, "Nate", OBJECT_MATERIAL_SIZE_256x128, "Tahoma", 12, 1, 0xFF000000, 0x00000000, OBJECT_MATERIAL_TEXT_ALIGN_CENTER);
	//Bushes
	new IKEABushes;
	IKEABushes = CreateDynamicObject(8650,1122.3241000,-1376.8032200,13.3878000,0.0000000,0.0000000,90.8400000); //
	SetDynamicObjectMaterial(IKEABushes, 0, 8463, "vgseland", "Grass_128HV", 0);//
	SetDynamicObjectMaterial(IKEABushes, 1, 8463, "vgseland", "Grass_128HV", 0);//
	//Rest of the stuff
	CreateDynamicObject(1368,1127.6096200,-1375.0481000,13.6554000,0.0000000,0.0000000,180.0000000); //
	CreateDynamicObject(1368,1111.2086200,-1375.0481000,13.6554000,0.0000000,0.0000000,180.0000000); //
	CreateDynamicObject(1569,1117.6226800,-1369.2399900,12.9812000,0.0000000,0.0000000,0.0000000); //
	CreateDynamicObject(1569,1120.6220700,-1369.2342500,12.9812000,0.0000000,0.0000000,180.0000000); //
	CreateDynamicObject(1340,1083.3314200,-1382.2330300,13.8944000,0.0000000,0.0000000,0.0000000); //
	CreateDynamicObject(1216,1136.5850800,-1369.9587400,13.5766000,0.0000000,0.0000000,0.0000000); //
	CreateDynamicObject(1216,1137.2031300,-1369.9587400,13.5766000,0.0000000,0.0000000,0.0000000); //
	CreateDynamicObject(1572,1114.0332000,-1370.3498500,13.5412000,0.0000000,0.0000000,-25.8600000); //
	return 1;
}

stock CreateLEC(){
	//LEC
	CreateDynamicObject(6875, -356.65, 1606.59, 62.63,   0.00, 0.00, 136.02);
	CreateDynamicObject(3873, -327.31, 1597.54, 90.39,   0.00, 0.00, 333.17);
	CreateDynamicObject(4141, -350.67, 1591.49, 81.45,   0.00, 0.00, 135.79);
	CreateDynamicObject(621, -321.25, 1576.79, 71.83,   0.00, 0.00, 162.78);
	CreateDynamicObject(621, -315.66, 1580.03, 71.83,   0.00, 0.00, 180.37);
	CreateDynamicObject(621, -329.90, 1575.11, 71.83,   0.00, 0.00, 180.37);
	CreateDynamicObject(621, -309.97, 1585.22, 71.83,   0.00, 0.00, 180.37);
	CreateDynamicObject(1569, -369.77, 1581.49, 75.08,   -0.22, 0.66, 320.38);
	CreateDynamicObject(1569, -367.61, 1579.47, 75.08,   0.00, 0.00, 134.85);
	CreateDynamicObject(1247, -368.25, 1579.89, 76.83,   0.00, 0.00, 314.89);
	CreateDynamicObject(1247, -369.29, 1580.91, 76.83,   -2.40, 1.44, 314.67);
	CreateDynamicObject(3498, -370.47, 1582.22, 77.26,   0.00, 0.00, 0.00);
	CreateDynamicObject(624, -392.38, 1428.13, 36.08,   0.00, 0.00, 288.87);
	CreateDynamicObject(624, -381.46, 1403.79, 39.19,   0.00, 0.00, 0.49);
	CreateDynamicObject(624, -386.72, 1415.62, 37.82,   0.00, 0.00, 84.31);
	CreateDynamicObject(624, -375.90, 1393.09, 39.67,   0.00, 0.00, 236.70);
	CreateDynamicObject(624, -339.06, 1341.60, 50.22,   0.00, 0.00, 0.49);
	CreateDynamicObject(624, -369.82, 1380.79, 42.54,   0.00, 0.00, 0.49);
	CreateDynamicObject(624, -366.05, 1373.63, 44.27,   0.00, 0.00, 0.49);
	CreateDynamicObject(624, -400.95, 1445.42, 34.50,   0.00, 0.00, 0.49);
	CreateDynamicObject(624, -359.18, 1362.32, 44.66,   0.00, 0.00, 0.90);
	CreateDynamicObject(624, -353.66, 1351.87, 46.67,   0.00, 0.00, 359.66);
	CreateDynamicObject(624, -330.54, 1337.61, 51.26,   0.00, 0.00, 2.33);
	CreateDynamicObject(624, -347.93, 1345.84, 49.08,   0.00, 0.00, 0.49);
	CreateDynamicObject(624, -355.83, 1324.11, 42.64,   -11.22, -1.98, 0.49);
	CreateDynamicObject(624, -350.18, 1318.25, 49.29,   -0.96, 6.30, 0.49);
	CreateDynamicObject(624, -341.71, 1309.29, 47.70,   0.00, 0.00, 1.56);
	CreateDynamicObject(624, -333.54, 1377.44, 54.52,   0.00, 0.00, 0.49);
	CreateDynamicObject(624, -325.84, 1361.39, 54.52,   0.00, 0.00, 0.49);
	CreateDynamicObject(624, -342.10, 1390.79, 54.52,   0.00, 0.00, 335.46);
	CreateDynamicObject(624, -347.78, 1400.86, 54.52,   0.00, 0.00, 16.23);
	CreateDynamicObject(624, -352.39, 1409.33, 54.52,   0.00, 0.00, 232.18);
	CreateDynamicObject(624, -358.28, 1420.88, 54.52,   0.00, 0.00, 0.49);
	CreateDynamicObject(624, -364.51, 1433.10, 54.52,   0.00, 0.00, 0.49);
	CreateDynamicObject(624, -369.49, 1444.58, 54.52,   0.00, 0.00, 0.49);
	CreateDynamicObject(624, -364.02, 1456.29, 60.67,   0.00, 0.00, 0.49);
	CreateDynamicObject(624, -354.58, 1452.72, 62.34,   0.00, 0.00, 326.01);
	CreateDynamicObject(624, -349.65, 1445.06, 63.74,   0.00, 0.00, 0.49);
	CreateDynamicObject(624, -344.03, 1434.99, 63.74,   0.00, 0.00, 0.49);
	CreateDynamicObject(624, -339.19, 1425.27, 63.74,   0.00, 0.00, 0.49);
	CreateDynamicObject(624, -334.18, 1415.52, 63.74,   0.00, 0.00, 0.49);
	CreateDynamicObject(624, -328.89, 1401.88, 63.74,   0.00, 0.00, 0.49);
	CreateDynamicObject(1597, -302.21, 1501.98, 77.22,   0.00, 0.00, 5.61);
	CreateDynamicObject(16112, -354.67, 1445.03, 53.35,   0.00, 0.00, 54.74);
	CreateDynamicObject(16122, -342.57, 1419.05, 48.62,   0.00, 0.00, 238.46);
	CreateDynamicObject(996, -406.11, 1422.34, 37.86,   -3.60, -6.76, 295.01);
	CreateDynamicObject(996, -410.55, 1431.89, 36.60,   2.28, -3.34, 296.17);
	CreateDynamicObject(996, -397.51, 1404.63, 40.03,   -3.60, -5.80, 296.09);
	CreateDynamicObject(996, -401.97, 1413.63, 39.03,   -3.60, -6.76, 295.34);
	CreateDynamicObject(996, -388.74, 1387.31, 42.47,   -3.60, -5.80, 296.58);
	CreateDynamicObject(996, -393.24, 1396.17, 41.24,   -3.60, -5.80, 295.64);
	CreateDynamicObject(996, -383.95, 1377.91, 43.56,   -3.60, -5.80, 296.58);
	CreateDynamicObject(996, -379.22, 1368.86, 44.78,   -3.60, -5.80, 296.58);
	CreateDynamicObject(996, -374.50, 1359.56, 46.05,   -3.60, -5.80, 296.58);
	CreateDynamicObject(996, -369.89, 1350.51, 47.13,   -3.60, -5.80, 296.27);
	CreateDynamicObject(898, -349.91, 1310.52, 51.59,   0.00, 0.00, -89.88);
	CreateDynamicObject(898, -358.09, 1319.17, 48.66,   0.00, 0.00, 359.17);
	CreateDynamicObject(898, -363.72, 1327.74, 49.40,   100.62, -67.20, 81.24);
	CreateDynamicObject(898, -371.15, 1339.43, 46.27,   299.46, -40.56, 30.18);
	CreateDynamicObject(898, -371.52, 1331.32, 41.90,   74.34, -66.36, 82.97);
	CreateDynamicObject(5837, -429.17, 1444.97, 34.88,   0.00, 0.00, 202.15);
	CreateDynamicObject(1597, -425.56, 1436.92, 36.32,   3.60, -1.80, 302.62);
	CreateDynamicObject(1597, -431.05, 1452.99, 35.84,   -2.40, 0.60, 104.47);
	CreateDynamicObject(8673, -434.72, 1464.11, 34.62,   0.00, 0.00, 295.14);
	CreateDynamicObject(8673, -439.69, 1483.54, 34.63,   0.00, 0.00, 273.22);
	CreateDynamicObject(8673, -440.89, 1503.96, 34.64,   0.00, 0.00, 273.22);
	CreateDynamicObject(8673, -435.26, 1521.94, 34.63,   0.00, 0.00, 230.73);
	CreateDynamicObject(8673, -426.37, 1417.43, 32.90,   0.06, 3.66, 286.12);
	CreateDynamicObject(8673, -420.42, 1397.95, 31.77,   -0.12, 2.58, 287.93);
	CreateDynamicObject(8673, -409.80, 1381.35, 31.62,   2.70, -1.62, 316.64);
	CreateDynamicObject(645, -420.88, 1425.18, 32.43,   0.00, 0.00, 0.00);
	CreateDynamicObject(645, -415.56, 1410.27, 33.48,   0.00, 0.00, 0.00);
	CreateDynamicObject(645, -409.18, 1394.79, 35.16,   0.00, 0.00, 0.00);
	CreateDynamicObject(897, -423.98, 1428.28, 33.62,   0.00, 0.00, 342.18);
	CreateDynamicObject(897, -424.88, 1428.17, 35.53,   34.02, -7.74, 366.76);
	CreateDynamicObject(897, -417.75, 1434.66, 35.77,   44.40, -60.66, 93.77);
	CreateDynamicObject(897, -421.69, 1429.66, 35.53,   13.74, -18.36, 366.76);
	CreateDynamicObject(897, -431.47, 1458.83, 35.77,   44.40, -60.66, 93.77);
	CreateDynamicObject(897, -425.15, 1459.58, 35.53,   34.02, -7.74, 396.10);
	CreateDynamicObject(897, -418.73, 1460.23, 35.77,   44.40, -60.66, 230.75);
	CreateDynamicObject(823, -371.60, 1347.69, 47.34,   0.00, 0.00, 0.00);
	CreateDynamicObject(823, -364.35, 1336.99, 47.34,   0.00, 0.00, 0.00);
	CreateDynamicObject(762, -416.47, 1425.76, 38.67,   0.00, 0.00, 0.10);
	CreateDynamicObject(762, -410.08, 1417.23, 38.15,   0.00, 0.00, 53.23);
	CreateDynamicObject(762, -420.50, 1420.76, 36.06,   4.86, -15.36, 0.10);
	CreateDynamicObject(3498, -366.89, 1578.83, 77.16,   0.00, 0.00, 0.00);
	CreateDynamicObject(6875, -268.30, 1572.67, 62.23,   0.00, 0.00, 315.57);
	CreateDynamicObject(6875, -268.30, 1572.69, 43.22,   0.00, 0.00, 315.57);
	CreateDynamicObject(4141, -288.53, 1604.78, 85.70,   0.00, 0.00, 46.24);
	CreateDynamicObject(4141, -288.53, 1604.78, 75.62,   0.00, 0.00, 46.60);
	CreateDynamicObject(10378, -320.16, 1593.46, 74.35,   0.00, 0.00, 45.63);
	CreateDynamicObject(6875, -307.31, 1615.60, 48.78,   0.00, 0.00, -14.16);
	CreateDynamicObject(9241, -321.77, 1628.28, 81.54,   0.00, 0.00, 75.92);
	CreateDynamicObject(12942, -256.82, 1534.36, 74.58,   0.00, 0.00, 133.32);
	CreateDynamicObject(18234, -329.38, 1500.35, 74.45,   0.00, 0.00, 270.07);
	CreateDynamicObject(12943, -268.65, 1497.79, 74.54,   0.00, 0.00, 287.64);
	CreateDynamicObject(5706, -234.23, 1534.71, 69.12,   0.00, 0.00, 313.80);
	CreateDynamicObject(5706, -234.23, 1534.71, 77.02,   0.00, 0.00, 313.80);
	CreateDynamicObject(10832, -241.88, 1525.65, 76.28,   0.00, 0.00, 42.24);
	CreateDynamicObject(16770, -246.59, 1497.13, 75.95,   0.00, 0.00, -90.48);
	CreateDynamicObject(16122, -277.12, 1455.78, 62.37,   0.00, 0.00, 228.83);
	CreateDynamicObject(16122, -275.70, 1446.61, 60.48,   0.00, 0.00, 232.67);
	CreateDynamicObject(16113, -212.80, 1415.06, 61.90,   -6.60, -3.18, 246.18);
	CreateDynamicObject(10984, -223.49, 1420.66, 74.20,   -37.80, -11.52, 359.55);
	CreateDynamicObject(10984, -235.43, 1415.78, 74.20,   -33.78, -10.44, 359.55);
	CreateDynamicObject(898, -220.34, 1394.67, 69.51,   0.00, 0.00, -69.00);
	CreateDynamicObject(4816, -213.98, 1458.93, 63.82,   -43.38, 32.76, 131.58);
	CreateDynamicObject(4816, -268.04, 1436.70, 65.14,   -37.68, 35.10, 330.18);
	CreateDynamicObject(14469, -287.19, 1457.60, 77.23,   55.92, 2.64, -66.96);
	CreateDynamicObject(14469, -278.26, 1435.42, 73.52,   0.00, 0.00, -81.48);
	CreateDynamicObject(14469, -288.57, 1456.77, 74.74,   52.38, 3.78, -81.48);
	CreateDynamicObject(14469, -291.94, 1467.57, 75.23,   63.36, -16.74, -81.48);
	CreateDynamicObject(896, -282.47, 1499.07, 73.77,   -42.66, -44.16, 43.68);
	CreateDynamicObject(1411, -286.31, 1505.30, 76.10,   0.00, 0.00, 134.70);
	CreateDynamicObject(1411, -289.91, 1508.96, 76.10,   0.00, 0.00, 134.70);
	CreateDynamicObject(1411, -289.83, 1512.84, 76.10,   0.00, 0.00, 41.64);
	CreateDynamicObject(1411, -285.97, 1516.24, 76.10,   0.00, 0.00, 41.64);
	CreateDynamicObject(1411, -282.13, 1519.68, 76.10,   0.00, 0.00, 41.64);
	CreateDynamicObject(1411, -278.26, 1523.10, 76.10,   0.00, 0.00, 41.64);
	CreateDynamicObject(1411, -266.53, 1534.62, 76.10,   0.00, 0.00, 54.72);
	CreateDynamicObject(1411, -269.99, 1530.71, 76.10,   0.00, 0.00, 41.64);
	CreateDynamicObject(1411, -266.48, 1553.05, 76.10,   0.00, 0.00, 137.46);
	CreateDynamicObject(1411, -262.64, 1549.57, 76.10,   0.00, 0.00, 137.46);
	CreateDynamicObject(1411, -260.10, 1545.39, 76.10,   0.00, 0.00, 104.28);
	CreateDynamicObject(660, -261.93, 1548.19, 73.68,   0.00, 0.00, 80.16);
	CreateDynamicObject(660, -266.22, 1552.90, 73.68,   0.00, 0.00, 307.69);
	CreateDynamicObject(660, -268.48, 1533.18, 73.68,   0.00, 0.00, 80.16);
	CreateDynamicObject(660, -280.01, 1522.44, 73.68,   0.00, 0.00, 80.16);
	CreateDynamicObject(660, -282.95, 1519.85, 73.68,   0.00, 0.00, 236.00);
	CreateDynamicObject(660, -286.13, 1516.86, 73.68,   0.00, 0.00, -171.00);
	CreateDynamicObject(660, -289.37, 1514.29, 73.68,   0.00, 0.00, -105.00);
	CreateDynamicObject(660, -291.68, 1512.07, 73.68,   0.00, 0.00, -121.00);
	CreateDynamicObject(660, -291.91, 1507.73, 73.68,   0.00, 0.00, -121.00);
	CreateDynamicObject(660, -292.99, 1501.97, 73.68,   0.00, 0.00, 149.00);
	CreateDynamicObject(660, -294.28, 1495.60, 73.68,   0.00, 0.00, -229.00);
	CreateDynamicObject(660, -289.54, 1488.23, 76.75,   0.00, 0.00, -76.00);
	CreateDynamicObject(1597, -293.39, 1539.81, 77.22,   0.00, 0.00, 45.49);
	CreateDynamicObject(1597, -295.05, 1535.42, 77.22,   0.00, 0.00, 89.47);
	CreateDynamicObject(11445, -232.94, 1423.18, 71.56,   0.00, 0.00, -1.02);
	CreateDynamicObject(11428, -252.10, 1425.49, 77.68,   -4.14, 3.12, -102.48);
	CreateDynamicObject(11442, -223.08, 1450.03, 73.22,   0.00, 0.00, -153.36);
	CreateDynamicObject(2669, -232.91, 1496.28, 75.97,   0.00, 0.00, -105.00);
	CreateDynamicObject(2035, -237.79, 1493.15, 75.31,   0.00, 0.00, 0.00);
	CreateDynamicObject(2035, -239.30, 1493.00, 75.31,   0.00, 0.00, -47.88);
	CreateDynamicObject(1409, -251.84, 1494.97, 74.67,   0.00, 0.00, -20.94);
	CreateDynamicObject(1409, -241.51, 1494.91, 74.67,   0.00, 0.00, -2.64);
	CreateDynamicObject(3593, -250.47, 1443.84, 74.15,   0.00, 0.00, 52.86);
	CreateDynamicObject(13591, -230.20, 1444.49, 73.98,   0.00, 0.00, 0.00);
	CreateDynamicObject(933, -263.33, 1496.74, 74.55,   0.00, 0.00, 0.00);
	CreateDynamicObject(910, -269.34, 1506.81, 75.43,   0.00, 0.00, -169.14);
	CreateDynamicObject(1227, -272.25, 1505.90, 75.41,   0.00, 0.00, -163.80);
	CreateDynamicObject(1450, -273.86, 1505.49, 75.27,   0.00, 0.00, -74.70);
	CreateDynamicObject(1686, -264.48, 1538.24, 74.22,   0.00, 0.00, -46.92);
	CreateDynamicObject(1215, -263.75, 1538.84, 74.83,   0.00, 0.00, 9.12);
	CreateDynamicObject(1215, -260.82, 1541.73, 74.83,   0.00, 0.00, 9.12);
	CreateDynamicObject(1215, -265.18, 1537.63, 74.83,   0.00, 0.00, 9.12);
	CreateDynamicObject(922, -270.33, 1504.80, 75.40,   0.00, 0.00, 17.34);
	CreateDynamicObject(1214, -258.13, 1529.07, 74.43,   0.00, 0.00, -18.18);
	CreateDynamicObject(1214, -254.78, 1525.67, 74.43,   0.00, 0.00, -18.18);
	CreateDynamicObject(1687, -275.62, 1569.16, 94.85,   0.00, 0.00, 0.00);
	CreateDynamicObject(1687, -286.73, 1591.99, 97.53,   0.00, 0.00, 56.82);
	CreateDynamicObject(1688, -257.10, 1581.47, 94.94,   0.00, 0.00, -37.86);
	CreateDynamicObject(1688, -227.90, 1516.91, 74.56,   0.00, 0.00, 44.07);
	CreateDynamicObject(927, -228.64, 1516.87, 75.59,   0.00, 0.00, 45.73);
	CreateDynamicObject(927, -319.25, 1500.37, 76.14,   0.00, 0.00, 90.32);
	CreateDynamicObject(1687, -318.67, 1497.84, 75.31,   0.00, 0.00, -88.08);
	CreateDynamicObject(3660, -325.82, 1536.07, 76.94,   0.00, 0.00, 0.00);
	CreateDynamicObject(3660, -337.32, 1536.08, 76.94,   0.00, 0.00, 0.00);
	CreateDynamicObject(3660, -345.90, 1544.61, 76.96,   0.00, 0.00, 630.13);
	CreateDynamicObject(3660, -337.26, 1553.04, 76.96,   0.00, 0.00, 539.47);
	CreateDynamicObject(615, -355.54, 1539.91, 74.33,   0.00, 0.00, 0.00);
	CreateDynamicObject(615, -362.30, 1547.97, 74.21,   0.00, 0.00, -360.00);
	CreateDynamicObject(615, -356.39, 1557.34, 73.49,   0.00, 2.00, -324.00);
	CreateDynamicObject(996, -311.64, 1534.22, 75.23,   0.00, 0.00, -1.44);
	CreateDynamicObject(620, -344.02, 1536.09, 74.34,   0.00, 0.00, 0.00);
	CreateDynamicObject(620, -329.89, 1535.62, 74.34,   0.00, 0.00, -360.00);
	CreateDynamicObject(620, -316.52, 1535.85, 74.34,   0.00, 0.00, -360.00);
	CreateDynamicObject(620, -287.20, 1447.68, 66.01,   0.00, 0.00, -360.00);
	CreateDynamicObject(620, -283.20, 1435.84, 66.01,   0.00, 0.00, 62.00);
	CreateDynamicObject(620, -285.13, 1424.57, 66.01,   0.00, 0.00, 128.00);
	CreateDynamicObject(620, -284.64, 1413.09, 66.01,   0.00, 0.00, 128.00);
	CreateDynamicObject(620, -287.86, 1398.23, 66.01,   0.00, 0.00, 128.00);
	CreateDynamicObject(620, -299.15, 1388.34, 66.01,   0.00, 0.00, 128.00);
	CreateDynamicObject(620, -274.28, 1387.33, 66.01,   0.00, 0.00, 128.00);
	CreateDynamicObject(789, -316.72, 1389.35, 84.00,   0.00, 0.00, 50.69);
	CreateDynamicObject(3263, -426.62, 1443.95, 33.29,   0.00, 0.00, -55.00);
	CreateDynamicObject(3264, -406.86, 1452.42, 34.84,   0.00, 0.00, -55.00);
	CreateDynamicObject(4726, -407.04, 1520.85, 72.11,   0.00, 0.00, -82.54);
	CreateDynamicObject(3881, -382.78, 1514.51, 76.39,   0.00, 0.00, 448.80);
	CreateDynamicObject(9153, -362.40, 1492.79, 69.84,   0.00, 0.00, 343.59);
	CreateDynamicObject(4726, -406.86, 1521.03, 73.62,   0.00, 0.00, -82.54);
	CreateDynamicObject(4726, -407.01, 1520.84, 67.49,   0.00, 0.00, -82.54);
	CreateDynamicObject(4726, -407.01, 1520.84, 70.42,   0.00, 0.00, -82.54);
	CreateDynamicObject(4726, -407.01, 1520.84, 68.88,   0.00, 0.00, -82.54);
	CreateDynamicObject(1687, -415.44, 1515.73, 73.30,   0.00, 0.00, 279.07);
	CreateDynamicObject(1626, -380.30, 1512.41, 75.27,   0.00, 0.00, 90.27);
	CreateDynamicObject(1617, -386.84, 1514.51, 76.77,   0.00, 0.00, 0.00);
	CreateDynamicObject(8948, -383.36, 1512.32, 76.37,   0.00, 0.00, -90.90);
	CreateDynamicObject(11544, -396.00, 1509.30, 74.53,   0.00, 0.00, 88.78);
	CreateDynamicObject(1698, -395.28, 1509.16, 75.07,   0.00, 0.00, 0.00);
	CreateDynamicObject(1698, -394.98, 1509.16, 75.23,   0.00, 0.00, 0.00);
	CreateDynamicObject(1698, -395.88, 1509.16, 74.93,   0.00, 0.00, 0.00);
	CreateDynamicObject(1364, -335.75, 1551.20, 75.18,   0.00, 0.00, 0.00);
	CreateDynamicObject(1364, -341.97, 1551.04, 75.18,   0.00, 0.00, 0.00);
	CreateDynamicObject(1364, -329.94, 1551.17, 75.18,   0.00, 0.00, 0.00);
	CreateDynamicObject(1364, -294.11, 1537.86, 75.18,   0.00, 0.00, -116.22);
	CreateDynamicObject(762, -314.20, 1494.02, 75.03,   0.00, 0.00, 0.00);
	CreateDynamicObject(762, -326.76, 1488.21, 75.03,   0.00, 0.00, 0.00);
	CreateDynamicObject(762, -336.84, 1490.95, 75.03,   0.00, 0.00, -229.00);
	CreateDynamicObject(762, -320.51, 1489.67, 75.03,   0.00, 0.00, -229.00);
	CreateDynamicObject(762, -343.70, 1494.66, 75.03,   0.00, 0.00, 0.00);
	CreateDynamicObject(762, -347.38, 1501.94, 75.03,   0.00, 0.00, 0.00);
	CreateDynamicObject(762, -364.76, 1566.01, 75.03,   0.00, 0.00, 0.00);
	CreateDynamicObject(762, -366.96, 1554.93, 75.03,   0.00, 0.00, 0.00);
	CreateDynamicObject(762, -366.98, 1554.89, 75.03,   0.00, 0.00, 0.00);
	CreateDynamicObject(762, -357.28, 1550.29, 75.03,   0.00, 0.00, 0.00);
	CreateDynamicObject(762, -354.98, 1559.30, 75.03,   0.00, 0.00, 0.00);
	CreateDynamicObject(878, -352.69, 1546.93, 75.05,   0.00, 0.00, 0.00);
	CreateDynamicObject(3806, -326.97, 1506.11, 74.88,   0.00, 0.00, 88.34);
	CreateDynamicObject(673, -321.25, 1506.11, 74.33,   0.00, 0.00, 26.52);
	CreateDynamicObject(673, -324.84, 1506.09, 74.33,   0.00, 0.00, 26.52);
	CreateDynamicObject(673, -333.86, 1505.47, 74.33,   0.00, 0.00, 26.52);
	CreateDynamicObject(673, -338.39, 1505.55, 74.33,   0.00, 0.00, 26.52);
	CreateDynamicObject(897, -313.32, 1500.99, 70.86,   0.00, 0.00, 0.29);
	CreateDynamicObject(1214, -347.88, 1525.29, 74.33,   0.00, 0.00, 0.00);
	CreateDynamicObject(1214, -347.91, 1527.69, 74.33,   0.00, 0.00, 0.00);
	CreateDynamicObject(1214, -347.93, 1530.63, 74.33,   0.00, 0.00, 0.00);
	CreateDynamicObject(1214, -348.08, 1533.18, 74.33,   0.00, 0.00, 0.00);
	CreateDynamicObject(1214, -304.92, 1535.00, 74.33,   0.00, 0.00, 0.00);
	CreateDynamicObject(1214, -301.97, 1535.02, 74.33,   0.00, 0.00, 0.00);
	CreateDynamicObject(1597, -313.65, 1515.45, 77.22,   0.00, 0.00, 0.03);
	CreateDynamicObject(1597, -346.98, 1516.25, 77.22,   0.00, 0.00, 0.75);
	CreateDynamicObject(1597, -296.91, 1440.46, 74.75,   1.90, 4.00, 4.94);
	CreateDynamicObject(1597, -299.97, 1476.20, 76.62,   3.06, 0.84, 5.35);
	CreateDynamicObject(1597, -304.49, 1551.34, 77.22,   0.00, 0.00, 45.49);
	CreateDynamicObject(1214, -299.95, 1546.87, 74.33,   0.00, 0.00, 0.00);
	CreateDynamicObject(1214, -297.78, 1544.48, 74.33,   0.00, 0.00, 0.00);
	CreateDynamicObject(1214, -302.86, 1567.81, 74.33,   0.00, 0.00, 0.00);
	CreateDynamicObject(1214, -300.68, 1570.12, 74.33,   0.00, 0.00, 0.00);
	CreateDynamicObject(1214, -276.74, 1549.20, 74.33,   0.00, 0.00, 0.00);
	CreateDynamicObject(1214, -290.55, 1536.13, 74.33,   0.00, 0.00, 0.00);
	CreateDynamicObject(1597, -273.62, 1552.62, 76.93,   0.00, 0.00, -43.88);
	CreateDynamicObject(1597, -295.67, 1573.35, 76.92,   0.00, 0.00, -43.64);
	CreateDynamicObject(1568, -299.32, 1535.71, 74.34,   0.00, 0.00, 0.00);
	CreateDynamicObject(1568, -315.41, 1535.69, 74.34,   0.00, 0.00, 0.00);
	CreateDynamicObject(16409, -232.58, 1508.13, 74.57,   0.00, 0.00, -11.22);
	CreateDynamicObject(792, -237.15, 1517.76, 77.88,   0.00, 0.00, 5.57);
	CreateDynamicObject(1214, -285.06, 1571.69, 84.57,   0.00, 0.00, 0.00);
	CreateDynamicObject(1214, -285.07, 1571.71, 85.71,   0.00, 0.00, 0.00);
	CreateDynamicObject(1214, -285.07, 1571.71, 86.83,   0.00, 0.00, 0.00);
	CreateDynamicObject(1214, -285.08, 1571.71, 83.55,   0.00, 0.00, 0.00);
	CreateDynamicObject(1214, -285.09, 1571.80, 83.87,   0.00, 91.00, -47.00);
	CreateDynamicObject(1214, -284.24, 1570.96, 83.55,   0.00, 91.00, -47.00);
	CreateDynamicObject(1214, -283.39, 1570.09, 83.55,   0.00, 91.00, -47.00);
	CreateDynamicObject(1214, -284.86, 1571.52, 86.83,   0.00, 0.00, 0.00);
	CreateDynamicObject(1214, -284.88, 1571.51, 85.71,   0.00, 0.00, 0.00);
	CreateDynamicObject(1214, -284.91, 1571.53, 84.57,   0.00, 0.00, 0.00);
	CreateDynamicObject(1214, -284.77, 1571.63, 83.04,   0.00, 0.00, 0.00);
	CreateDynamicObject(1214, -284.88, 1571.54, 83.55,   0.00, 0.00, 0.00);
	CreateDynamicObject(1214, -285.12, 1571.79, 83.55,   0.00, 91.00, -47.00);
	CreateDynamicObject(1214, -283.34, 1570.09, 83.84,   0.00, 91.00, -47.00);
	CreateDynamicObject(1214, -284.23, 1570.94, 83.84,   0.00, 91.00, -47.00);
	CreateDynamicObject(1214, -281.83, 1568.42, 86.83,   0.00, 0.00, 0.00);
	CreateDynamicObject(1214, -281.66, 1568.17, 86.83,   0.00, 0.00, 0.00);
	CreateDynamicObject(1214, -281.86, 1568.45, 85.66,   0.00, 0.00, 0.00);
	CreateDynamicObject(1214, -281.86, 1568.45, 84.42,   0.00, 0.00, 0.00);
	CreateDynamicObject(1214, -281.86, 1568.45, 83.29,   0.00, 0.00, 0.00);
	CreateDynamicObject(1214, -281.66, 1568.19, 83.29,   0.00, 0.00, 0.00);
	CreateDynamicObject(1214, -281.62, 1568.23, 84.42,   0.00, 0.00, 0.00);
	CreateDynamicObject(1214, -281.63, 1568.21, 85.66,   0.00, 0.00, 0.00);
	CreateDynamicObject(1214, -281.86, 1568.45, 86.83,   0.00, 0.00, 0.00);
	CreateDynamicObject(1214, -281.51, 1568.17, 83.55,   103.50, 85.00, 320.54);
	CreateDynamicObject(1214, -281.60, 1568.18, 83.86,   0.00, 91.00, 317.24);
	CreateDynamicObject(1214, -280.70, 1567.37, 83.84,   0.00, 91.00, 316.22);
	CreateDynamicObject(1214, -280.69, 1567.37, 83.54,   0.00, 91.00, 316.23);
	CreateDynamicObject(1214, -281.50, 1568.07, 85.55,   0.00, 91.00, 315.93);
	CreateDynamicObject(1214, -281.55, 1568.12, 85.87,   0.00, 91.00, 316.21);
	CreateDynamicObject(1214, -281.49, 1568.14, 87.91,   0.00, 91.00, 315.26);
	CreateDynamicObject(1214, -281.03, 1567.62, 85.55,   0.00, 91.00, 317.47);
	CreateDynamicObject(1214, -281.07, 1567.69, 85.87,   0.00, 91.00, 316.19);
	CreateDynamicObject(1214, -280.71, 1567.41, 87.91,   0.00, 91.00, 315.02);
	CreateDynamicObject(1214, -281.49, 1568.14, 87.61,   0.00, 91.00, 317.21);
	CreateDynamicObject(1214, -280.68, 1567.39, 87.61,   0.00, 91.00, 317.27);
	CreateDynamicObject(1214, -277.61, 1564.36, 87.91,   4.02, 90.94, 315.02);
	CreateDynamicObject(1214, -278.93, 1565.52, 87.09,   10.04, 47.92, 323.71);
	CreateDynamicObject(1214, -278.86, 1565.48, 86.06,   0.00, 0.00, 359.39);
	CreateDynamicObject(1214, -278.86, 1565.48, 85.00,   0.00, 0.00, 359.39);
	CreateDynamicObject(1214, -278.30, 1564.91, 83.47,   -35.16, -27.12, 359.39);
	CreateDynamicObject(1214, -278.88, 1565.47, 84.29,   0.00, 0.00, 359.39);
	CreateDynamicObject(1214, -278.41, 1565.00, 83.51,   0.12, 90.46, 318.65);
	CreateDynamicObject(1214, -277.55, 1564.27, 83.52,   0.12, 90.46, 312.88);
	CreateDynamicObject(1214, -278.30, 1564.94, 87.91,   4.02, 90.94, 315.02);
	CreateDynamicObject(1214, -277.56, 1564.31, 87.71,   4.02, 90.94, 315.02);
	CreateDynamicObject(1214, -278.69, 1565.26, 86.91,   10.04, 47.92, 324.82);
	CreateDynamicObject(1214, -278.22, 1564.93, 87.71,   4.02, 90.94, 315.02);
	CreateDynamicObject(1214, -278.64, 1565.23, 86.06,   0.00, 0.00, 359.39);
	CreateDynamicObject(1214, -278.60, 1565.24, 85.00,   0.00, 0.00, 359.39);
	CreateDynamicObject(1214, -278.63, 1565.25, 84.29,   0.00, 0.00, 359.39);
	CreateDynamicObject(1214, -278.11, 1564.73, 83.47,   -35.16, -27.12, 359.39);
	CreateDynamicObject(1214, -278.41, 1565.00, 83.82,   0.12, 90.46, 318.12);
	CreateDynamicObject(1214, -277.55, 1564.27, 83.83,   0.12, 90.46, 312.88);
	CreateDynamicObject(1411, -384.96, 1519.90, 76.10,   0.00, 0.00, -91.00);
	CreateDynamicObject(1411, -384.91, 1525.08, 76.10,   0.00, 0.00, -91.00);
	CreateDynamicObject(1411, -386.46, 1529.88, 76.10,   0.00, 0.00, -55.00);
	CreateDynamicObject(1411, -389.44, 1534.07, 76.10,   0.00, 0.00, -55.00);
	CreateDynamicObject(1411, -392.44, 1538.36, 76.10,   0.00, 0.00, -55.00);
	CreateDynamicObject(1411, -395.42, 1542.60, 76.10,   0.00, 0.00, -55.00);
	CreateDynamicObject(1411, -399.61, 1544.67, 75.90,   0.00, 0.00, 4.00);
	CreateDynamicObject(1411, -404.77, 1544.39, 75.70,   0.00, 0.00, 4.00);
	CreateDynamicObject(1411, -409.99, 1543.97, 75.20,   0.00, 0.00, 4.00);
	CreateDynamicObject(1411, -415.25, 1543.44, 74.67,   0.00, 0.00, 4.00);
	CreateDynamicObject(1411, -419.23, 1540.89, 74.12,   0.00, 0.00, 62.00);
	CreateDynamicObject(659, -386.09, 1583.15, 73.93,   0.00, 0.00, 0.00);
	CreateDynamicObject(659, -380.99, 1587.70, 73.93,   0.00, 0.00, 0.00);
	CreateDynamicObject(659, -390.83, 1578.01, 73.93,   0.00, 0.00, 0.00);
	CreateDynamicObject(659, -394.46, 1572.90, 73.93,   0.00, 0.00, 0.00);
	CreateDynamicObject(659, -399.08, 1565.80, 73.93,   0.00, 0.00, 0.00);
	CreateDynamicObject(659, -399.78, 1557.45, 73.93,   0.00, 0.00, 0.00);
	CreateDynamicObject(659, -399.70, 1549.18, 73.93,   0.00, 0.00, 0.00);
	CreateDynamicObject(762, -399.64, 1553.41, 75.03,   0.00, 0.00, 0.00);
	CreateDynamicObject(762, -400.04, 1561.35, 75.03,   0.00, 0.00, 50.00);
	CreateDynamicObject(762, -397.23, 1569.99, 75.03,   0.00, 0.00, 0.00);
	CreateDynamicObject(762, -394.35, 1577.78, 75.03,   0.00, 0.00, -149.00);
	CreateDynamicObject(762, -384.78, 1587.54, 75.03,   0.00, 0.00, -149.00);
	CreateDynamicObject(762, -388.69, 1581.30, 75.03,   0.00, 0.00, -149.00);
	CreateDynamicObject(627, -371.38, 1581.69, 76.94,   0.00, 0.00, 0.00);
	CreateDynamicObject(627, -366.99, 1577.68, 76.94,   0.00, 0.00, 0.00);
	CreateDynamicObject(622, -385.66, 1574.98, 73.51,   32.94, 1.44, 65.22);
	CreateDynamicObject(622, -381.01, 1577.75, 73.27,   36.90, 18.18, 65.22);
	CreateDynamicObject(622, -389.80, 1569.40, 74.16,   32.94, 1.44, 65.22);
	CreateDynamicObject(762, -395.64, 1499.84, 75.03,   0.00, 0.00, 0.00);
	CreateDynamicObject(615, -363.55, 1519.29, 74.31,   0.00, 0.00, -302.28);
	CreateDynamicObject(660, -349.41, 1513.65, 72.59,   0.00, 0.00, -25.00);
	CreateDynamicObject(660, -349.57, 1516.50, 72.59,   0.00, 0.00, -360.00);
	CreateDynamicObject(660, -349.52, 1519.26, 72.59,   0.00, 0.00, -229.00);
	CreateDynamicObject(660, -349.28, 1522.07, 72.59,   0.00, 0.00, 193.00);
	CreateDynamicObject(816, -349.51, 1523.46, 74.77,   0.00, 0.00, 0.00);
	CreateDynamicObject(816, -352.53, 1537.91, 74.77,   0.00, 0.00, -215.00);
	CreateDynamicObject(816, -352.53, 1537.95, 74.77,   0.00, 0.00, -215.00);
	CreateDynamicObject(816, -350.16, 1537.49, 74.77,   0.00, 0.00, 0.00);
	CreateDynamicObject(874, -356.15, 1545.42, 74.90,   0.00, 0.00, 8.64);
	CreateDynamicObject(874, -364.63, 1520.22, 74.93,   0.00, 0.00, 445.24);
	CreateDynamicObject(874, -375.05, 1549.51, 74.93,   0.00, 0.00, 346.84);
	CreateDynamicObject(874, -312.76, 1488.63, 74.90,   0.00, 0.00, 2.46);
	CreateDynamicObject(874, -334.19, 1336.73, 53.56,   8.16, -6.30, 2.46);
	CreateDynamicObject(897, -387.01, 1469.80, 61.78,   -0.30, -37.80, 93.47);
	CreateDynamicObject(897, -390.99, 1455.42, 59.33,   32.40, 22.44, 93.47);
	CreateDynamicObject(897, -391.90, 1461.72, 59.33,   193.32, 10.32, 93.47);
	CreateDynamicObject(897, -391.35, 1447.84, 57.50,   38.16, 2.52, 93.47);
	CreateDynamicObject(875, -376.95, 1475.59, 62.83,   0.00, 0.00, 0.00);
	CreateDynamicObject(875, -355.53, 1422.08, 61.44,   26.04, -33.90, 0.00);
	CreateDynamicObject(624, -432.40, 1468.68, 31.68,   0.00, 0.00, 0.49);
	CreateDynamicObject(874, -383.40, 1499.85, 73.17,   0.00, 0.00, 2.46);
	CreateDynamicObject(874, -329.71, 1571.21, 74.90,   0.00, 0.00, -220.98);
	CreateDynamicObject(996, -321.66, 1506.56, 74.98,   0.00, 0.00, 0.00);
	CreateDynamicObject(996, -346.27, 1506.50, 74.98,   0.00, 0.00, 0.00);
	CreateDynamicObject(996, -356.75, 1506.68, 74.98,   0.00, 0.00, 0.00);
	CreateDynamicObject(996, -365.05, 1506.67, 74.98,   0.00, 0.00, 0.00);
	CreateDynamicObject(996, -373.34, 1506.70, 74.98,   0.00, 0.00, 0.00);
	CreateDynamicObject(996, -381.51, 1506.70, 74.98,   0.00, 0.00, 0.00);
	CreateDynamicObject(996, -389.75, 1506.69, 74.88,   0.00, 0.00, 0.00);
	CreateDynamicObject(996, -370.16, 1511.22, 74.98,   0.00, 0.00, 0.00);
	CreateDynamicObject(996, -373.74, 1515.78, 74.98,   0.00, 0.00, 89.70);
	CreateDynamicObject(996, -362.01, 1511.22, 74.98,   0.00, 0.00, 0.00);
	CreateDynamicObject(996, -353.92, 1511.20, 74.98,   0.00, 0.00, 0.00);
	CreateDynamicObject(996, -379.15, 1521.58, 74.98,   0.00, 0.00, 89.70);
	CreateDynamicObject(996, -373.71, 1523.90, 74.98,   0.00, 0.00, 89.70);
	CreateDynamicObject(762, -355.27, 1518.58, 75.03,   0.00, 0.00, 3.30);
	CreateDynamicObject(762, -385.78, 1523.55, 75.03,   0.00, 0.00, 7.50);
	CreateDynamicObject(816, -372.63, 1527.62, 74.77,   0.00, 0.00, -215.00);
	CreateDynamicObject(816, -383.68, 1526.82, 74.77,   0.00, 0.00, -215.00);
	CreateDynamicObject(899, -362.41, 1520.62, 69.95,   0.00, 0.00, 27.90);
	CreateDynamicObject(762, -368.58, 1520.57, 75.03,   0.00, 0.00, -1.74);
	CreateDynamicObject(1364, -364.28, 1526.76, 75.28,   0.00, 0.00, -192.72);
	CreateDynamicObject(874, -315.75, 1499.13, 74.90,   0.00, 0.00, -229.38);
	CreateDynamicObject(874, -345.48, 1557.98, 74.90,   0.00, 0.00, -260.10);
	CreateDynamicObject(874, -330.74, 1574.03, 74.90,   0.00, 0.00, -274.74);
	CreateDynamicObject(1568, -325.00, 1507.78, 74.34,   0.00, 0.00, 0.00);
	CreateDynamicObject(1568, -333.39, 1507.86, 74.34,   0.00, 0.00, 0.00);
	CreateDynamicObject(3660, -280.74, 1566.53, 76.96,   0.00, 0.00, 314.62);
	CreateDynamicObject(1557, -297.61, 1583.10, 74.49,   0.00, 0.00, -44.00);
	CreateDynamicObject(1557, -295.43, 1581.02, 74.49,   0.00, 0.00, -223.88);
	CreateDynamicObject(3494, -298.47, 1583.99, 78.20,   0.00, 0.00, 46.15);
	CreateDynamicObject(3494, -294.60, 1580.08, 78.20,   0.00, 0.00, 46.15);
	CreateDynamicObject(628, -299.36, 1582.96, 76.24,   0.00, 0.00, 0.00);
	CreateDynamicObject(628, -295.54, 1579.06, 76.24,   0.00, 0.00, 0.00);
	CreateDynamicObject(1698, -376.97, 1512.97, 74.53,   0.00, 0.00, 0.00);
	CreateDynamicObject(1698, -379.24, 1515.66, 74.53,   0.00, 0.00, 90.86);
	CreateDynamicObject(1698, -376.98, 1519.58, 74.53,   0.00, 0.00, 0.00);
	CreateDynamicObject(1698, -376.97, 1522.87, 74.53,   0.00, 0.00, 0.00);
	CreateDynamicObject(1698, -376.97, 1526.26, 74.53,   0.00, 0.00, 0.00);
	CreateDynamicObject(1698, -376.98, 1529.12, 74.53,   0.00, 0.00, 0.00);
	CreateDynamicObject(1698, -376.99, 1516.30, 74.53,   0.00, 0.00, 0.00);
	CreateDynamicObject(1698, -329.60, 1505.87, 74.53,   0.00, 0.00, 0.00);
	CreateDynamicObject(1698, -330.99, 1505.85, 74.53,   0.00, 0.00, 0.00);
	CreateDynamicObject(1698, -243.94, 1522.00, 74.46,   0.00, 0.00, -134.00);
	CreateDynamicObject(1698, -256.43, 1527.35, 74.47,   0.00, 0.00, -135.00);
	CreateDynamicObject(874, -290.64, 1505.02, 74.90,   0.00, 0.00, -229.38);
	CreateDynamicObject(874, -284.85, 1510.04, 74.90,   0.00, 0.00, -229.38);
	CreateDynamicObject(874, -259.33, 1552.84, 74.90,   0.00, 0.00, 11.00);
	CreateDynamicObject(1698, -370.05, 1581.07, 81.00,   1.00, -91.00, 18.00);
	CreateDynamicObject(3660, -381.57, 1581.13, 76.79,   0.00, 0.00, 18.42);
	CreateDynamicObject(3660, -372.37, 1568.66, 76.79,   0.00, 0.00, 44.18);
	CreateDynamicObject(996, -379.18, 1548.55, 74.98,   0.00, 0.00, 89.70);
	CreateDynamicObject(996, -379.20, 1548.54, 74.98,   0.00, 0.00, 89.70);
	CreateDynamicObject(996, -397.08, 1559.39, 74.98,   0.00, 0.00, 89.70);
	CreateDynamicObject(996, -397.48, 1550.13, 74.98,   0.00, 0.00, 89.70);
	CreateDynamicObject(1597, -387.44, 1552.22, 77.22,   0.00, 0.00, 0.75);
	CreateDynamicObject(1597, -395.88, 1566.65, 77.02,   0.00, 0.00, -34.35);
	CreateDynamicObject(1597, -390.64, 1574.28, 77.12,   0.00, 0.00, -34.35);
	CreateDynamicObject(1597, -379.20, 1571.10, 77.52,   0.00, 0.00, -45.51);
	CreateDynamicObject(1682, -372.67, 1590.28, 100.24,   0.00, 0.00, -151.56);
	CreateDynamicObject(9833, -369.62, 1580.21, 77.21,   0.00, 0.00, 341.65);
	CreateDynamicObject(1247, -369.85, 1579.40, 80.24,   0.00, 0.00, 316.20);
	CreateDynamicObject(1698, -369.08, 1579.96, 75.01,   0.00, -11.00, 48.00);
	CreateDynamicObject(1698, -368.01, 1579.19, 80.96,   1.00, -91.00, 74.94);
	CreateDynamicObject(622, -393.26, 1563.81, 74.16,   32.94, 1.44, 65.22);
	CreateDynamicObject(622, -395.52, 1557.02, 74.16,   32.94, 1.44, 65.22);
	CreateDynamicObject(1878, -363.17, 1575.26, 83.31,   0.00, 0.00, 359.81);
	CreateDynamicObject(3660, -297.84, 1551.92, 76.13,   0.00, 0.00, 314.26);
	CreateDynamicObject(3660, -285.21, 1518.36, 76.13,   0.00, 0.00, 402.10);
	CreateDynamicObject(644, -319.54, 1568.00, 77.56,   0.00, 0.00, 0.00);
	CreateDynamicObject(644, -313.25, 1568.01, 76.33,   0.00, 0.00, 0.00);
	CreateDynamicObject(644, -311.03, 1566.77, 75.66,   0.00, 0.00, 0.00);
	CreateDynamicObject(644, -322.23, 1567.04, 77.90,   0.00, 0.00, 0.00);
	CreateDynamicObject(644, -316.44, 1568.42, 76.97,   0.00, 0.00, 0.00);
	CreateDynamicObject(644, -309.16, 1565.11, 74.93,   0.00, 0.00, 0.00);
	CreateDynamicObject(1247, -302.86, 1567.82, 75.74,   -178.00, -236.00, 45.00);
	CreateDynamicObject(1247, -300.66, 1570.11, 75.74,   -178.00, -236.00, 45.00);
	CreateDynamicObject(1247, -296.74, 1581.85, 77.47,   -175.96, -118.08, -41.00);
	CreateDynamicObject(6052, -318.33, 1562.14, 76.73,   0.00, 0.00, -124.92);
	CreateDynamicObject(3515, -313.51, 1561.84, 74.29,   0.00, 0.00, 0.00);
	CreateDynamicObject(3515, -319.83, 1563.01, 74.11,   0.00, 0.00, 0.00);
	CreateDynamicObject(3515, -325.78, 1559.23, 73.95,   0.00, 0.00, 0.00);
	CreateDynamicObject(18234, 207.93, -1434.45, 12.17,   0.00, 0.00, 227.28);
	CreateDynamicObject(1411, 210.91, -1446.29, 13.42,   0.00, 0.00, 229.56);
	CreateDynamicObject(1411, 207.56, -1450.25, 13.42,   0.00, 0.00, 229.56);
	CreateDynamicObject(1411, 201.27, -1457.58, 13.42,   0.00, 0.00, 229.56);
	CreateDynamicObject(1411, 181.42, -1458.47, 13.42,   0.00, 0.00, 137.40);
	CreateDynamicObject(12943, 191.12, -1456.55, 11.71,   0.00, 0.00, -52.02);
	CreateDynamicObject(8169, 193.92, -1461.30, 11.95,   0.00, 0.00, -125.22);
	CreateDynamicObject(8169, 191.08, -1457.71, 11.95,   0.00, 0.00, -125.22);
	CreateDynamicObject(8169, 188.26, -1454.11, 11.95,   0.00, 0.00, -125.22);
	CreateDynamicObject(8169, 185.60, -1450.61, 11.97,   0.06, -0.42, -125.22);
	CreateDynamicObject(13028, 196.00, -1462.72, 13.21,   0.00, 0.00, 127.78);
	CreateDynamicObject(8169, 193.86, -1446.61, 11.95,   0.06, -0.42, -125.22);
	CreateDynamicObject(1533, -299.35, 1623.12, 80.40,   -1.14, 0.00, -133.86);
	CreateDynamicObject(1247, -317.76, 1558.93, 76.76,   2.10, -1.96, 401.41);
	CreateDynamicObject(3660, -309.09, 1582.86, 76.98,   0.00, 0.00, 45.42);
	CreateDynamicObject(803, -325.76, 1574.40, 75.10,   0.00, 0.00, 0.00);
	CreateDynamicObject(803, -319.40, 1578.12, 75.10,   0.00, 0.00, 0.00);
	CreateDynamicObject(803, -314.37, 1582.96, 75.10,   0.00, 0.00, 0.00);
	CreateDynamicObject(803, -308.59, 1589.21, 75.10,   0.00, 0.00, 0.00);
	CreateDynamicObject(803, -320.81, 1573.39, 75.10,   0.00, 0.00, 0.00);
	CreateDynamicObject(803, -333.07, 1570.67, 75.10,   0.00, 0.00, 0.00);
	CreateDynamicObject(803, -336.28, 1566.31, 75.10,   0.00, 0.00, 0.00);
	CreateDynamicObject(803, -336.28, 1566.31, 75.10,   0.00, 0.00, 0.00);
	CreateDynamicObject(803, -337.35, 1557.10, 75.10,   0.00, 0.00, 0.00);
	CreateDynamicObject(11428, -263.95, 1457.32, 78.07,   0.00, 0.00, 228.91);
	CreateDynamicObject(1461, -240.94, 1471.12, 75.15,   0.00, 0.00, 359.38);
	CreateDynamicObject(1461, -242.90, 1470.17, 75.15,   0.00, 0.00, 359.38);
	CreateDynamicObject(1461, -244.65, 1469.31, 75.15,   0.00, 0.00, 359.38);
	CreateDynamicObject(1461, -246.53, 1468.33, 75.15,   0.00, 0.00, 359.38);
	CreateDynamicObject(1461, -248.33, 1467.25, 75.15,   0.00, 0.00, 359.38);
	CreateDynamicObject(1461, -250.33, 1466.12, 75.15,   0.00, 0.00, 359.38);
	CreateDynamicObject(1461, -252.41, 1464.72, 75.15,   0.00, 0.00, 359.38);
	CreateDynamicObject(1461, -245.27, 1430.92, 73.38,   0.00, 0.00, 359.38);
	CreateDynamicObject(1461, -234.42, 1440.66, 74.25,   0.00, 0.00, 359.38);
	CreateDynamicObject(1461, -227.93, 1442.35, 75.15,   0.00, 0.00, 359.38);
	CreateDynamicObject(1461, -235.10, 1424.92, 72.57,   0.00, 0.00, 359.38);
	CreateDynamicObject(1461, -229.58, 1425.82, 72.02,   0.00, 0.00, 359.38);
	CreateDynamicObject(1461, -238.82, 1424.54, 72.02,   0.00, 0.00, 359.38);
	CreateDynamicObject(1254, -245.41, 1431.21, 73.99,   0.00, 0.00, -6.18);
	CreateDynamicObject(1254, -238.85, 1424.72, 72.47,   0.00, 0.00, 0.00);
	CreateDynamicObject(1254, -235.08, 1425.09, 73.08,   0.00, 0.00, 0.00);
	CreateDynamicObject(1254, -248.90, 1430.06, 76.58,   0.00, 0.00, 358.44);
	CreateDynamicObject(1254, -255.88, 1430.14, 75.71,   0.00, 0.00, 0.00);
	CreateDynamicObject(1254, -234.40, 1440.83, 74.63,   0.00, 0.00, 0.00);
	CreateDynamicObject(1254, -227.99, 1442.48, 75.46,   0.00, 0.00, 0.00);
	CreateDynamicObject(1254, -229.21, 1445.43, 74.73,   0.00, 0.00, 0.00);
	CreateDynamicObject(1254, -258.71, 1460.06, 77.18,   0.00, 0.00, 357.69);
	CreateDynamicObject(1254, -267.24, 1460.02, 75.54,   0.00, 0.00, 357.18);
	CreateDynamicObject(1254, -260.11, 1455.89, 75.53,   -7.56, 5.28, 85.60);
	CreateDynamicObject(1254, -240.91, 1471.29, 75.55,   0.00, 0.00, 0.00);
	CreateDynamicObject(1254, -242.89, 1470.34, 75.40,   0.00, 0.00, 0.00);
	CreateDynamicObject(1254, -244.63, 1469.40, 75.77,   0.00, 0.00, 0.00);
	CreateDynamicObject(1254, -246.53, 1468.50, 75.61,   0.00, 0.00, 0.00);
	CreateDynamicObject(1254, -248.32, 1467.42, 75.60,   0.00, 0.00, 0.00);
	CreateDynamicObject(1254, -250.31, 1466.29, 75.54,   0.00, 0.00, 0.00);
	CreateDynamicObject(1254, -252.45, 1464.90, 75.56,   0.00, 0.00, 0.00);
	CreateDynamicObject(1242, -245.40, 1431.12, 73.68,   0.00, 0.00, 358.32);
	CreateDynamicObject(2035, -245.57, 1431.31, 73.76,   49.14, 232.50, -94.98);
	CreateDynamicObject(1254, -245.24, 1431.38, 73.99,   0.00, 0.00, -6.18);
	CreateDynamicObject(1275, -245.24, 1431.28, 73.66,   0.00, 0.00, 0.00);
	CreateDynamicObject(1411, 184.89, -1447.60, 13.42,   0.00, 0.00, 140.88);
	CreateDynamicObject(1247, 211.89, -1432.68, 14.71,   0.00, 0.00, -38.76);
	CreateDynamicObject(1597, 221.44, -1434.49, 14.74,   0.00, 0.00, 134.40);
	CreateDynamicObject(1597, 222.97, -1418.41, 14.84,   0.00, 0.00, 220.78);
	CreateDynamicObject(1532, 201.50, -1434.06, 12.04,   0.30, -0.90, -43.92);
	CreateDynamicObject(14853, -350.32, 905.55, 664.10,   0.00, 0.00, 0.00);
	CreateDynamicObject(14858, -370.31, 906.11, 664.07,   0.00, 0.00, 0.00);
	CreateDynamicObject(3440, -324.50, 913.92, 665.37,   0.00, 0.00, 0.00);
	CreateDynamicObject(3440, -322.37, 907.33, 665.37,   0.00, 0.00, 0.00);
	CreateDynamicObject(3440, -328.90, 913.92, 665.37,   0.00, 0.00, 0.00);
	CreateDynamicObject(3440, -330.90, 907.28, 665.37,   0.00, 0.00, 0.00);
	CreateDynamicObject(1649, -326.64, 913.89, 666.04,   0.00, 0.00, 179.11);
	CreateDynamicObject(1649, -326.64, 913.89, 662.79,   0.00, 0.00, 178.93);
	CreateDynamicObject(1649, -322.37, 907.47, 666.06,   0.00, 0.00, 288.34);
	CreateDynamicObject(1649, -322.37, 907.47, 662.79,   0.00, 0.00, 288.34);
	CreateDynamicObject(3440, -323.19, 909.71, 665.37,   0.00, 0.00, 0.00);
	CreateDynamicObject(1649, -330.70, 907.62, 662.79,   0.00, 0.00, 253.71);
	CreateDynamicObject(3440, -330.14, 909.64, 665.37,   0.00, 0.00, 0.00);
	CreateDynamicObject(1649, -330.70, 907.62, 666.02,   0.00, 0.00, 253.71);
	CreateDynamicObject(19358, -322.61, 923.59, 664.81,   0.00, 0.00, 90.69);
	CreateDynamicObject(2434, -323.95, 922.84, 663.09,   0.00, 0.00, 0.00);
	CreateDynamicObject(2435, -324.88, 922.84, 663.08,   0.00, 0.00, 0.00);
	CreateDynamicObject(2435, -325.81, 922.84, 663.08,   0.00, 0.00, 0.00);
	CreateDynamicObject(2435, -326.74, 922.85, 663.08,   0.00, 0.00, 0.00);
	CreateDynamicObject(2435, -327.67, 922.85, 663.08,   0.00, 0.00, 0.00);
	CreateDynamicObject(2435, -328.59, 922.85, 663.08,   0.00, 0.00, 0.00);
	CreateDynamicObject(19358, -319.40, 923.63, 664.81,   0.00, 0.00, 90.69);
	CreateDynamicObject(19358, -317.86, 922.04, 664.81,   0.00, 0.00, 0.84);
	CreateDynamicObject(19358, -317.81, 918.84, 664.81,   0.00, 0.00, 0.84);
	CreateDynamicObject(2403, -320.35, 914.02, 663.10,   0.00, 0.00, 272.78);
	CreateDynamicObject(19404, -316.89, 915.95, 664.82,   0.00, 0.00, 34.69);
	CreateDynamicObject(19358, -314.44, 914.69, 664.81,   0.00, 0.00, 90.64);
	CreateDynamicObject(19358, -320.70, 908.07, 664.84,   0.00, 0.00, 182.86);
	CreateDynamicObject(2435, -316.61, 915.56, 663.20,   0.00, 0.00, 306.08);
	CreateDynamicObject(2435, -317.15, 916.30, 663.20,   0.00, 0.00, 306.08);
	CreateDynamicObject(3498, -317.61, 916.71, 664.19,   0.00, 0.00, 0.00);
	CreateDynamicObject(3498, -316.42, 914.81, 664.30,   0.00, 0.00, 0.00);
	CreateDynamicObject(3498, -320.60, 909.57, 664.30,   0.00, 0.00, 0.00);
	CreateDynamicObject(3498, -320.72, 907.06, 664.30,   0.00, 0.00, 0.00);
	CreateDynamicObject(3498, -317.99, 923.51, 664.19,   0.00, 0.00, 0.00);
	CreateDynamicObject(3498, -324.28, 923.60, 664.19,   0.00, 0.00, 0.00);
	CreateDynamicObject(1723, -332.77, 908.63, 663.10,   0.00, 0.00, -182.28);
	CreateDynamicObject(1724, -335.85, 909.08, 663.10,   0.00, 0.00, 121.02);
	CreateDynamicObject(1724, -331.01, 909.27, 663.10,   0.00, 0.00, 209.64);
	CreateDynamicObject(861, -337.67, 907.99, 663.40,   0.00, 0.00, 0.00);
	CreateDynamicObject(861, -338.74, 908.01, 663.40,   0.00, 0.00, -135.00);
	CreateDynamicObject(861, -339.89, 907.96, 663.40,   0.00, 0.00, 18.00);
	CreateDynamicObject(861, -341.13, 907.91, 663.40,   0.00, 0.00, -258.00);
	CreateDynamicObject(861, -342.29, 907.99, 663.40,   0.00, 0.00, 185.00);
	CreateDynamicObject(861, -343.56, 908.03, 663.40,   0.00, 0.00, 183.00);
	CreateDynamicObject(861, -345.05, 908.05, 663.40,   0.00, 0.00, -265.00);
	CreateDynamicObject(861, -346.41, 908.00, 663.40,   0.00, 0.00, -149.00);
	CreateDynamicObject(861, -347.87, 907.77, 663.40,   0.00, 0.00, -149.00);
	CreateDynamicObject(869, -339.72, 909.35, 664.10,   0.00, 0.00, 0.00);
	CreateDynamicObject(869, -340.76, 910.48, 664.10,   0.00, 0.00, 0.00);
	CreateDynamicObject(869, -343.23, 908.92, 664.10,   0.00, 0.00, 0.00);
	CreateDynamicObject(869, -343.23, 910.61, 664.10,   0.00, 0.00, 0.00);
	CreateDynamicObject(869, -345.80, 909.37, 664.10,   0.00, 0.00, 0.00);
	CreateDynamicObject(869, -344.54, 910.99, 664.10,   0.00, 0.00, 0.00);
	CreateDynamicObject(2253, -338.02, 910.91, 664.29,   0.00, 0.00, 35.94);
	CreateDynamicObject(2253, -339.43, 912.31, 664.29,   0.00, 0.00, 66.21);
	CreateDynamicObject(2253, -336.84, 908.13, 664.36,   0.00, 0.00, 73.12);
	CreateDynamicObject(628, -331.65, 907.71, 665.05,   0.00, 0.00, 0.00);
	CreateDynamicObject(628, -326.71, 897.84, 665.15,   0.00, 0.00, 0.00);
	CreateDynamicObject(2434, -329.72, 923.01, 663.08,   0.00, 0.00, 269.88);
	CreateDynamicObject(19358, -330.89, 923.54, 664.81,   0.00, 0.00, 90.69);
	CreateDynamicObject(19358, -334.03, 923.50, 664.81,   0.00, 0.00, 90.69);
	CreateDynamicObject(19358, -336.79, 922.48, 664.81,   0.00, 0.00, 129.68);
	CreateDynamicObject(19358, -342.30, 922.96, 664.81,   0.00, 0.00, 89.28);
	CreateDynamicObject(19388, -339.35, 922.23, 664.80,   0.00, 0.00, 61.81);
	CreateDynamicObject(3498, -329.25, 923.65, 664.19,   0.00, 0.00, 0.00);
	CreateDynamicObject(1649, -326.76, 923.63, 667.47,   0.00, 0.00, 178.93);
	CreateDynamicObject(644, -323.01, 922.68, 663.32,   0.00, 0.00, 230.98);
	CreateDynamicObject(644, -330.31, 922.60, 663.32,   0.00, 0.00, 230.98);
	CreateDynamicObject(1878, -328.13, 913.82, 665.62,   0.00, 0.00, 348.65);
	CreateDynamicObject(1878, -328.13, 913.82, 666.21,   0.00, 0.00, 0.00);
	CreateDynamicObject(1878, -327.16, 913.84, 665.85,   -88.62, -99.36, 348.24);
	CreateDynamicObject(1878, -327.38, 913.89, 666.19,   0.00, 0.00, 0.00);
	CreateDynamicObject(1878, -327.89, 913.83, 665.39,   -88.62, -99.36, -11.46);
	CreateDynamicObject(1878, -326.94, 913.87, 665.60,   0.00, 0.00, 0.00);
	CreateDynamicObject(1878, -327.10, 913.86, 666.43,   -88.62, -99.36, 348.24);
	CreateDynamicObject(1878, -327.14, 913.82, 665.37,   -88.62, -99.36, 348.24);
	CreateDynamicObject(1878, -326.60, 913.86, 666.19,   0.00, 0.00, 0.00);
	CreateDynamicObject(1878, -326.34, 913.81, 666.43,   -88.62, -99.36, 348.24);
	CreateDynamicObject(1878, -326.08, 913.81, 666.19,   0.00, 0.00, 0.00);
	CreateDynamicObject(1878, -326.58, 913.82, 665.54,   0.00, 0.00, 0.00);
	CreateDynamicObject(1878, -326.30, 913.81, 665.85,   -88.78, -99.98, 348.24);
	CreateDynamicObject(1878, -325.72, 913.79, 666.19,   0.00, 0.00, 0.00);
	CreateDynamicObject(1878, -325.73, 913.76, 665.54,   0.00, 0.00, 0.00);
	CreateDynamicObject(1878, -325.16, 913.81, 665.68,   0.00, 0.00, 0.00);
	CreateDynamicObject(1878, -325.16, 913.81, 666.09,   0.00, 0.00, 0.00);
	CreateDynamicObject(1878, -325.38, 913.85, 665.34,   -262.56, -69.24, 348.24);
	CreateDynamicObject(1878, -325.44, 913.81, 666.40,   -132.42, -95.10, 348.24);
	CreateDynamicObject(3498, -335.63, 923.26, 664.19,   0.00, 0.00, 0.00);
	CreateDynamicObject(3498, -337.97, 921.60, 664.19,   0.00, 0.00, 0.00);
	CreateDynamicObject(3498, -340.75, 922.96, 664.19,   0.00, 0.00, 0.00);
	CreateDynamicObject(3498, -342.95, 923.00, 664.19,   0.00, 0.00, 0.00);
	CreateDynamicObject(644, -318.64, 916.82, 663.32,   0.00, 0.00, 230.98);
	CreateDynamicObject(2710, -317.07, 910.76, 665.03,   -0.06, 0.00, -145.68);
	CreateDynamicObject(1247, -315.94, 912.03, 665.33,   0.00, 0.00, 68.64);
	CreateDynamicObject(1247, -315.64, 912.55, 665.31,   0.00, 0.00, 69.90);
	CreateDynamicObject(1247, -315.94, 912.03, 665.33,   0.00, 0.00, 68.64);
	CreateDynamicObject(1247, -315.64, 912.55, 665.31,   0.00, 0.00, 69.90);
	CreateDynamicObject(1247, -316.22, 911.59, 665.34,   0.00, 0.00, 56.94);
	CreateDynamicObject(2035, -316.10, 912.11, 664.72,   85.50, -7.98, -112.14);
	CreateDynamicObject(1314, -315.81, 912.51, 665.28,   0.00, 0.00, 62.34);
	CreateDynamicObject(1239, -317.86, 909.73, 664.76,   0.00, 0.00, 0.00);
	CreateDynamicObject(1247, -317.87, 909.73, 664.60,   86.10, -31.74, 0.00);
	CreateDynamicObject(1274, -319.97, 909.16, 665.07,   0.00, 0.00, 9.28);
	CreateDynamicObject(1247, -319.96, 909.21, 664.88,   86.10, -31.74, 0.00);
	CreateDynamicObject(1247, -317.87, 909.73, 665.18,   86.10, -31.74, 0.00);
	CreateDynamicObject(19330, -315.42, 913.36, 664.97,   -0.72, -87.60, 87.42);
	CreateDynamicObject(19347, -316.74, 910.99, 665.45,   126.48, 220.32, -0.66);
	CreateDynamicObject(19347, -316.86, 910.88, 665.45,   126.48, 220.32, -0.66);
	CreateDynamicObject(19347, -316.93, 910.78, 665.45,   126.48, 220.32, -0.66);
	CreateDynamicObject(19347, -317.01, 910.69, 665.45,   126.48, 220.32, -0.66);
	CreateDynamicObject(772, -320.68, 1556.69, 74.67,   0.00, 0.00, 0.00);
	return 1;
}

stock CreateBarracksInterior(){	
	CreateDynamicObject(2068, 1237.09, 2482.57, 1003.67,   0.00, 0.00, 90.00);
	CreateDynamicObject(2068, 1237.24, 2476.37, 1003.67,   0.00, 0.00, 90.00);
	CreateDynamicObject(2068, 1235.58, 2484.51, 1002.17,   90.00, 0.00, 0.00);
	CreateDynamicObject(2068, 1235.84, 2476.15, 1002.17,   90.00, 0.00, 0.00);
	CreateDynamicObject(1218, 1238.44, 2483.83, 1000.59,   0.00, 0.00, 0.00);
	CreateDynamicObject(19169, 1238.96, 2483.52, 1002.37,   0.00, -90.00, 0.00);
	CreateDynamicObject(19168, 1238.94, 2477.35, 1002.37,   0.00, -90.00, 0.00);
	CreateDynamicObject(19165, 1234.06, 2477.76, 1002.37,   0.00, 90.00, 0.00);
	CreateDynamicObject(19165, 1234.07, 2483.73, 1002.37,   0.00, 90.00, 0.00);
	CreateDynamicObject(3014, 1236.57, 2484.18, 1000.29,   0.00, 0.00, 0.00);
	CreateDynamicObject(3014, 1235.96, 2484.25, 1000.29,   0.00, 0.00, 0.00);
	CreateDynamicObject(3014, 1236.21, 2484.15, 1000.74,   0.00, 0.00, 0.00);
	CreateDynamicObject(2036, 1234.12, 2479.63, 1003.30,   90.00, 0.00, 90.00);
	CreateDynamicObject(2036, 1234.12, 2479.63, 1002.30,   90.00, 0.00, 90.00);
	CreateDynamicObject(2036, 1234.12, 2481.63, 1002.30,   90.00, 0.00, 90.00);
	CreateDynamicObject(2036, 1234.12, 2481.63, 1003.30,   90.00, 0.00, 90.00);
	CreateDynamicObject(2035, 1238.90, 2481.81, 1003.01,   90.00, 0.00, 90.00);
	CreateDynamicObject(2035, 1238.90, 2479.31, 1003.01,   90.00, 0.00, 90.00);
	CreateDynamicObject(2035, 1238.90, 2479.31, 1002.51,   90.00, 0.00, 90.00);
	CreateDynamicObject(2035, 1238.90, 2481.81, 1002.51,   90.00, 0.00, 90.00);
	CreateDynamicObject(2044, 1238.94, 2480.87, 1002.77,   90.00, 0.00, 90.00);
	CreateDynamicObject(2044, 1238.90, 2480.18, 1002.77,   90.00, 0.00, -90.00);
	CreateDynamicObject(921, 1234.24, 2476.67, 1003.13,   0.00, 0.00, 90.00);
	CreateDynamicObject(921, 1238.84, 2476.42, 1003.13,   0.00, 0.00, -90.00);
	CreateDynamicObject(1893, 1235.61, 2477.75, 1003.82,   0.00, 0.00, 0.00);
	CreateDynamicObject(1893, 1235.99, 2483.03, 1003.82,   0.00, 0.00, 0.00);
	CreateDynamicObject(1221, 1234.60, 2483.58, 1000.59,   0.00, 0.00, 0.00);
	CreateDynamicObject(14401, 1236.94, 2480.34, 1000.53,   0.00, 0.00, 0.00);
	CreateDynamicObject(2036, 1234.12, 2479.63, 1001.30,   90.00, 0.00, 90.00);
	CreateDynamicObject(2036, 1234.12, 2481.63, 1001.30,   90.00, 0.00, 90.00);
	CreateDynamicObject(2035, 1238.90, 2481.81, 1001.81,   90.00, 0.00, 90.00);
	CreateDynamicObject(2044, 1238.94, 2480.87, 1002.20,   90.00, 0.00, 90.00);
	CreateDynamicObject(2044, 1238.90, 2480.18, 1002.20,   90.00, 0.00, -90.00);
	CreateDynamicObject(2035, 1238.90, 2479.31, 1001.81,   90.00, 0.00, 90.00);
	CreateDynamicObject(2035, 1238.90, 2481.81, 1000.81,   90.00, 0.00, 90.00);
	CreateDynamicObject(2035, 1238.90, 2479.31, 1000.81,   90.00, 0.00, 90.00);
	CreateDynamicObject(2044, 1238.90, 2480.18, 1001.42,   90.00, 0.00, -90.00);
	CreateDynamicObject(2044, 1238.94, 2480.87, 1001.42,   90.00, 0.00, 90.00);
	CreateDynamicObject(16644, 1236.14, 2481.70, 1000.13,   0.00, 0.00, 90.00);
	CreateDynamicObject(16644, 1233.54, 2481.41, 1000.13,   0.00, 0.00, 90.00);
	CreateDynamicObject(16644, 1238.76, 2485.07, 1000.06,   0.00, 0.00, 90.00);
	CreateDynamicObject(1217, 1238.52, 2476.72, 1000.59,   0.00, 0.00, 0.00);
	CreateDynamicObject(18653, 1237.93, 2477.79, 1003.60,   0.00, -90.00, 0.00);
	CreateDynamicObject(2372, 1236.25, 2478.58, 1000.00,   0.00, 0.00, 0.00);
	CreateDynamicObject(2372, 1236.30, 2481.09, 1000.00,   0.00, 0.00, 0.00);
	CreateDynamicObject(18653, 1238.28, 2482.95, 1003.60,   0.00, -90.00, 0.00);

	//Floor
	SetObjectMaterial(CreateObject(19452, 1238.21, 2480.69, 1000.00,   0.00, 90.00, 0.00), 0, 17925, "lae2fake_int", "ab_wood1", 0xFFFFFFFF);
	SetObjectMaterial(CreateObject(19452, 1234.72, 2480.40, 1000.00,   0.00, 90.00, 0.00), 0, 17925, "lae2fake_int", "ab_wood1", 0xFFFFFFFF);
	//Walls
	SetDynamicObjectMaterial(CreateDynamicObject(19377, 1239.05, 2480.34, 1000.09,   0.00, 0.00, 0.00), 0, 11326, "oldgarage_sfse", "ws_corr_metal1", 0xFFFFFFFF);
	SetDynamicObjectMaterial(CreateDynamicObject(19377, 1233.98, 2480.44, 1000.09,   0.00, 0.00, 0.00), 0, 11326, "oldgarage_sfse", "ws_corr_metal1", 0xFFFFFFFF);
	SetDynamicObjectMaterial(CreateDynamicObject(19377, 1236.83, 2485.16, 1000.09,   0.00, 0.00, 90.00), 0, 11326, "oldgarage_sfse", "ws_corr_metal1", 0xFFFFFFFF);
	SetDynamicObjectMaterial(CreateDynamicObject(19377, 1236.42, 2476.18, 1000.09,   0.00, 0.00, 90.00), 0, 11326, "oldgarage_sfse", "ws_corr_metal1", 0xFFFFFFFF);
	SetDynamicObjectMaterial(CreateDynamicObject(19377, 1236.43, 2481.15, 1004.09,   0.00, 90.00, 0.00), 0, 11326, "oldgarage_sfse", "ws_corr_metal1", 0xFFFFFFFF);
	//Holders
	SetDynamicObjectMaterial(CreateDynamicObject(2395, 1238.90, 2481.92, 1000.52,   0.00, 0.00, -90.00), 0, 3241, "conhooses", "ws_corr_metal2", 0xFFFFFFFF);
	SetDynamicObjectMaterial(CreateDynamicObject(2395, 1234.12, 2479.25, 1001.02,   0.00, 0.00, 90.00), 0, 3241, "conhooses", "ws_corr_metal2", 0xFFFFFFFF);
	return 1;
}

stock CustObjectLSPDEWindow(objectid, Float:x, Float:y, Float:z, Float:rx, Float:ry, Float:rz) //
{
new LSPDWindow=CreateDynamicObject(objectid, x, y, z, rx, ry, rz); //
SetDynamicObjectMaterial(LSPDWindow, 0, 3979, "civic01_lan", "sl_laglasswall2", 0); //Glass above the door
}

stock CustObjectLSPDEBrickWall(objectid, Float:x, Float:y, Float:z, Float:rx, Float:ry, Float:rz) //
{
new LSPDBrickWall=CreateDynamicObject(objectid, x, y, z, rx, ry, rz); //
SetDynamicObjectMaterial(LSPDBrickWall, 0, 10398, "countryclub_sfs", "hc_brickwall1", 0); //BrickWall
}

stock CustObjectLSPDEPillar(objectid, Float:x, Float:y, Float:z, Float:rx, Float:ry, Float:rz) //
{
new LSPDEPillar=CreateDynamicObject(objectid, x, y, z, rx, ry, rz); //
SetDynamicObjectMaterial(LSPDEPillar, 0, 16150, "ufo_bar", "GEwhite1_64", 0); //Pillars
}
stock LSPDPCLEG(objectid, Float:x, Float:y, Float:z, Float:rx, Float:ry, Float:rz) //
{
new LSPDcompleg = CreateDynamicObject(objectid, x, y, z, rx, ry, rz); //
SetDynamicObjectMaterial(LSPDcompleg, 0, 2267, "picture_frame", "CJ_WOOD_DARK", 0xFF1D1D1D);
}
stock LSPDMONf(objectid, Float:x, Float:y, Float:z, Float:rx, Float:ry, Float:rz) //
{
	new LSPDMONs = CreateDynamicObject(objectid, x, y, z, rx, ry, rz); //
	SetDynamicObjectMaterial(LSPDMONs, 0, 2267, "picture_frame", "CJ_WOOD_DARK", 0xFF1D1D1D); //
	SetDynamicObjectMaterial(LSPDMONs, 1, 16150, "ufo_bar", "GEwhite1_64", 0xFF2A2A2A); //
}
stock LSPDMONb(objectid, Float:x, Float:y, Float:z, Float:rx, Float:ry, Float:rz) //
{
	new LSPDMONs = CreateDynamicObject(objectid, x, y, z, rx, ry, rz); //
	SetDynamicObjectMaterial(LSPDMONs, 0, 2267, "picture_frame", "CJ_WOOD_DARK", 0xFF1D1D1D); //
	SetDynamicObjectMaterial(LSPDMONs, 1, 2267, "picture_frame", "CJ_WOOD_DARK", 0xFF1D1D1D); //
}
stock LSPDMONlight(objectid, Float:x, Float:y, Float:z, Float:rx, Float:ry, Float:rz) //
{
	new LSPDMONs = CreateDynamicObject(objectid, x, y, z, rx, ry, rz); //
	SetDynamicObjectMaterial(LSPDMONs, 0, 18644, "mattextures", "screw", 0xFFD51717); //
}
stock LSPDMONkeys(objectid, Float:x, Float:y, Float:z, Float:rx, Float:ry, Float:rz) //
{
	new LSPDMONs = CreateDynamicObject(objectid, x, y, z, rx, ry, rz); //
	SetDynamicObjectMaterial(LSPDMONs, 0, 2009, "cj_office", "of_key_256", 0xFF292929); //
}
new LSPDINTtxt;
stock LoadLSPD() //by Jacob/Nate
{
	
	//sign by jacob ;)
	/*new
		sign = CreateDynamicObject(10837, 1555.01, -1676.77, 21.59,   0.00, 0.00, -15.00);

	SetDynamicObjectMaterial(sign, 1, 7009, "vgndwntwn1", "newpolice_sa", 0);
	CreateDynamicObject(19357, 1555.1271, -1675.4456, 23.7983,   0.00, 0.00, 0.00);
	CreateDynamicObject(19357, 1555.1292, -1675.7859, 23.7983,   0.00, 0.00, 0.00);*/
	
	/*sign = CreateDynamicObject(2722, 1555.00, -1674.60, 24.92,   0.00, 0.00, 270.00);
	SetDynamicObjectMaterialText(sign, 0, "Los", 13, "Cambria", 55, 1, -584707328, 0, 1);
	sign = CreateDynamicObject(2722, 1554.90, -1675.89, 24.92,   0.00, 0.00, 270.00);
	SetDynamicObjectMaterialText(sign, 0, "Santos", 13, "Cambria", 55, 1, -584707328, 0, 1);
	sign = CreateDynamicObject(2655, 1554.902, -1674.9597, 25.2000,   0.00, 90.00, 270.00);
	SetDynamicObjectMaterial(sign, 0, 18265, "w_town3cs_t", "ws_whitewall2_top", 0xFFFFFFFF);
	sign = CreateDynamicObject(2655, 1555.0000, -1676.3397, 25.2000,   0.00, 90.00, 270.00);
	SetDynamicObjectMaterial(sign, 0, 18265, "w_town3cs_t", "ws_whitewall2_top", 0xFFFFFFFF);*/

	CreateDynamicObject(19304, 1586.38, -1676.85, 1096.12,   0.00, 90.00, 0.00);
	CreateDynamicObject(19304, 1584.74, -1676.86, 1096.12,   0.00, 90.00, 0.00);
	CreateDynamicObject(19304, 1583.24, -1676.85, 1096.12,   0.00, 90.00, 0.00);
	CreateDynamicObject(19304, 1581.80, -1676.86, 1096.12,   0.00, 90.00, 0.00);
	CreateDynamicObject(19304, 1588.03, -1676.98, 1095.12,   0.00, 90.00, 0.00);
	//==========
	LSPDINTtxt = CreateObject(19301, 1560.76, -1678.22, 1101.57,   0.00, 0.00, 0.00);
	SetObjectMaterial(LSPDINTtxt, 1, 16150, "ufo_bar", "sa_wood08_128", 0); //Dark wooden fringe covering the walls
	SetObjectMaterial(LSPDINTtxt, 2, 1515, "dsfs", "CJ_WOOD6", 0); //Desk top in the lobby
	SetObjectMaterial(LSPDINTtxt, 3, 13746, "lahillshilhs1z", "ws_stationfloor", 0); //Blue carper, 2nd floor
	SetObjectMaterial(LSPDINTtxt, 4, 10871, "blacksky_sfse", "ws_slatetiles", 0); //Tiles, behind the desk in the lobby
	SetObjectMaterial(LSPDINTtxt, 5, 10053, "slapart01sfe", "whitedecosfe4", 0); //Wall in the lobby
	SetObjectMaterial(LSPDINTtxt, 6, 6060, "shops2_law", "gun_ceiling1", 0); //Ceiling in the lobby
	SetObjectMaterial(LSPDINTtxt, 8, 6060, "shops2_law", "gun_ceiling1", 0); //Ceiling tile, main hall ceiling
	SetObjectMaterial(LSPDINTtxt, 9, 16150, "ufo_bar", "sa_wood08_128", 0); //Wooden fringe all around the building.
	SetObjectMaterial(LSPDINTtxt, 10, 12841, "cos_pizzaplace", "b_wtilesreflect", 0); //Floor in the briefing room
	SetObjectMaterial(LSPDINTtxt, 12, 14389, "madpoolbit", "ah_wallstyle1", 0); //Wall upstairs.
	SetObjectMaterial(LSPDINTtxt, 13, 10932, "station_sfse", "ws_stationfloor", 0); //Floor
	SetObjectMaterial(LSPDINTtxt, 15, 10871, "blacksky_sfse", "ws_slatetiles", 0); //Floor in the training room
	SetDynamicObjectMaterial(CreateDynamicObject(19377, 1570.94, -1676.89, 1106.48,   0.00, 0.00, 90.00), 0, 14389, "madpoolbit", "ah_wallstyle1", 0);
	SetDynamicObjectMaterial(CreateDynamicObject(19377, 1593.46, -1676.89, 1106.48,   0.00, 0.00, 90.00), 0, 14389, "madpoolbit", "ah_wallstyle1", 0);
	SetDynamicObjectMaterial(CreateDynamicObject(19377, 1579.2395, -1676.8884, 1113.0282,   0.00, 0.00, 90.01), 0, 14389, "madpoolbit", "ah_wallstyle1", 0);
	SetDynamicObjectMaterial(CreateDynamicObject(19458, 1570.96, -1676.88, 1104.43,   0.00, 0.00, 90.00), 0, 16150, "ufo_bar", "sa_wood08_128", 0xFFFFFFFF);
	SetDynamicObjectMaterial(CreateDynamicObject(19366, 1590.24, -1676.88, 1104.43,   0.00, 0.00, 90.00), 0, 16150, "ufo_bar", "sa_wood08_128", 0xFFFFFFFF);
	SetDynamicObjectMaterial(CreateDynamicObject(19458, 1570.95, -1676.93, 1104.44,   0.00, 0.00, 90.00), 0, 16150, "ufo_bar", "sa_wood08_128", 0xFFFFFFFF);
	SetDynamicObjectMaterial(CreateDynamicObject(19462, 1571.17, -1676.94, 1103.63,   0.00, 0.00, 90.00), 0, 16150, "ufo_bar", "sa_wood08_128", 0xFFFFFFFF);
	SetDynamicObjectMaterial(CreateDynamicObject(19462, 1583.5779, -1676.9312, 1103.6300,   0.00, 0.00, 90.00), 0, 16150, "ufo_bar", "sa_wood08_128", 0xFFFFFFFF);
	SetDynamicObjectMaterial(CreateDynamicObject(19462, 1583.58, -1676.86, 1103.64,   0.00, 0.00, 90.00), 0, 16150, "ufo_bar", "sa_wood08_128", 0xFFFFFFFF);
	SetDynamicObjectMaterial(CreateDynamicObject(19462, 1593.21, -1676.86, 1103.64,   0.00, 0.00, 90.00), 0, 16150, "ufo_bar", "sa_wood08_128", 0xFFFFFFFF);
	SetDynamicObjectMaterial(CreateDynamicObject(19462, 1571.18, -1676.86, 1103.64,   0.00, 0.00, 90.00), 0, 16150, "ufo_bar", "sa_wood08_128", 0xFFFFFFFF);
	SetDynamicObjectMaterial(CreateDynamicObject(19377, 1574.26, -1668.99, 1106.48,   0.00, 0.00, 0.00), 0, 14389, "madpoolbit", "ah_wallstyle1", 0);
	SetDynamicObjectMaterial(CreateDynamicObject(19378, 1574.27, -1669.00, 1100.93,   0.00, 0.00, 0.00), 0, 16150, "ufo_bar", "sa_wood08_128", 0xFFFFFFFF);
	SetDynamicObjectMaterial(CreateDynamicObject(19377, 1583.83, -1676.89, 1106.48,   0.00, 0.00, 90.00), 0, 14389, "madpoolbit", "ah_wallstyle1", 0);
	SetDynamicObjectMaterial(CreateDynamicObject(19458, 1583.63, -1676.93, 1104.43,   0.00, 0.00, 90.00), 0, 16150, "ufo_bar", "sa_wood08_128", 0xFFFFFFFF);
	SetDynamicObjectMaterial(CreateDynamicObject(19440, 1533.22, -1682.24, 1105.58,   0.00, 0.00, 0.00), 0, 14389, "madpoolbit", "ah_wallstyle1", 0xFFCBD777);
	SetDynamicObjectMaterial(CreateDynamicObject(19440, 1533.2078, -1682.8201, 1105.5800,   0.00, 0.00, 0.00), 0, 14389, "madpoolbit", "ah_wallstyle1", 0xFFCBD777);
	CreateDynamicObject(19440, 1533.22, -1682.16, 1102.08,   0.00, 0.00, 0.00);
	SetDynamicObjectMaterial(CreateDynamicObject(19439, 1579.6024, -1676.9076, 1106.0916,   0.00, 0.00, 90.00), 0, 16150, "ufo_bar", "sa_wood08_128", 0xFFFFFFFF);
	SetDynamicObjectMaterial(CreateDynamicObject(19439, 1575.1743, -1676.9089, 1106.0916,   0.00, 0.00, 90.00), 0, 16150, "ufo_bar", "sa_wood08_128", 0xFFFFFFFF);
	SetDynamicObjectMaterial(CreateDynamicObject(19377, 1583.83, -1676.91, 1106.48,   0.00, 0.00, 90.00), 0, 14389, "madpoolbit", "ah_wallstyle1", 0);
	SetDynamicObjectMaterial(CreateDynamicObject(19377, 1570.94, -1676.92, 1106.48,   0.00, 0.00, 90.00), 0, 14389, "madpoolbit", "ah_wallstyle1", 0);
	SetDynamicObjectMaterial(CreateDynamicObject(19439, 1577.2996, -1676.9027, 1108.3997,   90.00, 0.00, 90.00), 0, 16150, "ufo_bar", "sa_wood08_128", 0xFFFFFFFF);
	SetDynamicObjectMaterial(CreateDynamicObject(19377, 1579.24, -1676.92, 1113.03,   0.00, 0.00, 90.01), 0, 14389, "madpoolbit", "ah_wallstyle1", 0);
	SetDynamicObjectMaterial(CreateDynamicObject(19458, 1583.82, -1676.88, 1104.43,   0.00, 0.00, 90.00), 0, 16150, "ufo_bar", "sa_wood08_128", 0xFFFFFFFF);
	SetDynamicObjectMaterial(CreateDynamicObject(19379, 1574.28, -1669.01, 1100.15,   0.00, 0.00, 0.00), 0, 16150, "ufo_bar", "sa_wood08_128", 0xFFFFFFFF);
	SetDynamicObjectMaterial(CreateDynamicObject(19379, 1579.42, -1684.89, 1105.092,   0.00, 90.00, 0.00), 0, 19301, "mp_policesf", "mp_cop_carpet", 0xFFFFFFFF);
	SetDynamicObjectMaterial(CreateDynamicObject(19379, 1580.97, -1684.90, 1105.09,   0.00, 90.00, 0.00), 0, 19301, "mp_policesf", "mp_cop_carpet", 0xFFFFFFFF);
	SetDynamicObjectMaterial(CreateDynamicObject(19371, 1529.32, -1674.74, 1103.69,   0.00, 90.00, 0.00), 0, 12853, "cunte_gas01", "sw_floor1", 0xFFFFFFFF);
	SetDynamicObjectMaterial(CreateDynamicObject(19371, 1529.32, -1676.51, 1103.691,   0.00, 90.00, 0.00), 0, 12853, "cunte_gas01", "sw_floor1", 0xFFFFFFFF);

	SetDynamicObjectMaterial(CreateDynamicObject(19367, 1580.7000, -1688.4000, 1108.2800,   0.00, 0.00, 90.00), 0, 14389, "madpoolbit", "ah_wallstyle1", 0);
	SetDynamicObjectMaterial(CreateDynamicObject(19367, 1580.7000, -1688.4000, 1104.7800,   0.00, 0.00, 90.00), 0, 14389, "madpoolbit", "ah_wallstyle1", 0);
	SetDynamicObjectMaterial(CreateDynamicObject(19367, 1578.5200, -1688.3961, 1103.9100,   0.00, 0.00, 90.00), 0, 14389, "madpoolbit", "ah_wallstyle1", 0);
	SetDynamicObjectMaterial(CreateDynamicObject(19367, 1576.1600, -1688.4039, 1104.7800,   0.00, 0.00, 90.00), 0, 14389, "madpoolbit", "ah_wallstyle1", 0);
	SetDynamicObjectMaterial(CreateDynamicObject(19367, 1576.1600, -1688.4000, 1108.2800,   0.00, 0.00, 90.00), 0, 14389, "madpoolbit", "ah_wallstyle1", 0);
	SetDynamicObjectMaterial(CreateDynamicObject(19367, 1575.8000, -1688.4137, 1104.7800,   0.00, 0.00, 90.00), 0, 14389, "madpoolbit", "ah_wallstyle1", 0);
	SetDynamicObjectMaterial(CreateDynamicObject(19367, 1575.7708, -1688.4117, 1108.2800,   0.00, 0.00, 90.00), 0, 14389, "madpoolbit", "ah_wallstyle1", 0);
	SetDynamicObjectMaterial(CreateDynamicObject(19367, 1579.2000, -1688.7100, 1108.2800,   0.00, 0.00, 90.00), 0, 14389, "madpoolbit", "ah_wallstyle1", 0);
	SetDynamicObjectMaterial(CreateDynamicObject(19367, 1579.1899, -1689.9200, 1108.2800,   0.00, 0.00, 0.00), 0, 14389, "madpoolbit", "ah_wallstyle1", 0);
	SetDynamicObjectMaterial(CreateDynamicObject(19367, 1577.6801, -1689.9100, 1108.2800,   0.00, 0.00, 0.00), 0, 14389, "madpoolbit", "ah_wallstyle1", 0);
	SetDynamicObjectMaterial(CreateDynamicObject(19367, 1578.5000, -1690.0601, 1107.5900,   0.00, 90.00, 90.00), 0, 14389, "madpoolbit", "ah_wallstyle1", 0);
	SetDynamicObjectMaterial(CreateDynamicObject(19367, 1579.2000, -1688.4098, 1109.2600,   0.00, 0.00, 90.00), 0, 14389, "madpoolbit", "ah_wallstyle1", 0);
	SetDynamicObjectMaterial(CreateDynamicObject(19462, 1580.23, -1688.37, 1100.59,   90.00, 0.00, 90.00), 0, 16150, "ufo_bar", "sa_wood08_128", 0xFFFFFFFF);
	SetDynamicObjectMaterial(CreateDynamicObject(19462, 1576.73, -1688.37, 1100.59,   90.00, 0.00, 90.00), 0, 16150, "ufo_bar", "sa_wood08_128", 0xFFFFFFFF);
	SetDynamicObjectMaterial(CreateDynamicObject(19462, 1575.99, -1688.36, 1100.58,   90.00, 0.00, 90.00), 0, 16150, "ufo_bar", "sa_wood08_128", 0xFFFFFFFF);
	SetDynamicObjectMaterial(CreateDynamicObject(2463, 1578.64, -1688.80, 1106.40,   0.00, 0.00, 180.00), 1, 16150, "ufo_bar", "sa_wood08_128", 0xFFFFFFFF);
	SetDynamicObjectMaterial(CreateDynamicObject(19363, 1531.01, -1676.55, 1105.53,   0.00, 0.00, 0.00), 0, 12853, "cunte_gas01", "sw_floor1", 0xFFFFFFFF);
	SetDynamicObjectMaterial(CreateDynamicObject(19363, 1531.03, -1676.54, 1102.24,   0.00, 0.00, 0.00), 0, 16150, "ufo_bar", "sa_wood08_128", 0xFFFFFFFF);
	SetDynamicObjectMaterial(CreateDynamicObject(19363, 1529.39, -1677.99, 1105.53,   0.00, 0.00, 90.00), 0, 12853, "cunte_gas01", "sw_floor1", 0xFFFFFFFF);
	SetDynamicObjectMaterial(CreateDynamicObject(19363, 1528.10, -1676.41, 1105.53,   0.00, 0.00, 0.00), 0, 12853, "cunte_gas01", "sw_floor1", 0xFFFFFFFF);
	SetDynamicObjectMaterial(CreateDynamicObject(19363, 1528.09, -1674.83, 1105.53,   0.00, 0.00, 0.00), 0, 12853, "cunte_gas01", "sw_floor1", 0xFFFFFFFF);
	SetDynamicObjectMaterial(CreateDynamicObject(19363, 1531.0198, -1676.5385, 1105.5300,   0.00, 0.00, 0.00), 0, 14389, "madpoolbit", "ah_wallstyle1", 0);
	SetDynamicObjectMaterial(CreateDynamicObject(19363, 1529.4659, -1673.3516, 1105.5300,   0.00, 0.00, 90.00), 0, 12853, "cunte_gas01", "sw_floor1", 0xFFFFFFFF);
	SetDynamicObjectMaterial(CreateDynamicObject(19363, 1529.52, -1673.33, 1105.53,   0.00, 0.00, 90.00), 0, 14389, "madpoolbit", "ah_wallstyle1", 0);

	//Wall block to cell rooms
	SetDynamicObjectMaterial(CreateDynamicObject(19364, 1577.6206, -1682.8900, 1103.30000,   0.00, 0.00, 90.00), 0, 19301, "mp_policesf", "mp_cop_wall", 0xFFEDEFC2);
	SetDynamicObjectMaterial(CreateDynamicObject(19364, 1574.4094, -1682.8900, 1103.3000,   0.00, 0.00, 90.00), 0, 19301, "mp_policesf", "mp_cop_wall", 0xFFEDEFC2);
	SetDynamicObjectMaterial(CreateDynamicObject(19364, 1577.6200, -1682.8900, 1099.8000,   0.00, 180.00, 90.00), 0, 19301, "mp_policesf", "mp_cop_wall", 0xFFEDEFC2);
	SetDynamicObjectMaterial(CreateDynamicObject(19364, 1574.4100, -1682.8900, 1099.8000,  0.00, 180.00, 90.00), 0, 19301, "mp_policesf", "mp_cop_wall", 0xFFEDEFC2);
	//Integration room walls
	SetDynamicObjectMaterial(CreateDynamicObject(19367, 1543.61, -1676.43, 1102.26,   0.00, 0.00, 90.00), 0, 16150, "ufo_bar", "sa_wood08_128", 0xFFFFFFFF);
	SetDynamicObjectMaterial(CreateDynamicObject(19367, 1541.87, -1675.00, 1105.49,   0.00, 0.00, 0.00), 0, 14389, "madpoolbit", "ah_wallstyle1", 0xFFCBD777);
	SetDynamicObjectMaterial(CreateDynamicObject(19355, 1541.87, -1675.00, 1108.99,   0.00, 0.00, 0.00), 0, 14389, "madpoolbit", "ah_wallstyle1", 0xFFCBD777);
	SetDynamicObjectMaterial(CreateDynamicObject(19367, 1543.37, -1673.45, 1105.49,   0.00, 0.00, 90.00), 0, 14389, "madpoolbit", "ah_wallstyle1", 0xFFCBD777);
	SetDynamicObjectMaterial(CreateDynamicObject(19367, 1544.92, -1673.46, 1105.49,   0.00, 0.00, 90.00), 0, 14389, "madpoolbit", "ah_wallstyle1", 0xFFCBD777);
	SetDynamicObjectMaterial(CreateDynamicObject(19367, 1546.52, -1674.96, 1105.49,   0.00, 0.00, 0.00), 0, 14389, "madpoolbit", "ah_wallstyle1", 0xFFCBD777);
	SetDynamicObjectMaterial(CreateDynamicObject(19395, 1543.47, -1676.49, 1105.61,   90.00, 0.00, 90.00), 0, 14389, "madpoolbit", "ah_wallstyle1", 0xFFCBD777);
	SetDynamicObjectMaterial(CreateDynamicObject(19395, 1543.46, -1676.44, 1105.60,   90.00, 0.00, 90.00), 0, 14389, "madpoolbit", "ah_wallstyle1", 0xFFCBD777);
	SetDynamicObjectMaterial(CreateDynamicObject(19440, 1545.74, -1676.41, 1108.03,   180.00, 0.00, 90.00), 0, 14389, "madpoolbit", "ah_wallstyle1", 0xFFCBD777);
	SetDynamicObjectMaterial(CreateDynamicObject(19440, 1545.74, -1676.50, 1108.04,   180.00, 0.00, 90.00), 0, 14389, "madpoolbit", "ah_wallstyle1", 0xFFCBD777);
	SetDynamicObjectMaterial(CreateDynamicObject(19395, 1543.4954, -1676.4845, 1105.6400,   90.00, 0.00, 90.00), 0, 16150, "ufo_bar", "sa_wood08_128", 0xFFFFFFFF);
	SetDynamicObjectMaterial(CreateDynamicObject(19440, 1545.7394, -1676.4791, 1108.0200,   180.00, 0.00, 90.00), 0, 16150, "ufo_bar", "sa_wood08_128", 0xFFFFFFFF);
	SetDynamicObjectMaterial(CreateDynamicObject(19395, 1543.51, -1676.48,  1105.5500,   90.00, 0.00, 90.00), 0, 16150, "ufo_bar", "sa_wood08_128", 0xFFFFFFFF);
	SetDynamicObjectMaterial(CreateDynamicObject(19395, 1543.49, -1676.44, 1108.85,   90.00, 0.00, 90.00), 0, 16150, "ufo_bar", "sa_wood08_128", 0xFFFFFFFF);
	//Integration window, blacked
	SetDynamicObjectMaterial(CreateDynamicObject(2395, 1544.4600, -1676.4399, 1108.0199,   0.00, 90.00, 180.00), 0, 14598, "papaerchaseoffice", "barbersmir1", 0xFF4A4A4A);

	//Counter (main)
	SetDynamicObjectMaterial(CreateDynamicObject(14638, 1585.6515, -1673.8605, 1106.1299,   0.00, 90.00, 0.00), 0, 1999, "cj_office", "CJ_DESK", 0);
	SetDynamicObjectMaterial(CreateDynamicObject(14638, 1582.6503, -1673.8606, 1106.1299,   0.00, 90.00, 0.00), 0, 1999, "cj_office", "CJ_DESK", 0);
	//PC legs
	LSPDPCLEG(2192, 1559.42, -1682.95, 1105.98,   0.00, 0.00, 0.00);
	LSPDPCLEG(2192, 1562.79, -1682.05, 1105.98,   0.00, 0.00, -62.50);
	LSPDPCLEG(2192, 1564.83, -1680.07, 1105.98,   0.00, 0.00, 104.50);
	LSPDPCLEG(2192, 1567.37, -1682.94, 1105.98,   0.00, 0.00, 35.50);
	LSPDPCLEG(2192, 1576.03, -1685.96, 1106.11,   0.00, 0.00, 194.21);
	LSPDPCLEG(2192, 1583.77, -1672.41, 1106.12,   0.00, 0.00, 29.15);
	LSPDPCLEG(2192, 1586.78, -1672.79, 1106.12,   0.00, 0.00, -16.00);
	LSPDPCLEG(2192, 1529.90, -1668.73, 1104.57,   0.00, 0.00, 90.00);
	LSPDPCLEG(2192, 1535.84, -1672.43, 1104.57,   0.00, 0.00, 0.00);
	LSPDPCLEG(2192, 1534.00, -1672.43, 1104.57,   0.00, 0.00, 0.00);
	LSPDPCLEG(2192, 1531.39, -1668.15, 1104.57,   0.00, 0.00, 180.00);
	LSPDPCLEG(2192, 1532.04, -1672.38, 1104.57,   0.00, 0.00, 13.74);
	LSPDPCLEG(2192, 1533.3795, -1668.1261, 1104.5699,   0.00, 0.00, 176.59);
	LSPDPCLEG(2192, 1535.25, -1668.13, 1104.57,   0.00, 0.00, 180.14);

	//PC mons front
	LSPDMONf(2265, 1586.93, -1672.61, 1106.66,   -15.00, 90.00, 164.00);
	LSPDMONf(2265, 1583.74, -1672.18, 1106.66,   -14.82, 90.00, 209.15);
	LSPDMONf(2265, 1575.98, -1686.20, 1106.66,   -13.28, 90.00, 14.21);
	LSPDMONf(2265, 1567.33, -1682.70, 1106.48,   -12.24, 90.00, 213.90);
	LSPDMONf(2265, 1563.03, -1681.97, 1106.48,   -12.24, 90.00, 120.50);
	LSPDMONf(2265, 1564.58, -1680.05, 1106.48,   -12.24, 90.00, 284.50);
	LSPDMONf(2265, 1559.52, -1682.72, 1106.53,   -12.24, 90.00, 180.00);
	LSPDMONf(2265, 1535.92, -1672.21, 1105.14,   -10.93, 90.00, 180.00);
	LSPDMONf(2265, 1534.11, -1672.21, 1105.14,   -10.93, 90.00, 180.00);
	LSPDMONf(2265, 1532.08, -1672.14, 1105.14,   -10.93, 90.00, 193.74);
	LSPDMONf(2265, 1529.67, -1668.63, 1105.11,   -10.93, 90.00, -90.00);
	LSPDMONf(2265, 1531.30, -1668.39, 1105.11,   -10.93, 90.00, 0.00);
	LSPDMONf(2265, 1533.27, -1668.36, 1105.11,   -10.93, 90.00, -3.59);
	LSPDMONf(2265, 1535.16, -1668.36, 1105.11,   -10.93, 90.00, 0.14);
	LSPDMONf(2267, 1528.18, -1670.12, 1106.06,   0.00, 0.00, 90.00);
	LSPDMONf(2267, 1541.96, -1669.59, 1105.90,   0.00, 0.00, 90.00);
	LSPDMONf(2267, 1578.48, -1688.25, 1108.17,   4.94, 0.00, 180.00);
	LSPDMONf(2267, 1564.02, -1688.88, 1108.13,   0.00, 0.00, 180.00);
	LSPDMONf(2267, 1564.02, -1688.88, 1108.10,   0.00, 0.00, 180.00);

	//PC mons back
	LSPDMONb(2265, 1585.97, -1673.33, 1106.41,   14.82, 90.00, -16.00);
	LSPDMONb(2265, 1530.64, -1669.35, 1104.92,   10.93, 90.00, 90.00);
	LSPDMONb(2265, 1558.81, -1683.69, 1106.32,   12.24, 90.00, 0.00);
	LSPDMONb(2265, 1561.85, -1681.82, 1106.27,   12.24, 90.00, -60.50);
	LSPDMONb(2265, 1567.28, -1683.90, 1106.27,   12.24, 90.00, 33.90);
	LSPDMONb(2265, 1576.45, -1685.11, 1106.44,   13.28, 90.00, 194.21);
	LSPDMONb(2265, 1583.58, -1673.36, 1106.41,   14.82, 90.00, 29.15);

	//TV lights
	LSPDMONlight(18644, 1541.92, -1670.17, 1105.47,   0.00, 90.00, 0.00);
	LSPDMONlight(18644, 1528.14, -1670.72, 1105.64,   90.00, 0.00, 90.00);
	LSPDMONlight(18644, 1579.15, -1688.32, 1107.74,   0.00, 94.00, 90.00);
	LSPDMONlight(18644, 1564.60, -1688.91, 1107.68,   0.00, 90.00, 90.00);

	//Keyboards
	LSPDMONkeys(1547, 1583.11, -1672.65, 1106.18,   0.00, 0.00, 174.66);
	LSPDMONkeys(1547, 1586.92, -1672.60, 1106.18,   0.00, 0.00, 185.00);
	LSPDMONkeys(1547, 1576.92, -1685.81, 1106.11,   0.00, 0.00, 0.66);
	LSPDMONkeys(1547, 1535.57, -1668.26, 1104.57,   0.00, 0.00, 0.00);
	LSPDMONkeys(1547, 1533.56, -1668.18, 1104.57,   0.00, 0.00, 0.00);
	LSPDMONkeys(1547, 1531.54, -1668.28, 1104.57,   0.00, 0.00, 3.71);
	LSPDMONkeys(1547, 1535.58, -1672.26, 1104.57,   0.00, 0.00, 177.94);
	LSPDMONkeys(1547, 1533.72, -1672.26, 1104.57,   0.00, 0.00, 181.03);
	LSPDMONkeys(1547, 1531.66, -1672.26, 1104.57,   0.00, 0.00, 185.36);
	LSPDMONkeys(1547, 1529.88, -1668.87, 1104.58,   0.00, 0.00, 91.00);

	//Lights
	CreateDynamicObject(14438, 1579.06, -1672.37, 1111.07,   0.00, 0.00, 0.00);
	CreateDynamicObject(14438, 1583.34, -1681.55, 1111.07,   0.00, 0.00, 0.00);
	CreateDynamicObject(14438, 1561.90, -1689.56, 1111.07,   0.00, 0.00, 0.00);
	CreateDynamicObject(14438, 1535.34, -1688.65, 1109.75,   0.00, 0.00, 0.00);
	CreateDynamicObject(14438, 1544.15, -1676.80, 1109.75,   0.00, 0.00, 0.00);
	CreateDynamicObject(14438, 1543.83, -1672.33, 1109.20,   0.00, 0.00, 0.00);
	CreateDynamicObject(14438, 1523.66, -1666.22, 1109.20,   0.00, 0.00, 0.00);
	CreateDynamicObject(14438, 1523.66, -1668.46, 1109.20,   0.00, 0.00, 0.00);
	CreateDynamicObject(14438, 1581.01, -1692.11, 1110.68,   0.00, 0.00, 90.00);
	CreateDynamicObject(14438, 1581.48, -1678.10, 1099.97,   0.00, 0.00, 0.00);
	CreateDynamicObject(14438, 1575.40, -1684.94, 1099.47,   0.00, 0.00, 0.00);


	CreateDynamicObject(2611, 1580.13, -1676.76, 1106.78,   0.00, 0.00, 180.00);
	CreateDynamicObject(2612, 1583.01, -1676.76, 1106.78,   0.00, 0.00, 180.00);
	CreateDynamicObject(14852, 1560.64, -1667.08, 1103.65,   0.00, 0.00, 0.00);
	CreateDynamicObject(14848, 1562.35, -1680.63, 1099.57,   0.00, 0.00, 0.00);
	CreateDynamicObject(14892, 1557.15, -1688.60, 1104.47,   0.00, 0.00, 0.00);
	CreateDynamicObject(19325, 1584.82, -1673.78, 1109.30,   0.00, 0.00, 90.00);
	CreateDynamicObject(19325, 1591.46, -1673.78, 1109.30,   0.00, 0.00, 90.00);
	CreateDynamicObject(19089, 1589.13, -1673.79, 1107.25,   0.00, 90.00, 0.00);
	CreateDynamicObject(19089, 1596.51, -1673.79, 1107.25,   0.00, 90.00, 0.00);
	CreateDynamicObject(2601, 1584.79, -1672.46, 1106.26,   0.00, 0.00, 0.00);
	CreateDynamicObject(2186, 1588.83, -1668.53, 1105.17,   0.00, 0.00, 270.00);
	CreateDynamicObject(2610, 1581.69, -1672.73, 1106.00,   0.00, 0.00, 174.33);
	CreateDynamicObject(2610, 1589.01, -1672.81, 1106.00,   0.00, 0.00, 178.69);
	CreateDynamicObject(2164, 1582.40, -1667.51, 1105.17,   0.00, 0.00, 0.00);
	CreateDynamicObject(2161, 1584.19, -1667.50, 1105.17,   0.00, 0.00, 0.00);
	CreateDynamicObject(2610, 1581.12, -1672.70, 1106.00,   0.00, 0.00, 178.69);
	CreateDynamicObject(626, 1578.77, -1668.03, 1107.20,   0.00, 0.00, 0.00);
	CreateDynamicObject(2205, 1576.20, -1685.61, 1105.17,   0.00, 0.00, 0.00);
	CreateDynamicObject(1714, 1576.98, -1687.37, 1105.17,   0.00, 0.00, 194.40);
	CreateDynamicObject(14455, 1581.80, -1690.45, 1106.60,   0.00, 0.00, 90.00);
	CreateDynamicObject(2161, 1578.61, -1688.78, 1105.18,   0.00, 0.00, 180.00);
	CreateDynamicObject(2140, 1579.77, -1688.49, 1105.38,   0.00, 0.00, 180.00);
	CreateDynamicObject(2140, 1580.75, -1688.49, 1105.38,   0.00, 0.00, 180.00);
	CreateDynamicObject(2140, 1577.18, -1688.49, 1105.38,   0.00, 0.00, 180.00);
	CreateDynamicObject(2140, 1576.20, -1688.49, 1105.38,   0.00, 0.00, 180.00);
	CreateDynamicObject(2140, 1575.22, -1688.49, 1105.38,   0.00, 0.00, 180.00);
	CreateDynamicObject(2123, 1576.21, -1684.21, 1105.88,   0.00, 0.00, 111.24);
	CreateDynamicObject(2123, 1577.87, -1684.06, 1105.88,   0.00, 0.00, 72.36);
	CreateDynamicObject(2894, 1577.64, -1685.73, 1106.11,   0.00, 0.00, -13.32);
	CreateDynamicObject(2010, 1581.65, -1685.11, 1105.18,   0.00, 0.00, 0.00);
	CreateDynamicObject(2163, 1574.25, -1681.49, 1105.18,   0.00, 0.00, 90.00);
	CreateDynamicObject(19100, 1574.55, -1681.24, 1106.17,   0.00, -90.00, -35.87);
	CreateDynamicObject(19325, 1574.16, -1685.49, 1106.92,   0.00, 0.00, 0.00);
	CreateDynamicObject(2257, 1578.29, -1680.13, 1107.24,   0.00, 0.00, 0.00);
	CreateDynamicObject(2261, 1581.45, -1683.18, 1106.67,   0.00, 0.00, -90.00);
	CreateDynamicObject(2737, 1578.65, -1672.22, 1106.68,   0.00, 0.00, -219.24);
	CreateDynamicObject(1808, 1580.18, -1672.80, 1105.17,   0.00, 0.00, 170.64);
	CreateDynamicObject(1722, 1567.97, -1683.71, 1105.18,   0.00, 0.00, -3.50);
	CreateDynamicObject(1715, 1563.44, -1680.11, 1105.18,   0.00, 0.00, -25.00);
	CreateDynamicObject(2066, 1568.16, -1680.19, 1105.18,   0.00, 0.00, -6.50);
	CreateDynamicObject(2164, 1569.50, -1680.27, 1105.18,   0.00, 0.00, -90.00);
	CreateDynamicObject(630, 1566.08, -1680.19, 1106.19,   0.00, 0.00, 47.40);
	CreateDynamicObject(2169, 1563.29, -1681.77, 1105.17,   0.00, 0.00, 180.00);
	CreateDynamicObject(2171, 1562.18, -1680.82, 1105.18,   0.00, 0.00, 90.00);
	CreateDynamicObject(2169, 1565.02, -1680.30, 1105.17,   0.00, 0.00, -90.00);
	CreateDynamicObject(1715, 1566.63, -1681.78, 1105.18,   0.00, 0.00, 30.50);
	CreateDynamicObject(1715, 1564.52, -1680.80, 1105.18,   0.00, 0.00, 91.00);
	CreateDynamicObject(1722, 1565.28, -1682.28, 1105.18,   0.00, 0.00, 82.00);
	CreateDynamicObject(1722, 1561.83, -1683.59, 1105.18,   0.00, 0.00, -87.00);
	CreateDynamicObject(630, 1562.83, -1688.51, 1106.19,   0.00, 0.00, 47.40);
	CreateDynamicObject(2201, 1562.35, -1680.34, 1105.97,   0.00, 0.00, 0.00);
	CreateDynamicObject(2162, 1558.21, -1679.83, 1105.17,   0.00, 0.00, 0.00);
	CreateDynamicObject(2169, 1559.24, -1683.23, 1105.17,   0.00, 0.00, 180.00);
	CreateDynamicObject(1715, 1558.78, -1681.46, 1105.18,   0.00, 0.00, 4.78);
	CreateDynamicObject(630, 1561.18, -1680.16, 1106.19,   0.00, 0.00, 47.40);
	CreateDynamicObject(2601, 1557.90, -1683.13, 1106.03,   0.00, 0.00, 0.00);
	CreateDynamicObject(2894, 1558.58, -1683.22, 1105.96,   0.00, 0.00, 164.73);
	CreateDynamicObject(2468, 1561.45, -1682.92, 1105.17,   0.00, 0.00, -90.00);
	CreateDynamicObject(2610, 1561.17, -1682.09, 1105.98,   0.00, 0.00, -90.00);
	CreateDynamicObject(2610, 1561.17, -1681.57, 1105.98,   0.00, 0.00, -85.97);
	CreateDynamicObject(2716, 1557.73, -1682.13, 1106.95,   0.00, 2.48, 90.00);
	CreateDynamicObject(2163, 1556.21, -1679.80, 1106.65,   0.00, 0.00, 0.00);
	CreateDynamicObject(2139, 1556.66, -1680.33, 1105.15,   0.00, 0.00, 0.00);
	CreateDynamicObject(2140, 1554.98, -1680.24, 1105.07,   0.00, 0.00, 0.00);
	CreateDynamicObject(2139, 1554.01, -1680.33, 1105.18,   0.00, 0.00, 0.00);
	CreateDynamicObject(2139, 1554.04, -1680.94, 1105.17,   0.00, 0.00, 90.00);
	CreateDynamicObject(2149, 1554.03, -1680.14, 1106.38,   0.00, 0.00, 9.88);
	CreateDynamicObject(2154, 1555.98, -1679.96, 1105.14,   0.00, 0.00, 0.00);
	CreateDynamicObject(2139, 1557.07, -1680.32, 1105.14,   0.00, 0.00, 0.00);
	CreateDynamicObject(2687, 1555.93, -1680.28, 1107.06,   0.00, 0.00, 0.00);
	CreateDynamicObject(2863, 1556.62, -1680.13, 1106.21,   0.00, 0.00, 0.00);
	CreateDynamicObject(2637, 1553.92, -1682.80, 1105.58,   0.00, 0.00, 90.00);
	CreateDynamicObject(2121, 1554.32, -1681.77, 1105.79,   0.00, 0.00, 0.00);
	CreateDynamicObject(2121, 1554.05, -1684.22, 1105.79,   0.00, 0.00, 98.00);
	CreateDynamicObject(2310, 1554.53, -1682.53, 1105.79,   0.00, 0.00, 11.00);
	CreateDynamicObject(2647, 1554.10, -1682.25, 1106.14,   0.00, 0.00, 0.00);
	CreateDynamicObject(2342, 1553.99, -1683.28, 1106.11,   0.00, 0.00, -10.20);
	CreateDynamicObject(2611, 1559.27, -1688.86, 1107.20,   0.00, 0.00, 180.00);
	CreateDynamicObject(2737, 1557.24, -1688.86, 1106.97,   0.00, 0.00, 180.00);
	CreateDynamicObject(2180, 1544.31, -1674.87, 1103.78,   0.00, 0.00, 90.00);
	CreateDynamicObject(1722, 1546.19, -1673.79, 1103.78,   0.00, 0.00, 131.00);
	CreateDynamicObject(1722, 1542.07, -1673.86, 1103.78,   0.00, 0.00, -98.00);
	CreateDynamicObject(2196, 1544.48, -1674.13, 1104.58,   0.00, 0.00, 258.00);
	CreateDynamicObject(1886, 1545.78, -1675.87, 1107.51,   23.00, 0.00, -113.00);
	CreateDynamicObject(2310, 1547.34, -1668.45, 1104.26,   0.00, 0.00, 0.00);
	CreateDynamicObject(2310, 1546.83, -1669.69, 1104.26,   0.00, 0.00, -3.34);
	CreateDynamicObject(2310, 1547.34, -1671.01, 1104.26,   0.00, 0.00, -0.67);
	CreateDynamicObject(2310, 1547.34, -1672.34, 1104.26,   0.00, 0.00, -16.37);
	CreateDynamicObject(2310, 1545.67, -1668.45, 1104.26,   0.00, 0.00, 3.34);
	CreateDynamicObject(2310, 1545.74, -1670.59, 1104.26,   0.00, 0.00, -16.00);
	CreateDynamicObject(2310, 1545.67, -1672.12, 1104.26,   0.00, 0.00, -18.04);
	CreateDynamicObject(2310, 1544.57, -1672.79, 1104.26,   0.00, 0.00, -74.15);
	CreateDynamicObject(2344, 1543.25, -1669.33, 1104.92,   -22.74, 0.00, 96.23);
	CreateDynamicObject(19171, 1543.08, -1673.36, 1105.91,   90.00, 90.00, 90.00);
	CreateDynamicObject(1737, 1531.12, -1672.51, 1103.77,   0.00, 0.00, 0.00);
	CreateDynamicObject(1737, 1533.14, -1672.51, 1103.77,   0.00, 0.00, 0.00);
	CreateDynamicObject(1737, 1535.15, -1672.51, 1103.77,   0.00, 0.00, 0.00);
	CreateDynamicObject(1737, 1535.08, -1668.07, 1103.77,   0.00, 0.00, 0.00);
	CreateDynamicObject(1737, 1533.06, -1668.07, 1103.77,   0.00, 0.00, 0.00);
	CreateDynamicObject(1737, 1531.04, -1668.07, 1103.77,   0.00, 0.00, 0.00);
	CreateDynamicObject(1806, 1535.60, -1669.42, 1103.78,   0.00, 0.00, 3.46);
	CreateDynamicObject(1806, 1533.57, -1669.54, 1103.78,   0.00, 0.00, -2.69);
	CreateDynamicObject(1806, 1531.44, -1669.51, 1103.78,   0.00, 0.00, 4.24);
	CreateDynamicObject(1806, 1533.69, -1670.97, 1103.78,   0.00, 0.00, 178.85);
	CreateDynamicObject(1806, 1531.38, -1670.97, 1103.78,   0.00, 0.00, 189.24);
	CreateDynamicObject(1806, 1535.62, -1671.18, 1103.78,   0.00, 0.00, 176.54);
	CreateDynamicObject(2173, 1529.97, -1668.12, 1103.78,   0.00, 0.00, -90.00);
	CreateDynamicObject(1671, 1528.52, -1668.82, 1104.22,   0.00, 0.00, 81.12);
	CreateDynamicObject(2894, 1529.99, -1668.10, 1104.58,   0.00, 0.00, -77.00);
	CreateDynamicObject(2167, 1529.85, -1673.05, 1103.77,   0.00, 0.00, 180.00);
	CreateDynamicObject(630, 1528.82, -1672.60, 1104.78,   0.00, 0.00, 0.00);
	CreateDynamicObject(1808, 1538.93, -1673.26, 1103.78,   0.00, 0.00, 84.97);
	CreateDynamicObject(14782, 1534.75, -1673.73, 1104.78,   0.00, 0.00, 0.00);
	CreateDynamicObject(14842, 1528.99, -1677.02, 1105.56,   0.00, 0.00, 90.00);
	CreateDynamicObject(2372, 1527.33, -1675.47, 1104.97,   0.00, 90.00, 0.00);
	CreateDynamicObject(2716, 1531.16, -1676.50, 1106.19,   0.00, 0.00, 90.00);
	CreateDynamicObject(19327, 1535.39, -1677.90, 1106.50,   0.00, 0.00, 180.00);
	CreateDynamicObject(1721, 1541.41, -1668.35, 1103.78,   0.00, 0.00, 90.00);
	CreateDynamicObject(1721, 1541.41, -1668.95, 1103.78,   0.00, 0.00, 90.00);
	CreateDynamicObject(1721, 1541.41, -1669.56, 1103.78,   0.00, 0.00, 90.00);
	CreateDynamicObject(630, 1541.27, -1670.26, 1104.81,   0.00, 0.00, 47.00);
	CreateDynamicObject(1721, 1541.55, -1674.80, 1103.78,   0.00, 0.00, 90.00);
	CreateDynamicObject(1721, 1541.55, -1675.41, 1103.78,   0.00, 0.00, 90.00);
	CreateDynamicObject(1721, 1541.55, -1676.02, 1103.78,   0.00, 0.00, 90.00);
	CreateDynamicObject(1721, 1541.55, -1676.64, 1103.78,   0.00, 0.00, 90.00);
	CreateDynamicObject(1721, 1574.46, -1671.42, 1105.18,   0.00, 0.00, -90.00);
	CreateDynamicObject(1721, 1574.46, -1672.03, 1105.18,   0.00, 0.00, -90.00);
	CreateDynamicObject(1721, 1574.46, -1672.64, 1105.18,   0.00, 0.00, -90.00);
	CreateDynamicObject(1721, 1574.46, -1670.81, 1105.18,   0.00, 0.00, -90.00);
	CreateDynamicObject(1535, 1546.75, -1683.45, 1103.78,   0.00, 0.00, 90.00);
	CreateDynamicObject(1721, 1579.18, -1679.63, 1105.17,   0.00, 0.00, 0.00);
	CreateDynamicObject(1721, 1579.76, -1679.63, 1105.17,   0.00, 0.00, 0.00);
	CreateDynamicObject(1721, 1580.35, -1679.63, 1105.17,   0.00, 0.00, 0.00);
	CreateDynamicObject(1721, 1580.93, -1679.63, 1105.17,   0.00, 0.00, 0.00);
	CreateDynamicObject(19440, 1533.22, -1682.82, 1102.08,   0.00, 0.00, 0.00);
	CreateDynamicObject(1533, 1533.10, -1681.77, 1103.78,   0.00, 0.00, -90.00);
	CreateDynamicObject(19302, 1578.71, -1673.05, 1095.23,   0.00, 0.00, 0.00);
	CreateDynamicObject(19302, 1582.60, -1673.04, 1095.23,   0.00, 0.00, 0.00);
	CreateDynamicObject(19302, 1586.59, -1673.06, 1095.23,   0.00, 0.00, 0.00);
	CreateDynamicObject(19302, 1590.52, -1673.06, 1095.23,   0.00, 0.00, 0.00);
	CreateDynamicObject(1771, 1590.37, -1668.82, 1094.34,   0.00, 0.00, 0.00);
	CreateDynamicObject(2602, 1592.99, -1668.58, 1094.46,   0.00, 0.00, 270.00);
	CreateDynamicObject(2602, 1586.07, -1668.47, 1094.46,   0.00, 0.00, 90.00);
	CreateDynamicObject(2602, 1582.10, -1668.36, 1094.46,   0.00, 0.00, 90.00);
	CreateDynamicObject(2602, 1580.86, -1667.87, 1094.46,   0.00, 0.00, 0.00);
	CreateDynamicObject(1738, 1580.23, -1676.63, 1094.50,   0.00, 0.00, 0.00);
	CreateDynamicObject(17969, 1577.58, -1673.83, 1094.86,   0.00, 0.00, 0.00);
	CreateDynamicObject(14401, 1526.24, -1663.19, 1104.08,   0.00, 0.00, 180.00);
	CreateDynamicObject(2819, 1532.99, -1676.12, 1104.40,   -1.00, 0.00, -10.00);
	CreateDynamicObject(2161, 1571.11, -1688.89, 1105.18,   0.00, 0.00, 180.00);
	CreateDynamicObject(2162, 1569.75, -1688.90, 1105.18,   0.00, 0.00, 180.00);
	CreateDynamicObject(1722, 1561.37, -1683.79, 1105.18,   0.00, 0.00, 69.00);
	CreateDynamicObject(1722, 1566.28, -1688.78, 1105.18,   0.00, 0.00, 5.00);
	CreateDynamicObject(1722, 1565.61, -1688.77, 1105.18,   0.00, 0.00, 0.00);
	CreateDynamicObject(1722, 1564.98, -1688.80, 1105.18,   0.00, 0.00, 0.00);
	CreateDynamicObject(1722, 1564.32, -1688.77, 1105.18,   0.00, 0.00, -7.00);
	CreateDynamicObject(1722, 1563.70, -1688.77, 1105.18,   0.00, 0.00, 0.00);
	CreateDynamicObject(2172, 1585.83, -1687.53, 1105.12,   0.00, 0.00, 270.00);
	CreateDynamicObject(2182, 1583.79, -1688.37, 1105.17,   0.00, 0.00, 90.00);
	CreateDynamicObject(2191, 1582.79, -1684.97, 1105.10,   0.00, 0.00, 90.00);
	CreateDynamicObject(2193, 1584.69, -1685.54, 1105.10,   0.00, 0.00, 270.00);
	CreateDynamicObject(2198, 1585.67, -1684.52, 1105.15,   0.00, 0.00, 180.00);
	CreateDynamicObject(1806, 1585.31, -1683.04, 1105.17,   0.00, 0.00, 135.00);
	CreateDynamicObject(1806, 1582.58, -1686.47, 1105.17,   0.00, 0.00, -62.00);
	CreateDynamicObject(1806, 1584.57, -1686.04, 1105.17,   0.00, 0.00, -135.00);
	CreateDynamicObject(2613, 1584.23, -1687.55, 1105.16,   0.00, 0.00, 0.00);
	CreateDynamicObject(2139, 1557.03, -1680.96, 1105.16,   0.00, 0.00, 270.00);
	CreateDynamicObject(2637, 1553.01, -1682.79, 1105.59,   0.00, 0.00, 90.00);
	CreateDynamicObject(1713, 1556.99, -1681.96, 1105.15,   0.00, 0.00, 270.00);
	CreateDynamicObject(2187, 1558.33, -1683.31, 1105.00,   0.00, 0.00, 90.00);
	CreateDynamicObject(2187, 1566.27, -1683.36, 1105.13,   0.00, 0.00, 90.00);
	CreateDynamicObject(2187, 1562.13, -1681.81, 1105.00,   0.00, 0.00, 90.00);
	CreateDynamicObject(2894, 1587.50, -1673.65, 1106.18,   0.00, 0.00, 0.00);
	CreateDynamicObject(2162, 1585.42, -1673.05, 1105.22,   0.00, 0.00, 180.00);
	CreateDynamicObject(2163, 1585.42, -1673.05, 1105.22,   0.00, 0.00, 180.00);
	CreateDynamicObject(2163, 1585.42, -1673.05, 1105.18,   0.00, 0.00, 180.00);
	CreateDynamicObject(2163, 1585.41, -1673.06, 1105.16,   0.00, 0.00, 180.00);
	CreateDynamicObject(1722, 1561.84, -1682.81, 1105.18,   0.00, 0.00, -90.00);
	CreateDynamicObject(1722, 1565.32, -1683.32, 1105.18,   0.00, 0.00, 98.00);
	CreateDynamicObject(2173, 1567.22, -1683.32, 1105.17,   0.00, 0.00, 180.00);
	CreateDynamicObject(2187, 1564.96, -1682.29, 1105.00,   0.00, 0.00, 270.00);
	CreateDynamicObject(2191, 1566.35, -1681.46, 1105.06,   0.00, 0.00, 0.00);
	CreateDynamicObject(2468, 1566.78, -1680.44, 1105.17,   0.00, 0.00, -11.00);
	CreateDynamicObject(19466, 1543.09, -1676.50, 1105.55,   0.00, 0.00, 90.00);
	CreateDynamicObject(19355, 1541.87, -1675.00, 1108.99,   0.00, 0.00, 0.00);
	CreateDynamicObject(1722, 1542.61, -1675.93, 1103.78,   0.00, 0.00, 90.00);
	CreateDynamicObject(19355, 1543.40, -1673.49, 1108.99,   0.00, 0.00, 90.00);
	CreateDynamicObject(19355, 1544.92, -1673.48, 1108.99,   0.00, 0.00, 90.00);
	CreateDynamicObject(19355, 1546.52, -1674.98, 1108.99,   0.00, 0.00, 0.00);
	CreateDynamicObject(2606, 1542.90, -1676.65, 1106.62,   0.00, 0.00, 0.00);
	CreateDynamicObject(1806, 1542.14, -1677.58, 1103.78,   0.00, 0.00, -91.00);
	CreateDynamicObject(2190, 1542.69, -1676.56, 1104.80,   0.00, 0.00, 0.00);
	CreateDynamicObject(2385, 1542.55, -1676.57, 1103.41,   0.00, 0.00, 0.00);
	CreateDynamicObject(1535, 1546.50, -1676.59, 1103.78,   0.00, 0.00, 93.00);
	CreateDynamicObject(14401, 1526.22, -1661.54, 1104.08,   0.00, 0.00, 180.00);
	CreateDynamicObject(2167, 1531.12, -1676.28, 1103.77,   0.00, 0.00, 90.00);
	CreateDynamicObject(2167, 1531.12, -1677.22, 1103.77,   0.00, 0.00, 90.00);
	CreateDynamicObject(1428, 1583.90, -1669.48, 1094.39,   15.00, 0.00, 270.00);
	CreateDynamicObject(630, 1574.81, -1673.59, 1106.19,   0.00, 0.00, -4.00);
	CreateDynamicObject(630, 1568.36, -1676.27, 1106.19,   0.00, 0.00, -25.00);
	CreateDynamicObject(2315, 1572.94, -1669.72, 1105.18,   0.00, 0.00, 0.00);
	CreateDynamicObject(2315, 1572.47, -1669.73, 1105.17,   0.00, 0.00, 0.00);
	CreateDynamicObject(2855, 1574.53, -1669.73, 1105.67,   0.00, 0.00, 4.00);
	CreateDynamicObject(14633, 1527.38, -1661.28, 1105.29,   0.00, 0.00, 90.00);
	CreateDynamicObject(1999, 1551.08, -1676.19, 1103.77,   0.00, 0.00, 0.00);
	CreateDynamicObject(14633, 1565.21, -1645.84, 1105.29,   0.00, 0.00, 0.00);
	CreateDynamicObject(14598, 1542.89, -1657.86, 1107.73,   0.00, 0.00, 90.00);
	CreateDynamicObject(2009, 1549.10, -1674.26, 1103.77,   0.00, 0.00, 180.00);
	CreateDynamicObject(1806, 1552.30, -1677.32, 1103.77,   0.00, 0.00, 55.00);
	CreateDynamicObject(1806, 1548.20, -1674.68, 1103.77,   0.00, 0.00, 193.00);
	CreateDynamicObject(1220, 1549.02, -1675.30, 1104.88,   0.00, 0.00, 10.00);
	CreateDynamicObject(2687, 1553.45, -1675.58, 1105.97,   0.00, 0.00, 270.00);
	CreateDynamicObject(2001, 1553.03, -1676.33, 1103.78,   0.00, 0.00, 0.00);
	CreateDynamicObject(2515, 1553.20, -1674.84, 1104.94,   0.00, 0.00, 270.00);
	CreateDynamicObject(2741, 1553.39, -1674.88, 1105.48,   0.00, 0.00, 270.00);
	CreateDynamicObject(2685, 1553.45, -1674.40, 1105.58,   0.00, 0.00, 270.00);
	CreateDynamicObject(2161, 1547.38, -1673.58, 1103.78,   0.00, 0.00, 0.00);
	CreateDynamicObject(630, 1553.05, -1688.54, 1106.19,   0.00, 0.00, 47.40);
	CreateDynamicObject(1721, 1551.70, -1675.33, 1103.78,   0.00, 0.00, 90.00);
	CreateDynamicObject(2372, 1534.74, -1676.44, 1103.77,   0.00, 0.00, 90.00);
	CreateDynamicObject(2394, 1534.16, -1676.66, 1104.42,   0.00, 0.00, 0.00);
	CreateDynamicObject(2385, 1542.55, -1676.56, 1102.41,   0.00, 0.00, 0.00);
	CreateDynamicObject(14458, 1587.65, -1673.36, 1106.11,   0.00, 0.00, 135.00);
	CreateDynamicObject(14458, 1582.96, -1673.77, 1106.11,   0.00, 0.00, 98.00);
	CreateDynamicObject(1721, 1578.94, -1680.31, 1105.17,   0.00, 0.00, 180.00);
	CreateDynamicObject(1721, 1579.70, -1680.32, 1105.17,   0.00, 0.00, 183.00);
	CreateDynamicObject(1808, 1580.85, -1680.32, 1105.18,   0.00, 0.00, 0.00);
	CreateDynamicObject(931, 1579.17, -1684.06, 1095.01,   0.00, 0.00, 90.00);
	CreateDynamicObject(1421, 1580.40, -1683.12, 1094.68,   0.00, 0.00, 90.00);
	CreateDynamicObject(2608, 1587.39, -1684.12, 1094.64,   0.00, 0.00, 90.00);
	CreateDynamicObject(2007, 1579.89, -1682.03, 1093.97,   0.00, 0.00, 90.00);
	CreateDynamicObject(2007, 1579.89, -1681.03, 1093.97,   0.00, 0.00, 90.00);
	CreateDynamicObject(2000, 1579.94, -1680.15, 1093.97,   0.00, 0.00, 100.00);
	CreateDynamicObject(2007, 1582.00, -1683.73, 1093.97,   0.00, 0.00, 270.00);
	CreateDynamicObject(2007, 1582.00, -1682.72, 1093.97,   0.00, 0.00, 270.00);
	CreateDynamicObject(2007, 1581.99, -1681.72, 1093.97,   0.00, 0.00, 270.00);
	CreateDynamicObject(2007, 1583.03, -1681.71, 1093.97,   0.00, 0.00, 93.00);
	CreateDynamicObject(2007, 1583.08, -1682.88, 1093.97,   0.00, 0.00, 90.00);
	CreateDynamicObject(2197, 1583.60, -1684.64, 1093.97,   0.00, 0.00, 90.00);
	CreateDynamicObject(2000, 1583.13, -1683.83, 1093.97,   0.00, 0.00, 78.00);
	CreateDynamicObject(2197, 1580.47, -1678.49, 1093.97,   0.00, 0.00, 90.00);
	CreateDynamicObject(1417, 1581.26, -1684.93, 1094.21,   0.00, 0.00, 180.00);
	CreateDynamicObject(16378, 1584.59, -1678.60, 1094.71,   0.00, 0.00, 0.00);
	CreateDynamicObject(2612, 1586.83, -1678.58, 1095.96,   0.00, 0.00, 270.00);
	CreateDynamicObject(2616, 1579.44, -1680.14, 1096.00,   0.00, 0.00, 90.00);
	CreateDynamicObject(2163, 1585.72, -1685.24, 1095.65,   0.00, 0.00, 180.00);
	CreateDynamicObject(2165, 1585.64, -1684.72, 1093.97,   0.00, 0.00, 176.00);
	CreateDynamicObject(1537, 1593.35, -1682.71, 1093.97,   0.00, 0.00, 270.00);
	CreateDynamicObject(2606, 1584.05, -1677.27, 1096.90,   0.00, 0.00, 0.00);
	CreateDynamicObject(2606, 1582.06, -1677.27, 1096.90,   0.00, 0.00, 0.00);
	CreateDynamicObject(1771, 1590.36, -1668.81, 1095.34,   0.00, 0.00, 0.00);
	CreateDynamicObject(1771, 1588.51, -1668.87, 1094.34,   0.00, 0.00, 0.00);
	CreateDynamicObject(1771, 1584.51, -1669.14, 1094.34,   0.00, 0.00, 0.00);
	CreateDynamicObject(1771, 1584.52, -1669.13, 1095.34,   0.00, 0.00, 0.00);
	CreateDynamicObject(1428, 1591.13, -1669.35, 1094.39,   17.00, 0.00, 270.00);
	CreateDynamicObject(1771, 1578.26, -1668.84, 1094.34,   0.00, 0.00, 0.00);
	CreateDynamicObject(1771, 1578.25, -1668.83, 1095.34,   0.00, 0.00, 0.00);
	CreateDynamicObject(1428, 1578.97, -1669.37, 1094.39,   17.00, 0.00, 270.00);
	CreateDynamicObject(13599, 1584.22, -1684.78, 1105.31,   0.00, 0.00, 0.00);
	CreateDynamicObject(19304, 1587.49, -1673.04, 1097.12,   0.00, 0.00, 0.00);
	CreateDynamicObject(19304, 1583.47, -1673.03, 1097.12,   0.00, 0.00, 0.00);
	CreateDynamicObject(19304, 1579.62, -1673.05, 1097.12,   0.00, 0.00, 0.00);
	CreateDynamicObject(19304, 1591.41, -1673.03, 1097.12,   0.00, 0.00, 0.00);



	//Upstairs: gym/firing range

    CreateDynamicObject(2886, 1086.25, -1712.67, 1136.76,   0.00, 0.00, 90.00);
	CreateObject(18036, 1079.90, -1707.92, 1137.45,   0.00, 0.00, 0.00); //Floor
	CreateDynamicObject(18051, 1082.33, -1705.71, 1136.95,   0.00, 0.00, 0.00);
	CreateDynamicObject(8636, 1019.28, -1776.25, 1134.78,   0.00, 0.00, 90.00);
	CreateDynamicObject(8636, 1017.37, -1776.38, 1134.78,   0.00, 0.00, 90.00);
	CreateDynamicObject(8636, 1015.69, -1776.39, 1134.78,   0.00, 0.00, 90.00);
	CreateDynamicObject(8636, 1014.11, -1776.27, 1134.78,   0.00, 0.00, 90.00);
	CreateDynamicObject(8636, 1012.41, -1776.29, 1134.78,   0.00, 0.00, 90.00);
	CreateDynamicObject(8636, 1010.31, -1776.30, 1134.78,   0.00, 0.00, 90.00);
	CreateDynamicObject(18050, 1086.50, -1706.18, 1138.25,   0.00, 0.00, 0.00);
	CreateObject(14488, 1102.36, -1706.43, 1137.875,   0.00, 0.00, 270.00); //Floor
	CreateDynamicObject(14486, 1101.89, -1706.10, 1136.94,   0.00, 0.00, 0.00);
	CreateDynamicObject(8636, 1031.62, -1770.47, 1137.18,   0.00, 0.00, 90.00);
	CreateDynamicObject(8636, 1031.90, -1770.39, 1137.18,   0.00, 0.00, 90.00);
	CreateDynamicObject(8636, 1031.90, -1770.39, 1140.13,   0.00, 0.00, 90.00);
	CreateDynamicObject(2616, 1091.95, -1707.82, 1137.30,   0.00, 0.00, 90.00);
	CreateDynamicObject(2616, 1091.94, -1703.12, 1137.30,   0.00, 0.00, 90.00);
	CreateDynamicObject(2615, 1091.28, -1708.35, 1137.18,   0.00, 0.00, 270.00);
	CreateDynamicObject(2616, 1091.29, -1708.65, 1137.03,   0.00, 0.00, 270.00);
	CreateDynamicObject(2612, 1091.29, -1705.90, 1137.13,   0.00, 0.00, 270.00);
	CreateDynamicObject(2627, 1096.75, -1697.85, 1135.44,   0.00, 0.00, 0.00);
	CreateDynamicObject(2627, 1093.94, -1698.03, 1135.44,   0.00, 0.00, 5.00);
	CreateDynamicObject(2627, 1099.06, -1698.00, 1135.44,   0.00, 0.00, -2.00);
	CreateDynamicObject(2628, 1096.77, -1702.93, 1135.44,   0.00, 0.00, 0.00);
	CreateDynamicObject(2628, 1095.19, -1702.96, 1135.44,   0.00, 0.00, -2.00);
	CreateDynamicObject(2629, 1102.87, -1698.70, 1135.44,   0.00, 0.00, 62.00);
	CreateDynamicObject(2629, 1105.47, -1697.85, 1135.44,   0.00, 0.00, -4.00);
	CreateDynamicObject(2631, 1096.90, -1700.19, 1135.44,   0.00, 0.00, 1.00);
	CreateDynamicObject(2632, 1101.09, -1700.21, 1135.44,   0.00, 0.00, 10.00);
	CreateDynamicObject(2630, 1111.26, -1700.21, 1135.45,   0.00, 0.00, 272.00);
	CreateDynamicObject(2630, 1109.74, -1698.34, 1135.45,   0.00, 0.00, 309.00);
	CreateDynamicObject(1985, 1109.47, -1713.34, 1138.38,   0.00, 0.00, 0.00);
	CreateDynamicObject(1985, 1106.28, -1713.87, 1138.38,   0.00, 0.00, 0.00);
	CreateDynamicObject(2915, 1092.24, -1706.55, 1136.05,   0.00, 0.00, 90.00);
	CreateDynamicObject(2915, 1092.23, -1707.52, 1136.05,   0.00, 0.00, 40.00);
	CreateDynamicObject(3065, 1108.74, -1707.22, 1135.57,   0.00, 0.00, 0.00);
	CreateDynamicObject(3496, 1113.23, -1706.64, 1135.45,   0.00, 0.00, 90.00);
	CreateDynamicObject(3496, 1101.45, -1706.66, 1135.45,   0.00, 0.00, 270.00);

	//CustObjectLSPDExterior(3976,1571.6015600,-1675.7500000,35.6797000,0.0000000,0.0000000,0.0000000); //
 	/*CustObjectLSPDEWindow(19379,1558.4709500,-1675.8220200,45.7540000,0.0000000,0.0000000,0.0000000); //
  	CustObjectLSPDEWindow(19379,1558.4709500,-1675.8220200,35.2500000,0.0000000,0.0000000,0.0000000); //
   	CustObjectLSPDEWindow(19379,1558.4709500,-1675.8220200,24.7510000,0.0000000,0.0000000,0.0000000); //
   	CustObjectLSPDEWindow(19379,1571.4309100,-1675.8220200,24.7510000,0.0000000,0.0000000,0.0000000); //
	CustObjectLSPDEWindow(19379,1571.4309100,-1675.8220200,35.2500000,0.0000000,0.0000000,0.0000000); //
	CustObjectLSPDEWindow(19379,1571.4309100,-1675.8220200,45.7540000,0.0000000,0.0000000,0.0000000); //
	CustObjectLSPDEBrickWall(19366,1543.1839600,-1643.9904800,14.7048000,0.0000000,0.0000000,0.0000000); //
	CustObjectLSPDEBrickWall(19366,1543.1839600,-1643.9904800,18.2128000,0.0000000,0.0000000,0.0000000); //
	CustObjectLSPDEBrickWall(19366,1543.1839600,-1643.9904800,21.7088000,0.0000000,0.0000000,0.0000000); //
	CustObjectLSPDEBrickWall(19366,1543.1839600,-1643.9904800,25.2048000,0.0000000,0.0000000,0.0000000); //
	CustObjectLSPDEBrickWall(19366,1543.1839600,-1707.4985400,14.7048000,0.0000000,0.0000000,0.0000000); //
	CustObjectLSPDEBrickWall(19366,1543.1839600,-1707.4985400,18.2128000,0.0000000,0.0000000,0.0000000); //
	CustObjectLSPDEBrickWall(19366,1543.1839600,-1707.4985400,21.7088000,0.0000000,0.0000000,0.0000000); //
	CustObjectLSPDEBrickWall(19366,1543.1839600,-1707.4985400,25.2048000,0.0000000,0.0000000,0.0000000); //
	CustObjectLSPDEBrickWall(19366,1578.8708500,-1713.7370600,15.7389000,0.0000000,0.0000000,90.0000000); //
	CustObjectLSPDEBrickWall(19366,1578.8708500,-1713.7351100,17.1229000,0.0000000,0.0000000,90.0000000); //
	CustObjectLSPDEBrickWall(19366,1589.9469000,-1713.7370600,15.7389000,0.0000000,0.0000000,90.0000000); //
	CustObjectLSPDEBrickWall(19366,1589.9469000,-1713.7391400,17.1229000,0.0000000,0.0000000,90.0000000); //
	CustObjectLSPDEBrickWall(19366,1602.4898700,-1713.7331500,15.7389000,0.0000000,0.0000000,90.0000000); //
 	CustObjectLSPDEBrickWall(19366,1602.4898700,-1713.7352300,17.1229000,0.0000000,0.0000000,90.0000000); //
 	CustObjectLSPDEPillar(18980,1589.7446300,-1713.9975600,18.3752000,0.0000000,90.0000000,0.0000000); //
	CustObjectLSPDEPillar(18980,1592.2515900,-1713.9995100,18.3732000,0.0000000,90.0000000,0.0000000); //
 	CustObjectLSPDEPillar(18980,1604.2595200,-1701.9959700,18.3752000,0.0000000,90.0000000,90.0000000); //
  	CustObjectLSPDEPillar(18980,1604.2595200,-1677.0119600,18.3752000,0.0000000,90.0000000,90.0000000); //
	CustObjectLSPDEPillar(18980,1604.2595200,-1652.0240500,18.3752000,0.0000000,90.0000000,90.0000000); //
 	CustObjectLSPDEPillar(18980,1604.2614700,-1649.4870600,18.3732000,0.0000000,90.0000000,90.0000000); //
	CustObjectLSPDEPillar(18980,1592.2559800,-1637.4827900,18.3752000,0.0000000,90.0000000,0.0000000); //
 	CustObjectLSPDEPillar(18980,1589.7500000,-1637.4847400,18.3732000,0.0000000,90.0000000,0.0000000); //
	CreateDynamicObject(3934,1548.7753900,-1707.1717500,27.3879000,0.0000000,0.0000000,0.0000000); //
	CreateDynamicObject(3934,1548.7753900,-1643.6328100,27.3879000,0.0000000,0.0000000,0.0000000); //
	//Los
	new LosText911 = CreateObject(19327, 1555.04846, -1674.63354, 23.37980,   0.00000, 0.00000, -90.00000);
	SetObjectMaterialText(LosText911, "Los", 0, OBJECT_MATERIAL_SIZE_256x128, "Tahoma", 50, 1, 0xFF072CBA, 0x00000000, OBJECT_MATERIAL_TEXT_ALIGN_CENTER);
	new SantosText911 = CreateObject(19327, 1555.04822, -1676.25159, 23.37980,   0.00000, 0.00000, -90.00000);
	SetObjectMaterialText(SantosText911, "Santos", 0, OBJECT_MATERIAL_SIZE_256x128, "Tahoma", 50, 1, 0xFF072CBA, 0x00000000, OBJECT_MATERIAL_TEXT_ALIGN_CENTER);
	new PoliceText991 = CreateObject(19327, 1555.04846, -1675.62048, 22.62780,   0.00000, 0.00000, -90.00000);
	SetObjectMaterialText(PoliceText991, "Police", 0, OBJECT_MATERIAL_SIZE_256x128, "Tahoma", 50, 1, 0xFF072CBA, 0x00000000, OBJECT_MATERIAL_TEXT_ALIGN_CENTER);
	new DepartmentText911 = CreateObject(19327, 1555.04846, -1675.62048, 21.78180,   0.00000, 0.00000, -90.00000);
	SetObjectMaterialText(DepartmentText911, "Department", 0, OBJECT_MATERIAL_SIZE_256x128, "Tahoma", 50, 1, 0xFF072CBA, 0x00000000, OBJECT_MATERIAL_TEXT_ALIGN_CENTER);
	*/
	//Integration room in addition
	SetDynamicObjectMaterial(CreateDynamicObject(19380, 318.33, 1761.52, 547.01,   0.00, 0.00, 0.00), 0, 18007, "int_cutbar3", "barbers_wall1", 0); // wall
	SetDynamicObjectMaterial(CreateDynamicObject(19378, 318.29, 1761.50, 541.80,   0.00, 0.00, 0.00), 0, 18007, "int_cutbar3", "barbers_wall2", 0); // wall
	SetDynamicObjectMaterial(CreateDynamicObject(19378, 318.29, 1761.50, 555.02,   0.00, 0.00, 0.00), 0, 18007, "int_cutbar3", "barbers_wall2", 0); // wall
	SetDynamicObjectMaterial(CreateDynamicObject(19378, 315.08, 1766.21, 555.02,   0.00, 0.00, 90.00), 0, 18007, "int_cutbar3", "barbers_wall2", 0); // wall
	SetDynamicObjectMaterial(CreateDynamicObject(19378, 317.81, 1766.21, 541.80,   0.00, 0.00, 90.00), 0, 18007, "int_cutbar3", "barbers_wall2", 0); // wall

	CreateDynamicObject(14572, 315.05, 1770.08, 548.57,   0.00, 0.00, 0.00);
	CreateDynamicObject(3089, 311.88, 1771.17, 547.38,   0.00, 0.00, -90.00);
	CreateDynamicObject(3089, 311.87, 1768.18, 547.38,   0.00, 0.00, -270.00);
	CreateDynamicObject(16500, 311.91, 1771.05, 551.18,   0.00, 90.00, 0.00);
	CreateDynamicObject(16500, 311.94, 1766.42, 551.18,   0.00, 90.00, 0.00);
	CreateDynamicObject(16500, 315.94, 1771.02, 551.18,   0.00, 90.00, 0.00);
	CreateDynamicObject(16500, 315.91, 1766.40, 551.18,   0.00, 90.00, 0.00);
	CreateDynamicObject(16500, 311.89, 1775.66, 551.18,   0.00, 90.00, 0.00);
	CreateDynamicObject(16500, 315.89, 1775.65, 551.18,   0.00, 90.00, 0.00);
	CreateDynamicObject(16500, 313.65, 1766.41, 545.93,   0.00, 90.00, 0.00);
	CreateDynamicObject(18007, 315.69, 1766.27, 548.26,   0.00, 0.00, -360.00);
	CreateDynamicObject(2949, 311.24, 1763.61, 546.08,   0.00, 0.00, -270.00);
	CreateDynamicObject(16500, 310.20, 1763.67, 550.50,   0.00, 0.00, -90.00);
	CreateDynamicObject(2700, 313.30, 1765.84, 548.31,   0.00, 0.00, -54.00);
	CreateDynamicObject(2611, 315.55, 1761.39, 547.69,   0.00, 0.00, -180.00);
	CreateDynamicObject(0, 307.46, 1771.01, 546.07,   0.00, 0.00, -90.00);
	CreateDynamicObject(2412, 307.17, 1769.23, 546.07,   0.00, 0.00, 90.00);
	CreateDynamicObject(1738, 311.18, 1762.40, 546.63,   0.00, 0.00, -91.00);
	CreateDynamicObject(2606, 315.21, 1765.94, 548.53,   0.00, 0.00, 0.00);
	CreateDynamicObject(2605, 316.03, 1761.76, 546.49,   0.00, 0.00, 180.00);
	CreateDynamicObject(1810, 314.35, 1769.36, 546.02,   0.00, 0.00, 105.00);
	CreateDynamicObject(1810, 314.51, 1770.76, 546.02,   0.00, 0.00, 76.00);
	CreateDynamicObject(1810, 316.45, 1769.76, 546.02,   0.00, 0.00, -76.00);
	CreateDynamicObject(1737, 315.24, 1769.27, 546.00,   0.00, 0.00, 84.00);
	CreateDynamicObject(2196, 314.86, 1769.45, 546.79,   0.00, 0.00, 84.00);
	CreateDynamicObject(14572, 308.70, 1770.05, 548.53,   0.00, 0.00, 0.00);
	CreateDynamicObject(2949, 308.54, 1766.39, 546.08,   0.00, 0.00, -89.00);
	CreateDynamicObject(0, 319.73, 1762.11, 546.89,   0.00, 0.00, 29.00);
	CreateDynamicObject(16780, 315.58, 1763.25, 550.43,   0.00, 0.00, 0.00);
	CreateDynamicObject(1744, 313.52, 1766.43, 546.72,   0.00, 0.00, 0.00);
	CreateDynamicObject(1744, 315.46, 1766.43, 546.72,   0.00, 0.00, 0.00);
	CreateDynamicObject(1744, 317.39, 1766.43, 546.72,   0.00, 0.00, 0.00);
	CreateDynamicObject(1808, 314.08, 1761.54, 546.14,   0.00, 0.00, 178.00);
	CreateDynamicObject(1886, 317.61, 1765.62, 548.89,   18.00, 2.00, -47.00);
	CreateDynamicObject(1886, 317.55, 1773.13, 551.20,   30.00, 2.00, -47.00);
	CreateDynamicObject(1886, 311.43, 1773.32, 551.03,   25.00, 0.00, -41.00);
	CreateDynamicObject(2886, 308.84, 1766.31, 547.19,   0.00, 0.00, -180.00);
	CreateDynamicObject(2690, 313.21, 1764.15, 547.06,   0.00, 0.00, 91.00);
	CreateDynamicObject(1721, 311.34, 1766.70, 546.08,   0.00, 0.00, 9.00);
	CreateDynamicObject(16500, 306.69, 1764.96, 548.00,   0.00, 0.00, 0.00);
	CreateDynamicObject(16500, 306.57, 1769.93, 548.00,   0.00, 0.00, 0.00);
	CreateDynamicObject(16500, 306.73, 1779.62, 548.00,   0.00, 0.00, 0.00);
	CreateDynamicObject(16500, 306.74, 1774.82, 548.00,   0.00, 0.00, 0.00);
	CreateDynamicObject(16500, 312.04, 1773.71, 548.00,   0.00, 0.00, 0.00);
	CreateDynamicObject(16500, 312.17, 1773.21, 548.00,   90.00, 0.00, 0.00);
	CreateDynamicObject(16500, 314.36, 1774.02, 548.00,   0.00, 0.00, -89.00);
	CreateDynamicObject(16500, 307.59, 1773.93, 548.00,   0.00, 0.00, -90.00);
	CreateDynamicObject(16500, 309.03, 1766.19, 548.00,   0.00, 0.00, -90.00);
	CreateDynamicObject(16500, 309.05, 1766.20, 548.00,   0.00, 0.00, -90.00);
	CreateDynamicObject(16500, 310.33, 1766.16, 548.00,   0.00, 0.00, -90.00);
	CreateDynamicObject(16500, 312.20, 1766.12, 548.00,   89.00, 0.00, 0.00);
	CreateDynamicObject(16500, 312.05, 1766.14, 548.00,   89.00, 0.00, 0.00);
	CreateDynamicObject(16500, 316.74, 1773.93, 548.00,   0.00, 0.00, -90.00);
	CreateDynamicObject(16500, 318.43, 1771.31, 548.00,   0.00, 0.00, -180.00);
	CreateDynamicObject(16500, 318.44, 1767.82, 548.00,   0.00, 0.00, -180.00);
	CreateDynamicObject(16500, 311.80, 1773.96, 551.90,   0.00, 0.00, -89.00);
	CreateDynamicObject(16500, 308.04, 1773.90, 551.90,   0.00, 0.00, -89.00);
	CreateDynamicObject(16500, 306.52, 1771.32, 550.00,   0.00, 0.00, 1.00);
	CreateDynamicObject(16500, 306.56, 1768.79, 550.00,   0.00, 0.00, 1.00);
	CreateDynamicObject(16500, 310.53, 1766.16, 550.00,   0.00, 0.00, -90.00);
	CreateDynamicObject(16500, 306.36, 1766.19, 550.00,   0.00, 0.00, -90.00);
	CreateDynamicObject(16500, 318.40, 1767.80, 550.00,   0.00, 0.00, -180.00);
	CreateDynamicObject(16500, 318.39, 1771.29, 550.00,   0.00, 0.00, -180.00);
	CreateDynamicObject(16500, 316.63, 1773.94, 550.00,   0.00, 0.00, -90.00);
	CreateDynamicObject(16500, 311.79, 1769.70, 543.54,   89.00, 0.00, 0.00);
	CreateDynamicObject(16500, 311.83, 1769.42, 543.53,   89.00, 0.00, 1.00);
	CreateDynamicObject(0, 319.81, 1762.04, 546.14,   0.00, 0.00, 29.00);
	CreateDynamicObject(1806, 316.44, 1762.62, 546.13,   0.00, 0.00, -222.00);
	CreateDynamicObject(1806, 317.48, 1764.78, 546.13,   0.00, 0.00, -316.00);
	CreateDynamicObject(16500, 311.98, 1769.35, 543.53,   89.00, 0.00, 1.00);
	CreateDynamicObject(16500, 312.18, 1769.35, 543.53,   89.00, 0.00, 1.00);
	CreateDynamicObject(16500, 312.38, 1769.37, 543.53,   89.00, 0.00, 1.00);
	CreateDynamicObject(16500, 312.16, 1769.75, 543.53,   89.00, 0.00, 1.00);
	CreateDynamicObject(16500, 312.00, 1769.75, 543.53,   89.00, 0.00, 1.00);
	CreateDynamicObject(16500, 312.40, 1769.65, 543.53,   89.00, 0.00, 1.00);
	CreateDynamicObject(2894, 315.16, 1769.79, 546.79,   0.00, 0.00, -84.00);
	CreateDynamicObject(2967, 315.89, 1766.06, 547.05,   0.00, 0.00, 40.00);
	CreateDynamicObject(2074, 315.21, 1769.78, 550.84,   0.00, 0.00, 0.00);
	CreateDynamicObject(19362, 310.20, 1775.65, 545.98,   0.00, 90.00, 0.00);
	CreateDynamicObject(19362, 306.71, 1775.65, 545.98,   0.00, 90.00, 0.00);
	CreateDynamicObject(19362, 310.28, 1775.42, 545.98,   0.00, 90.00, 0.00);
	CreateDynamicObject(19364, 311.88, 1773.97, 550.34,   0.00, 0.00, -90.00);
	CreateDynamicObject(2930, 310.07, 1774.64, 551.00,   90.00, 0.00, 0.00);
	CreateDynamicObject(2930, 310.07, 1777.27, 551.00,   90.00, 0.00, 0.00);
	CreateDynamicObject(2412, 307.74, 1770.57, 541.07,   0.00, 0.00, -90.00);
	CreateDynamicObject(16500, 309.56, 1771.49, 547.50,   0.00, 0.00, 270.00);
	CreateDynamicObject(3089, 311.92, 1768.18, 547.38,   0.00, 0.00, -270.00);
	CreateDynamicObject(3089, 311.92, 1771.17, 547.38,   0.00, 0.00, -90.00);
	CreateDynamicObject(11292, 310.19, 1768.71, 544.50,   0.00, 0.00, 90.00);
	CreateDynamicObject(11292, 305.97, 1768.76, 544.50,   0.00, 0.00, 90.00);
	CreateDynamicObject(3454, 304.63, 1785.74, 547.32,   0.00, 0.00, 90.00);
	CreateDynamicObject(8636, 332.01, 1711.61, 546.65,   0.00, 0.00, 0.00);
	CreateDynamicObject(8636, 331.93, 1706.35, 546.65,   0.00, 0.00, 0.00);
	CreateDynamicObject(2412, 307.23, 1771.53, 546.07,   0.00, 0.00, 90.00);
	CreateDynamicObject(14572, 308.71, 1770.04, 547.03,   0.00, 0.00, 0.00);
	CreateDynamicObject(1620, 311.90, 1767.50, 549.32,   0.00, 0.00, 0.00);
	CreateDynamicObject(2986, 311.90, 1767.37, 548.83,   0.00, 90.00, 0.00);
	CreateDynamicObject(2986, 311.90, 1767.61, 548.83,   0.00, 90.00, 0.00);
	CreateDynamicObject(2986, 311.89, 1767.49, 549.47,   0.00, 90.00, 0.00);
	CreateDynamicObject(3454, 292.48, 1762.33, 547.32,   0.00, 0.00, 180.00);
	CreateDynamicObject(8636, 366.63, 1771.16, 546.65,   0.00, 0.00, 90.00);
	CreateDynamicObject(8636, 366.62, 1789.64, 546.65,   0.00, 0.00, 90.00);
	CreateDynamicObject(1721, 310.54, 1766.65, 546.08,   0.00, 0.00, 2.00);
	CreateDynamicObject(10186, 311.87, 1773.15, 543.32,   90.00, 0.00, 270.00);
	CreateDynamicObject(10186, 311.88, 1773.36, 543.32,   90.00, 0.00, 270.00);
	CreateDynamicObject(10186, 311.88, 1773.57, 543.32,   90.00, 0.00, 270.00);
	CreateDynamicObject(10632, 311.89, 1769.87, 540.00,   90.00, 0.00, 180.00);
	CreateDynamicObject(10632, 311.90, 1769.87, 540.00,   90.00, 0.00, 180.00);
	CreateDynamicObject(1721, 308.98, 1767.55, 546.08,   0.00, 0.00, -120.00);
	CreateDynamicObject(8636, 372.16, 1826.15, 546.25,   0.00, 0.00, 0.00);
	CreateDynamicObject(8636, 391.93, 1826.15, 549.40,   180.00, 0.00, 180.00);
	CreateDynamicObject(3454, 319.59, 1752.06, 554.32,   0.00, 0.00, -90.00);
	CreateDynamicObject(19325, 315.31, 1766.42, 548.55,   0.00, 0.00, 90.00);
	CreateDynamicObject(10632, 311.93, 1770.72, 540.00,   90.00, 0.00, 0.00);
	CreateDynamicObject(10632, 311.92, 1768.54, 540.00,   90.00, 0.00, 0.00);
	CreateDynamicObject(7034, 299.47, 1787.07, 546.23,   0.00, 0.00, 270.00);
	CreateDynamicObject(7034, 299.48, 1787.01, 549.34,   0.00, 0.00, 270.00);
	CreateDynamicObject(7034, 297.67, 1753.14, 546.24,   0.00, 0.00, 0.00);
	CreateDynamicObject(7034, 299.34, 1753.32, 546.25,   0.00, 0.00, 90.00);
	return 1;
}
stock LoadCampGround()
{
	CreateDynamicObject(3566, 1566.49, 22.82, 25.38,   0.00, 0.00, 9.78);
	CreateDynamicObject(8407, 1581.98, 38.11, 24.96,   0.00, 0.00, 97.92);
	CreateDynamicObject(3174, 1557.43, 52.75, 24.18,   0.00, 0.00, 12.78);
	CreateDynamicObject(3171, 1564.81, 50.77, 24.51,   0.00, 0.00, 217.38);
	CreateDynamicObject(3172, 1564.28, 44.67, 23.41,   0.00, 0.00, 55.62);
	CreateDynamicObject(690, 1546.94, 98.39, 26.73,   0.00, 0.00, -59.10);
	CreateDynamicObject(690, 1549.49, 90.11, 27.46,   0.00, 0.00, -63.00);
	CreateDynamicObject(690, 1552.17, 81.76, 26.54,   0.00, 0.00, -106.38);
	CreateDynamicObject(690, 1520.77, 82.06, 26.20,   0.00, 0.00, -294.18);
	CreateDynamicObject(690, 1527.78, 70.57, 25.84,   0.00, 0.00, -401.76);
	CreateDynamicObject(690, 1526.59, 59.13, 23.73,   0.00, 0.00, -493.80);
	CreateDynamicObject(690, 1523.44, 46.82, 21.66,   0.00, 0.00, -499.38);
	CreateDynamicObject(690, 1518.43, 34.98, 21.13,   0.00, 0.00, -545.16);
	CreateDynamicObject(690, 1502.85, 28.82, 20.58,   0.00, 0.00, -506.64);
	CreateDynamicObject(690, 1501.37, 16.12, 20.58,   0.00, 0.00, -602.94);
	CreateDynamicObject(690, 1503.74, 3.30, 20.58,   0.00, 0.00, -518.34);
	CreateDynamicObject(690, 1515.55, -3.61, 20.58,   0.00, 0.00, -602.04);
	CreateDynamicObject(690, 1525.45, -5.89, 20.15,   0.00, 0.00, -660.06);
	CreateDynamicObject(690, 1531.90, -12.95, 20.46,   0.00, 0.00, -656.34);
	CreateDynamicObject(690, 1533.82, -24.73, 19.36,   0.00, 0.00, -711.90);
	CreateDynamicObject(690, 1535.07, -35.61, 19.36,   0.00, 0.00, -667.08);
	CreateDynamicObject(690, 1549.15, -46.61, 17.93,   0.00, 0.00, -692.94);
	CreateDynamicObject(3566, 1570.16, 27.21, 25.53,   0.00, 0.00, -170.64);
	CreateDynamicObject(690, 1561.26, 73.17, 24.15,   0.00, 0.00, -131.28);
	CreateDynamicObject(690, 1570.66, 64.66, 23.20,   0.00, 0.00, -206.46);
	CreateDynamicObject(690, 1577.80, 57.65, 23.12,   0.00, 0.00, -259.56);
	CreateDynamicObject(690, 1584.84, 48.06, 22.53,   0.00, 0.00, -272.82);
	CreateDynamicObject(690, 1594.46, 15.08, 21.05,   0.00, 0.00, -436.08);
	CreateDynamicObject(690, 1589.80, 12.59, 19.54,   0.00, 0.00, -527.22);
	CreateDynamicObject(690, 1585.79, -1.00, 19.02,   0.00, 0.00, -549.18);
	CreateDynamicObject(690, 1580.10, -14.15, 17.61,   0.00, 0.00, -614.82);
	CreateDynamicObject(690, 1572.41, -24.25, 16.98,   0.00, 0.00, -644.52);
	CreateDynamicObject(3172, 1549.74, 8.35, 22.86,   0.00, 0.00, -72.24);
	CreateDynamicObject(935, 1554.08, 12.49, 23.47,   356.86, 0.00, 3.14);
	CreateDynamicObject(3174, 1539.30, 11.47, 22.99,   0.00, 0.00, -116.22);
	CreateDynamicObject(19954, 1541.28, 104.60, 28.17,   0.00, 0.00, -121.20);
	CreateDynamicObject(19953, 1520.55, 94.09, 28.45,   0.00, 0.00, 158.16);
	CreateDynamicObject(3171, 1534.50, 16.83, 22.97,   0.00, 0.00, 201.30);
	CreateDynamicObject(3172, 1550.79, 24.62, 23.08,   0.00, 0.00, 17.76);
	CreateDynamicObject(725, 1551.84, 1.34, 20.27,   0.00, 0.00, -93.18);
	CreateDynamicObject(725, 1542.98, 5.46, 13.69,   0.00, 0.00, -48.60);
	CreateDynamicObject(725, 1546.53, 42.74, 7.83,   0.00, 0.00, -50.82);
	CreateDynamicObject(11461, 1517.03, 10.65, 15.40,   0.00, 0.00, 228.60);
	CreateDynamicObject(3172, 1540.52, 37.96, 23.06,   0.00, 0.00, 104.82);
	CreateDynamicObject(3626, 1518.17, 19.36, 24.24,   0.00, 0.00, 103.62);
	CreateDynamicObject(3626, 1514.46, 18.46, 24.24,   0.00, 0.00, 103.62);
	CreateDynamicObject(3626, 1518.17, 19.36, 21.61,   0.00, 0.00, 103.62);
	CreateDynamicObject(3626, 1514.46, 18.46, 21.69,   0.00, 0.00, 103.62);
	CreateDynamicObject(1522, 1520.43, 16.78, 23.10,   0.00, 0.00, 102.24);
	CreateDynamicObject(19588, 1573.80, -50.52, 20.74,   0.00, 0.00, 0.00);
	CreateDynamicObject(18609, 1522.62, 19.68, 24.06,   0.00, 0.00, 15.30);
	CreateDynamicObject(18609, 1546.95, 9.37, 24.17,   0.00, 0.00, 55.98);
	CreateDynamicObject(18566, 1564.76, 31.43, 23.41,   0.54, -1.98, -80.34);
	CreateDynamicObject(3276, 1564.11, -69.65, 20.64,   3.00, 0.00, 84.00);
	CreateDynamicObject(3276, 1564.77, -40.82, 20.83,   2.58, 0.09, 94.50);
	CreateDynamicObject(2120, 1547.34, 22.78, 23.69,   0.00, 0.00, 32.76);
	CreateDynamicObject(2120, 1547.28, 25.52, 23.69,   0.00, 0.00, -14.82);
	CreateDynamicObject(2120, 1539.69, 34.46, 23.69,   0.00, 0.00, 75.42);
	CreateDynamicObject(2120, 1536.09, 33.48, 23.69,   0.00, 0.00, 89.22);
	CreateDynamicObject(2120, 1536.05, 20.02, 23.69,   0.00, 0.00, 191.04);
	CreateDynamicObject(2120, 1538.06, 17.56, 23.69,   0.00, 0.00, 218.52);
	CreateDynamicObject(2120, 1539.98, 17.06, 23.69,   0.00, 0.00, 254.10);
	CreateDynamicObject(19953, 1528.69, 84.48, 27.38,   0.00, 0.00, 132.42);
	CreateDynamicObject(19953, 1532.71, 77.42, 26.71,   0.00, 0.00, 127.44);
	CreateDynamicObject(19954, 1540.48, 95.60, 27.59,   0.00, 0.00, -77.34);
	CreateDynamicObject(19954, 1543.08, 85.62, 26.86,   0.00, 0.00, -76.68);
	CreateDynamicObject(11695, 1493.27, -7.05, -14.10,   0.00, 0.00, -84.00);
	CreateDynamicObject(10444, 1570.63, -45.65, 18.88,   0.00, 0.00, 0.00);
	CreateDynamicObject(3276, 1565.14, -57.84, 20.64,   3.00, 1.00, 84.00);
	CreateDynamicObject(13023, 1501.57, -6.74, 10.05,   0.00, 0.00, 18.00);
	CreateDynamicObject(758, 1568.13, -46.38, 17.88,   0.00, 0.00, 0.00);
	CreateDynamicObject(905, 1567.85, -53.16, 18.87,   0.00, 0.00, 0.00);
	CreateDynamicObject(744, 1579.70, -60.06, 14.87,   0.00, 0.00, 0.00);
	CreateDynamicObject(745, 1570.27, -60.00, 17.88,   0.00, 0.00, 0.00);
	CreateDynamicObject(13023, 1496.95, -71.76, 10.05,   0.00, 0.00, 47.00);
	CreateDynamicObject(745, 1566.50, -68.42, 17.58,   0.00, 0.00, 222.00);
	CreateDynamicObject(746, 1576.52, -60.23, 17.19,   0.00, 0.00, 98.00);
	CreateDynamicObject(11696, 1528.38, -35.65, -87.70,   0.00, 0.00, 265.00);
	CreateDynamicObject(745, 1572.51, -30.72, 17.88,   0.00, 0.00, -40.00);
	CreateDynamicObject(745, 1577.10, -54.18, 16.88,   0.00, 0.00, 0.00);
	CreateDynamicObject(13023, 1538.70, -115.23, 9.05,   0.00, 0.00, 95.00);
	CreateDynamicObject(13702, 1539.39, -22.37, -10.77,   0.00, 0.00, 185.00);
	CreateDynamicObject(6230, 1587.02, -17.98, 10.97,   0.00, 0.00, 180.00);
	CreateDynamicObject(17071, 1579.68, -55.19, 13.03,   0.00, 0.00, 25.00);
	CreateDynamicObject(688, 1569.79, -80.29, 14.36,   0.00, 0.00, 0.00);
	CreateDynamicObject(744, 1578.32, -65.51, 12.87,   0.00, 0.00, 0.00);
	CreateDynamicObject(19982, 1546.52, 74.71, 26.74,   0.00, 0.00, -149.00);
	CreateDynamicObject(1333, 1516.97, 24.43, 23.73,   0.00, 0.00, 193.00);
	CreateDynamicObject(1338, 1519.03, 25.16, 23.73,   0.00, 0.00, -20.00);
	CreateDynamicObject(3276, 1541.60, -59.49, 20.64,   3.00, -2.00, 78.00);
	CreateDynamicObject(3276, 1539.73, -71.12, 20.14,   3.00, -2.00, 85.00);
	CreateDynamicObject(690, 1528.01, -58.45, 18.93,   0.00, 0.00, -692.94);
	CreateDynamicObject(688, 1534.39, -68.68, 17.36,   0.00, 0.00, 0.00);
	CreateDynamicObject(3171, 1547.78, -56.16, 19.87,   0.00, 0.00, 91.00);
	CreateDynamicObject(705, 1515.08, -83.69, 18.00,   0.00, 0.00, 0.00);
	CreateDynamicObject(759, 1554.65, -38.70, 20.11,   3.14, 0.00, 0.44);
	CreateDynamicObject(19630, 1571.73, -49.31, 18.56,   0.00, 0.00, 0.00);
	CreateDynamicObject(19630, 1570.91, -44.80, 18.56,   0.00, 0.00, 80.00);

	return 1;
}
stock LoadFMDmap()
{
	//All Saints/FMD interior, credits to Nate (Jayden Riggs).
        //LSFMD Gym-----------------
    new MainLSFMDGym;
    MainLSFMDGym = CreateDynamicObject(14488,1175.9776600,-1402.6922600,1096.9824200,0.0000000,0.0000000,0.0000000); //
    SetDynamicObjectMaterial(MainLSFMDGym, 8, 12983, "sw_med1", "ws_carparkwall1", 0);//walls
    SetDynamicObjectMaterial(MainLSFMDGym, 9, 12983, "sw_med1", "ws_carparkwall1", 0);//pillar
    SetDynamicObjectMaterial(MainLSFMDGym, 6, 4010, "lanblokb2", "sl_lavicdtwall1", 0);//brick windows
    SetDynamicObjectMaterial(MainLSFMDGym, 1, 9169, "vgslowbuild", "marinawindow1_256", 0);//roof windows
    SetDynamicObjectMaterial(MainLSFMDGym, 7, 16150, "ufo_bar", "sa_wood08_128", 0);//windows
    SetDynamicObjectMaterial(MainLSFMDGym, 11, 16150, "ufo_bar", "sa_wood08_128", 0);//Fringes
    CreateDynamicObject(1533,1184.2160600,-1413.2012900,1094.5741000,0.0000000,0.0000000,180.0000000); //
    CreateDynamicObject(946,1176.2281500,-1394.1346400,1096.6744400,0.0000000,0.0000000,180.0000000); //
    CreateDynamicObject(1985,1183.4294400,-1398.7733200,1097.4708300,0.0000000,0.0000000,0.0000000); //
    CreateDynamicObject(1985,1182.9113800,-1395.5733600,1097.4708300,0.0000000,0.0000000,0.0000000); //
    CreateDynamicObject(1533,1169.4884000,-1413.0516400,1094.5741000,0.0000000,0.0000000,180.0000000); //
    CreateDynamicObject(2627,1167.4543500,-1399.8131100,1094.5509000,0.0000000,0.0000000,90.0000000); //
    CreateDynamicObject(2627,1167.4543500,-1397.7071500,1094.5509000,0.0000000,0.0000000,90.0000000); //
    CreateDynamicObject(2627,1167.4543500,-1395.7181400,1094.5509000,0.0000000,0.0000000,90.0000000); //
    CreateDynamicObject(2628,1167.4647200,-1406.1763900,1094.5474900,0.0000000,0.0000000,95.0310000); //
    CreateDynamicObject(2628,1167.4119900,-1404.5338100,1094.5474900,0.0000000,0.0000000,91.5210000); //
    CreateDynamicObject(2630,1185.0208700,-1403.7791700,1094.5501700,0.0000000,0.0000000,-90.0000000); //
    CreateDynamicObject(2630,1185.0208700,-1405.5341800,1094.5501700,0.0000000,0.0000000,-93.8610000); //
    CreateDynamicObject(2629,1169.5015900,-1393.4914600,1094.5557900,0.0000000,0.0000000,0.0000000); //
    CreateDynamicObject(2916,1166.6204800,-1392.5013400,1094.6649200,0.0000000,0.0000000,0.0000000); //
    CreateDynamicObject(2916,1167.1988500,-1392.8286100,1094.6649200,0.0000000,0.0000000,43.9799900); //
    CreateDynamicObject(2916,1166.7523200,-1392.8968500,1094.6649200,0.0000000,0.0000000,28.0799800); //
    CreateDynamicObject(2631,1168.3408200,-1402.2078900,1094.5522500,0.0000000,0.0000000,0.0000000); //
    CreateDynamicObject(1946,1178.4797400,-1396.0882600,1094.7539100,0.0000000,0.0000000,0.0000000); //
    CreateDynamicObject(2231,1166.2817400,-1412.6701700,1094.5429700,0.0000000,0.0000000,146.1599300); //
    CreateDynamicObject(2231,1185.8383800,-1412.9790000,1094.5429700,0.0000000,0.0000000,232.2599200); //
    CreateDynamicObject(2002,1180.1424600,-1412.5341800,1094.5529800,0.0000000,0.0000000,180.0000000); //
    CreateDynamicObject(1368,1177.4917000,-1412.7014200,1095.2189900,0.0000000,0.0000000,180.0000000); //
    CreateDynamicObject(2647,1171.6396500,-1413.3458300,1095.7999300,0.0000000,0.0000000,0.0000000); //
    CreateDynamicObject(2737,1186.1518600,-1408.2410900,1096.3960000,0.0000000,0.0000000,-90.0000000); //
    CreateDynamicObject(14441,1176.1706500,-1409.8546100,1100.6208500,0.0000000,0.0000000,90.0000000); //
    //LSFMD Class------------------------
    new MainLSFMDClass;
    MainLSFMDClass = CreateDynamicObject(14530,1156.3581500,-1415.9625200,1099.4997600,0.0000000,0.0000000,0.0000000); //
    SetDynamicObjectMaterial(MainLSFMDClass, 11, 8396, "sphinx01", "luxorceiling01_128", 0);//wall
    SetDynamicObjectMaterial(MainLSFMDClass, 12, 8396, "sphinx01", "luxorceiling01_128", 0);//wall
    new LSFMDClassPCFront;
    LSFMDClassPCFront = CreateDynamicObject(2265,1161.8498500,-1415.5412600,1098.8527800,0.0000000,90.0000000,90.0000000); //
    SetDynamicObjectMaterial(LSFMDClassPCFront, 0, 11631, "mp_ranchcut", "mpCJ_WOOD_DARK", 0xFF000000);
    SetDynamicObjectMaterial(LSFMDClassPCFront, 1, 14530, "estate2", "Auto_Slamvan2", 0);//0xFF2A2A2A
    new LSFMDClassPCBack;
    LSFMDClassPCBack = CreateDynamicObject(2265,1160.8643800,-1414.8212900,1098.8527800,0.0000000,90.0000000,-90.0000000); //
    SetDynamicObjectMaterial(LSFMDClassPCBack, 0, 11631, "mp_ranchcut", "mpCJ_WOOD_DARK", 0xFF000000);
    SetDynamicObjectMaterial(LSFMDClassPCBack, 1, 11631, "mp_ranchcut", "mpCJ_WOOD_DARK", 0xFF000000);
    new LSFMDClassKeyboard;
    LSFMDClassKeyboard = CreateDynamicObject(1547,1161.7768600,-1415.2827100,1098.5030500,0.0000000,0.0000000,93.4800000); //
    SetDynamicObjectMaterialText(LSFMDClassKeyboard, 0, "cccccccccccccccccc\ncccccccccccccccccc\nccccccccccccccccc\nccccccccccccccccc\nccccccccccccccccc", OBJECT_MATERIAL_SIZE_256x128, "webdings", 18, 1, 0xFFFFFFFF, 0xFF000000, OBJECT_MATERIAL_TEXT_ALIGN_CENTER);
    new LSFMDClassLegs[4];
    LSFMDClassLegs[0] = CreateDynamicObject(2752,1161.3022500,-1415.2005600,1098.5191700,0.0000000,0.0000000,0.0000000); //
    LSFMDClassLegs[1] = CreateDynamicObject(2752,1161.3022500,-1415.0466300,1098.7912600,90.0000000,0.0000000,0.0000000); //
    LSFMDClassLegs[2] = CreateDynamicObject(2040,1161.2894300,-1415.1842000,1098.4051500,0.0000000,0.0000000,0.0000000); //
    for(new i = 0; i<=2; i++) SetDynamicObjectMaterial(LSFMDClassLegs[i], 0, 11631, "mp_ranchcut", "mpCJ_WOOD_DARK", 0xFF000000);
    new LSFMDClassProjector;
    LSFMDClassProjector = CreateDynamicObject(1787,1156.3720700,-1417.9329800,1101.0896000,9.8020000,0.0000000,90.0000000); //
    SetDynamicObjectMaterial(LSFMDClassProjector, 0, 1676, "wshxrefpump", "black64", 0);
    SetDynamicObjectMaterial(LSFMDClassProjector, 1, 1676, "wshxrefpump", "black64", 0);
    SetDynamicObjectMaterial(LSFMDClassProjector, 2, 1676, "wshxrefpump", "black64", 0);
    new LSFDMClassProjectorLight[4];
    LSFDMClassProjectorLight[0] = CreateDynamicObject(1860,1156.4010000,-1417.8835400,1101.1021700,0.0000000,9.8020000,0.0000000); //
    LSFDMClassProjectorLight[1] = CreateDynamicObject(1860,1156.4010000,-1417.8835400,1101.1142600,0.0000000,9.8020000,0.0000000); //
    LSFDMClassProjectorLight[2] = CreateDynamicObject(1860,1156.3969700,-1417.8835400,1101.0902100,0.0000000,9.8020000,0.0000000); //
    for(new i = 0; i<=2; i++) SetDynamicObjectMaterial(LSFDMClassProjectorLight[i], 0, 16150, "ufo_bar", "GEwhite1_64", 0);
    new LSFMDClassWalls[3];
    LSFMDClassWalls[0] = CreateDynamicObject(19385,1155.4649700,-1413.8813500,1099.4421400,0.0000000,0.0000000,90.0000000); //
    LSFMDClassWalls[1] = CreateDynamicObject(19385,1155.4792500,-1420.6032700,1099.4641100,0.0000000,0.0000000,90.0000000); //
    for(new i = 0; i<=1; i++) SetDynamicObjectMaterial(LSFMDClassWalls[i], 0, 8396, "sphinx01", "luxorceiling01_128", 0);

    CreateDynamicObject(1533,1154.6888400,-1413.9379900,1097.7143600,0.0000000,0.0000000,0.0000000); //
    CreateDynamicObject(1533,1156.2161900,-1420.5590800,1097.7004400,0.0000000,0.0000000,180.0000000); //
    CreateDynamicObject(2169,1161.6242700,-1415.7719700,1097.7126500,0.0000000,0.0000000,90.0000000); //
    CreateDynamicObject(1714,1163.3166500,-1414.8317900,1097.7147200,0.0000000,0.0000000,-75.7199800); //
    CreateDynamicObject(16101,1156.3751200,-1417.9384800,1111.9547100,0.0000000,180.0000000,0.0000000); //
    CreateDynamicObject(1722,1149.2360800,-1419.7968800,1097.7130100,0.0000000,0.0000000,-90.0000000); //
    CreateDynamicObject(1722,1149.3043200,-1418.8106700,1097.7130100,0.0000000,0.0000000,-90.0000000); //
    CreateDynamicObject(1722,1149.2496300,-1417.6948200,1097.7130100,0.0000000,0.0000000,-93.0000100); //
    CreateDynamicObject(1722,1149.2496300,-1416.5507800,1097.7130100,0.0000000,0.0000000,-90.0000000); //
    CreateDynamicObject(1722,1149.2496300,-1415.1988500,1097.7130100,0.0000000,0.0000000,-87.8999800); //
    CreateDynamicObject(1722,1150.9682600,-1418.8106700,1097.7130100,0.0000000,0.0000000,-90.0000000); //
    CreateDynamicObject(1722,1150.9682600,-1419.7968800,1097.7130100,0.0000000,0.0000000,-87.2399900); //
    CreateDynamicObject(1722,1150.9682600,-1416.5507800,1097.7130100,0.0000000,0.0000000,-96.7200200); //
    CreateDynamicObject(1722,1150.9682600,-1415.1790800,1097.7130100,0.0000000,0.0000000,-90.0000000); //
    CreateDynamicObject(1722,1152.6323200,-1419.7968800,1097.7130100,0.0000000,0.0000000,-85.3199900); //
    CreateDynamicObject(1722,1152.6323200,-1418.8106700,1097.7130100,0.0000000,0.0000000,-90.0000000); //
    CreateDynamicObject(1722,1152.6323200,-1416.5507800,1097.7130100,0.0000000,0.0000000,-86.7000000); //
    CreateDynamicObject(1722,1152.6323200,-1415.1790800,1097.7130100,0.0000000,0.0000000,-90.0000000); //
    CreateDynamicObject(1850,1157.7242400,-1420.0911900,1097.7139900,0.0000000,0.0000000,180.0000000); //
    CreateDynamicObject(2690,1158.9461700,-1420.1053500,1098.9982900,90.0000000,90.0000000,186.1540100); //
    CreateDynamicObject(19330,1158.1663800,-1420.2334000,1099.4169900,0.0000000,-90.0000000,-10.8000000); //
    CreateDynamicObject(19331,1157.7818600,-1420.2880900,1099.4169900,0.0000000,-90.0000000,17.9400100); //
    CreateDynamicObject(1211,1159.3474100,-1419.5125700,1098.2708700,0.0000000,0.0000000,0.0000000); //
    CreateDynamicObject(1613,1158.3507100,-1414.0262500,1098.5904500,0.0000000,0.0000000,90.0000000); //
        //Floor
    new SaintsFloor[7];
    SaintsFloor[0] = CreateDynamicObject(3678,1171.0333300,-1332.6423300,1083.0133100,0.0000000,0.0000000,90.0000000); //
    SaintsFloor[1] = CreateDynamicObject(3678,1171.0333300,-1322.784300,1083.0113500,0.0000000,0.0000000,90.0000000); //
    SaintsFloor[2] = CreateDynamicObject(3678,1171.0333300,-1322.7802700,1083.0113500,0.0000000,0.0000000,90.0000000); //
    SaintsFloor[3] = CreateDynamicObject(3678,1171.0333300,-1345.2022700,1083.0133100,0.0000000,0.0000000,90.0000000); //
    SaintsFloor[4] = CreateDynamicObject(3678,1176.6319600,-1354.4211400,1087.3062700,0.0000000,0.0000000,90.0000000); //
    SaintsFloor[5] = CreateDynamicObject(3678,1198.195300,-1354.4034400,1087.3062700,0.0000000,0.0000000,90.0000000); //
    for(new i = 0; i<=5; i++) SetDynamicObjectMaterial(SaintsFloor[i], 6, 13007, "sw_bankint", "woodfloor1", 0);
    for(new i = 0; i<=5; i++) SetDynamicObjectMaterial(SaintsFloor[i], 7, 13007, "sw_bankint", "woodfloor1", 0);
    //Lobby Walls
    new SaintsLobbyWalls[13];
    SaintsLobbyWalls[0] = CreateDynamicObject(19378,1179.7840600,-1330.636600,1092.0999800,0.0000000,0.0000000,0.0000000); //
    SaintsLobbyWalls[1] = CreateDynamicObject(19378,1182.7879600,-1334.6662600,1092.0999800,0.0000000,0.0000000,90.0000000); //
    SaintsLobbyWalls[2] = CreateDynamicObject(19378,1170.1679700,-1334.6662600,1092.0999800,0.0000000,0.0000000,90.0000000); //
    SaintsLobbyWalls[3] = CreateDynamicObject(19378,1176.8900100,-1334.6701700,1096.3360600,0.0000000,0.0000000,90.0000000); //
    SaintsLobbyWalls[4] = CreateDynamicObject(19378,1179.7840600,-1321.0035400,1092.0999800,0.0000000,0.0000000,0.0000000); //
    SaintsLobbyWalls[5] = CreateDynamicObject(19378,1179.7861300,-1311.9555700,1092.0999800,0.0000000,0.0000000,0.0000000); //
    SaintsLobbyWalls[6] = CreateDynamicObject(19378,1182.7919900,-1313.4543500,1092.0999800,0.0000000,0.0000000,90.0000000); //
    SaintsLobbyWalls[7] = CreateDynamicObject(19378,1170.1550300,-1313.4543500,1092.0999800,0.0000000,0.0000000,90.0000000); //
    SaintsLobbyWalls[8] = CreateDynamicObject(19378,1179.7080100,-1313.4522700,1096.3360600,0.0000000,0.0000000,90.0000000); //
    SaintsLobbyWalls[9] = CreateDynamicObject(19378,1166.7396200,-1317.8877000,1092.0999800,0.0000000,0.0000000,0.0000000); //
    SaintsLobbyWalls[10] = CreateDynamicObject(19378,1166.7396200,-1330.3836700,1092.0999800,0.0000000,0.0000000,0.0000000); //
    SaintsLobbyWalls[11] = CreateDynamicObject(19378,1166.7375500,-1326.4077100,1092.0999800,0.0000000,0.0000000,0.0000000); //
    for(new i = 0; i<=11; i++) SetDynamicObjectMaterial(SaintsLobbyWalls[i], 0, 8678, "wddngchplgrnd01", "gnhotelwall02_128", 0);
    //Lobby Windows
    new SaintsLobbyWin[3];
    SaintsLobbyWin[0] = CreateDynamicObject(19448,1166.7813700,-1331.1346400,1090.8690200,0.0000000,0.0000000,0.0000000); //
    SaintsLobbyWin[1] = CreateDynamicObject(19448,1166.7813700,-1317.6706500,1090.8690200,0.0000000,0.0000000,0.0000000); //
    for(new i = 0; i<=1; i++) SetDynamicObjectMaterial(SaintsLobbyWin[i], 0, 6052, "law_doontoon", "sf_window_mod1", 0);
    //Lobby Ceiling
    new SaintsLobbyCeil[7];
    SaintsLobbyCeil[0] = CreateDynamicObject(19380,1169.8830600,-1318.0806900,1093.5799600,0.0000000,90.0000000,0.0000000); //
    SaintsLobbyCeil[1] = CreateDynamicObject(19380,1169.8830600,-1326.4077100,1093.5820300,0.0000000,90.0000000,0.0000000); //
    SaintsLobbyCeil[2] = CreateDynamicObject(19380,1169.8830600,-1330.3836700,1093.5799600,0.0000000,90.0000000,0.0000000); //
    SaintsLobbyCeil[3] = CreateDynamicObject(19380,1180.3811000,-1318.0806900,1093.5799600,0.0000000,90.0000000,0.0000000); //
    SaintsLobbyCeil[4] = CreateDynamicObject(19380,1180.3811000,-1326.4077100,1093.5820300,0.0000000,90.0000000,0.0000000); //
    SaintsLobbyCeil[5] = CreateDynamicObject(19380,1180.3811000,-1330.3836700,1093.5799600,0.0000000,90.0000000,0.0000000); //
    for(new i = 0; i<=5; i++) SetDynamicObjectMaterial(SaintsLobbyCeil[i], 0, 3975, "lanbloke", "ceiling_256", 0);
    //Lobby desk
    new SaintsLobbyDesk[3];
    SaintsLobbyDesk[0] = CreateDynamicObject(18092,1175.9068600,-1327.4947500,1089.0670200,0.0000000,0.0000000,90.0000000); //
    SaintsLobbyDesk[1] = CreateDynamicObject(18092,1175.9068600,-1320.9668000,1089.0670200,0.0000000,0.0000000,90.0000000); //
    for(new i = 0; i<=1; i++) SetDynamicObjectMaterial(SaintsLobbyDesk[i], 0, 9239, "stuff2_sfn", "sl_whitewood01", 0);
    for(new i = 0; i<=1; i++) SetDynamicObjectMaterial(SaintsLobbyDesk[i], 1, 12954, "sw_furniture", "CJ_WOOD5", 0);//top
    //Pillars
    new SaintsPillars1[9];
    SaintsPillars1[0] = CreateDynamicObject(18980,1166.5584700,-1326.4636200,1088.5749500,0.0000000,0.0000000,0.0000000); //
    SaintsPillars1[1] = CreateDynamicObject(18980,1166.5584700,-1322.3835400,1088.5749500,0.0000000,0.0000000,0.0000000); //
    SaintsPillars1[2] = CreateDynamicObject(18980,1178.4677700,-1334.7023900,1088.5749500,0.0000000,0.0000000,0.0000000); //
    SaintsPillars1[3] = CreateDynamicObject(18980,1174.4887700,-1334.7023900,1088.5749500,0.0000000,0.0000000,0.0000000); //
    SaintsPillars1[4] = CreateDynamicObject(18980,1175.2473100,-1330.1073000,1088.5749500,0.0000000,0.0000000,0.0000000); //
    SaintsPillars1[5] = CreateDynamicObject(18980,1175.2473100,-1318.2163100,1088.5749500,0.0000000,0.0000000,0.0000000); //
    SaintsPillars1[6] = CreateDynamicObject(18980,1174.4887700,-1313.6864000,1088.5749500,0.0000000,0.0000000,0.0000000); //
    SaintsPillars1[7] = CreateDynamicObject(18980,1178.4677700,-1313.6864000,1088.5749500,0.0000000,0.0000000,0.0000000); //
    for(new i = 0; i<=7; i++) SetDynamicObjectMaterial(SaintsPillars1[i], 0, 14430, "dr_gsnew", "mp_cloth_subwall", 0);
    new SaintsPillars2[10];
    SaintsPillars2[0] = CreateDynamicObject(18980,1178.4593500,-1338.1087600,1088.5749500,0.0000000,0.0000000,0.0000000); //
    SaintsPillars2[1] = CreateDynamicObject(18980,1181.4158900,-1341.9887700,1088.5749500,0.0000000,0.0000000,0.0000000); //
    SaintsPillars2[2] = CreateDynamicObject(18980,1181.4158900,-1344.7187500,1088.5749500,0.0000000,0.0000000,0.0000000); //
    SaintsPillars2[3] = CreateDynamicObject(18980,1178.0273400,-1338.3815900,1088.5749500,0.0000000,0.0000000,0.0000000); //
    SaintsPillars2[4] = CreateDynamicObject(18980,1178.0273400,-1341.6369600,1088.5749500,0.0000000,0.0000000,0.0000000); //
    SaintsPillars2[5] = CreateDynamicObject(18980,1172.4807100,-1341.9487300,1088.5749500,0.0000000,0.0000000,0.0000000); //
    SaintsPillars2[6] = CreateDynamicObject(18980,1184.6246300,-1338.5227100,1088.5749500,0.0000000,0.0000000,0.0000000); //
    SaintsPillars2[7] = CreateDynamicObject(18980,1177.3656000,-1350.7246100,1088.5749500,0.0000000,0.0000000,0.0000000); //
    SaintsPillars2[8] = CreateDynamicObject(18980,1178.4593500,-1341.9887700,1088.5749500,0.0000000,0.0000000,0.0000000); //
    for(new i = 0; i<=8; i++) SetDynamicObjectMaterial(SaintsPillars2[i], 0, 8678, "wddngchplgrnd01", "gnhotelwall02_128", 0);
    //PC Front
    new SaintsPCFront[3];
    SaintsPCFront[0] = CreateDynamicObject(2265,1176.0014600,-1321.5124500,1089.9611800,0.0000000,90.0000000,90.0000000); //
    SaintsPCFront[1] = CreateDynamicObject(2265,1176.1529500,-1327.6041300,1089.9611800,0.0000000,90.0000000,106.3090000); //
    for(new i = 0; i<=1; i++) SetDynamicObjectMaterial(SaintsPCFront[i], 0, 11631, "mp_ranchcut", "mpCJ_WOOD_DARK", 0xFF000000);
    for(new i = 0; i<=1; i++) SetDynamicObjectMaterial(SaintsPCFront[i], 1, 16150, "ufo_bar", "GEwhite1_64", 0xFF2A2A2A);
    //PC Back
    new SaintsPCBack[3];
    SaintsPCBack[0] = CreateDynamicObject(2265,1175.0280800,-1320.7922400,1089.9611800,0.0000000,90.0000000,-90.0000000); //
    SaintsPCBack[1] = CreateDynamicObject(2265,1175.0095200,-1327.1894500,1089.9611800,0.0000000,90.0000000,286.3089900); //
    for(new i = 0; i<=1; i++) SetDynamicObjectMaterial(SaintsPCBack[i], 0, 11631, "mp_ranchcut", "mpCJ_WOOD_DARK", 0xFF000000);
    for(new i = 0; i<=1; i++) SetDynamicObjectMaterial(SaintsPCBack[i], 1, 11631, "mp_ranchcut", "mpCJ_WOOD_DARK", 0xFF000000);
    //PC Legs
    new SaintsPCLegs[5];
    SaintsPCLegs[0] = CreateDynamicObject(2752,1175.4544700,-1321.1528300,1089.5898400,0.0000000,0.0000000,0.0000000); //
    SaintsPCLegs[1] = CreateDynamicObject(2752,1175.4458000,-1320.9907200,1089.8718300,90.0000000,0.0000000,0.0000000); //
    SaintsPCLegs[2] = CreateDynamicObject(2752,1175.5167200,-1327.4251700,1089.5898400,0.0000000,0.0000000,0.0000000); //
    SaintsPCLegs[3] = CreateDynamicObject(2752,1175.4803500,-1327.2680700,1089.8737800,90.0000000,0.0000000,16.3090000); //
    for(new i = 0; i<=3; i++) SetDynamicObjectMaterial(SaintsPCLegs[i], 0, 11631, "mp_ranchcut", "mpCJ_WOOD_DARK", 0xFF000000);
    //PC Holds
    new SaintsPCHolds[3];
    SaintsPCHolds[0] = CreateDynamicObject(2040,1175.4337200,-1321.1529500,1089.4753400,0.0000000,0.0000000,0.0000000); //
    SaintsPCHolds[1] = CreateDynamicObject(2040,1175.5063500,-1327.4227300,1089.4753400,0.0000000,0.0000000,16.3090000); //
    for(new i = 0; i<=1; i++) SetDynamicObjectMaterial(SaintsPCHolds[i], 0, 11631, "mp_ranchcut", "mpCJ_WOOD_DARK", 0xFF000000);
    //Keyboards
    new SaintsKeyboards[3];
    SaintsKeyboards[0] = CreateDynamicObject(1547,1175.8493700,-1321.1461200,1089.5656700,0.0000000,0.0000000,84.4600000); //
    SaintsKeyboards[1] = CreateDynamicObject(1547,1175.8382600,-1326.8830600,1089.5656700,0.0000000,0.0000000,92.4930000); //
    for(new i = 0; i<=1; i++) SetDynamicObjectMaterialText(SaintsKeyboards[i], 0, "cccccccccccccccccc\ncccccccccccccccccc\nccccccccccccccccc\nccccccccccccccccc\nccccccccccccccccc", OBJECT_MATERIAL_SIZE_256x128, "webdings", 18, 1, 0xFFFFFFFF, 0xFF000000, OBJECT_MATERIAL_TEXT_ALIGN_CENTER);
    //Hallway
    new SaintsHallway;
    SaintsHallway = CreateDynamicObject(14425,1149.2067900,-1301.8315400,1085.9050300,0.0000000,0.0000000,0.0000000); //
    SetDynamicObjectMaterial(SaintsHallway, 0, 6095, "shops01_law", "hotwall1_law", 0);//Side tiles
    SetDynamicObjectMaterial(SaintsHallway, 3, 14430, "dr_gsnew", "mp_cloth_subwall", 0);//Around the doors
    SetDynamicObjectMaterial(SaintsHallway, 4, 8678, "wddngchplgrnd01", "gnhotelwall02_128", 0);//Walls
    SetDynamicObjectMaterial(SaintsHallway, 5, 13007, "sw_bankint", "woodfloor1", 0);//Floor middle
    SetDynamicObjectMaterial(SaintsHallway, 6, 11301, "carshow_sfse", "ws_officy_ceiling", 0);//Ceiling
    //Hallways door frames
    new SaintsHallwayDoorFrames[8];
    SaintsHallwayDoorFrames[0] = CreateDynamicObject(19385,1173.3564500,-1303.2366900,1090.3200700,0.0000000,0.0000000,0.0000000); //
    SaintsHallwayDoorFrames[1] = CreateDynamicObject(19385,1173.3564500,-1291.2686800,1090.3200700,0.0000000,0.0000000,0.0000000); //
    SaintsHallwayDoorFrames[2] = CreateDynamicObject(19385,1173.3564500,-1279.2806400,1090.3200700,0.0000000,0.0000000,0.0000000); //
    SaintsHallwayDoorFrames[3] = CreateDynamicObject(19385,1179.5885000,-1299.2490200,1090.3200700,0.0000000,0.0000000,0.0000000); //
    SaintsHallwayDoorFrames[4] = CreateDynamicObject(19385,1179.5885000,-1287.2531700,1090.3200700,0.0000000,0.0000000,0.0000000); //
    SaintsHallwayDoorFrames[5] = CreateDynamicObject(19385,1179.6932400,-1311.2753900,1090.1821300,0.0000000,0.0000000,0.0000000); //
    SaintsHallwayDoorFrames[6] = CreateDynamicObject(19385,1179.6951900,-1311.3033400,1090.3200700,0.0000000,0.0000000,0.0000000); //
    for(new i = 0; i<=6; i++) SetDynamicObjectMaterial(SaintsHallwayDoorFrames[i], 0, 14430, "dr_gsnew", "mp_cloth_subwall", 0);
    //Doors
    new SaintsDoors[9];
    SaintsDoors[0] = CreateDynamicObject(1502,1177.6279300,-1347.2807600,1092.8697500,0.0000000,0.0000000,90.0000000); //
    SaintsDoors[1] = CreateDynamicObject(1502,1177.6279300,-1355.6547900,1092.8697500,0.0000000,0.0000000,90.0000000); //
    SaintsDoors[2] = CreateDynamicObject(1502,1184.6506300,-1349.2126500,1092.8697500,0.0000000,0.0000000,90.0000000); //
    SaintsDoors[3] = CreateDynamicObject(1502,1179.6090100,-1287.9998800,1088.5462600,0.0000000,0.0000000,90.0000000); //
    SaintsDoors[4] = CreateDynamicObject(1502,1179.6090100,-1300.0019500,1088.5462600,0.0000000,0.0000000,90.0000000); //
    SaintsDoors[5] = CreateDynamicObject(1502,1173.3835400,-1303.9826700,1088.5462600,0.0000000,0.0000000,90.0000000); //
    SaintsDoors[6] = CreateDynamicObject(1502,1173.3835400,-1292.0186800,1088.5462600,0.0000000,0.0000000,90.0000000); //
    SaintsDoors[7] = CreateDynamicObject(1502,1173.3835400,-1280.0305200,1088.5462600,0.0000000,0.0000000,90.0000000); //
    for(new i = 0; i<=7; i++) SetDynamicObjectMaterial(SaintsDoors[i], 1, 11390, "hubint2", "GEwhite1_64", 0);
    //Room walls
    new SaintsRoomWalls[8];
    SaintsRoomWalls[0] = CreateDynamicObject(19377,1183.8785400,-1294.9152800,1088.5734900,0.0000000,0.0000000,90.0000000); //
    SaintsRoomWalls[1] = CreateDynamicObject(19377,1184.5284400,-1284.5520000,1088.5734900,0.0000000,0.0000000,90.0000000); //
    SaintsRoomWalls[2] = CreateDynamicObject(19377,1168.5756800,-1282.5808100,1088.5734900,0.0000000,0.0000000,90.0000000); //
    SaintsRoomWalls[3] = CreateDynamicObject(19377,1168.6793200,-1294.3774400,1088.5734900,0.0000000,0.0000000,90.0000000); //
    SaintsRoomWalls[4] = CreateDynamicObject(19377,1168.5474900,-1309.2171600,1088.5734900,0.0000000,0.0000000,90.0000000); //
    SaintsRoomWalls[5] = CreateDynamicObject(19377,1168.5919200,-1276.2182600,1088.5734900,0.0000000,0.0000000,90.0000000); //
    for(new i = 0; i<=5; i++) SetDynamicObjectMaterial(SaintsRoomWalls[i], 0, 8678, "wddngchplgrnd01", "gnhotelwall02_128", 0);
    //Hallway end wall
    new SaintsHallwayEnd;
    SaintsHallwayEnd = CreateDynamicObject(19381,1177.5813000,-1273.3315400,1089.9334700,0.0000000,0.0000000,90.0000000); //
    SetDynamicObjectMaterial(SaintsHallwayEnd, 0, 8678, "wddngchplgrnd01", "gnhotelwall02_128", 0);
    //Staff wall
    new SaintsStaffWall[12];
    SaintsStaffWall[0] = CreateDynamicObject(19376,1177.0400400,-1341.6765100,1092.0999800,0.0000000,0.0000000,90.0000000); //
    SaintsStaffWall[1] = CreateDynamicObject(19376,1183.1345200,-1338.4200400,1092.0999800,0.0000000,0.0000000,90.0000000); //
    SaintsStaffWall[2] = CreateDynamicObject(19376,1184.6563700,-1342.7985800,1092.0999800,0.0000000,0.0000000,0.0000000); //
    SaintsStaffWall[3] = CreateDynamicObject(19376,1176.9427500,-1344.9790000,1092.0999800,0.0000000,0.0000000,90.0000000); //
    SaintsStaffWall[4] = CreateDynamicObject(19376,1172.9237100,-1350.7181400,1092.0999800,0.0000000,0.0000000,90.0000000); //
    SaintsStaffWall[5] = CreateDynamicObject(19376,1184.6563700,-1354.1025400,1092.0999800,0.0000000,0.0000000,0.0000000); //
    SaintsStaffWall[6] = CreateDynamicObject(19376,1184.6584500,-1347.4025900,1100.6300000,0.0000000,0.0000000,0.0000000); //
    SaintsStaffWall[7] = CreateDynamicObject(19376,1172.4909700,-1346.5866700,1087.3029800,0.0000000,0.0000000,0.0000000); //
    SaintsStaffWall[8] = CreateDynamicObject(19450,1178.3863500,-1336.7630600,1093.0378400,90.0000000,0.0000000,0.0000000); //
    SaintsStaffWall[9] = CreateDynamicObject(19450,1181.7124000,-1343.2813700,1093.0378400,90.0000000,0.0000000,0.0000000); //
    SaintsStaffWall[10] = CreateDynamicObject(19450,1177.7076400,-1340.4937700,1096.0717800,90.0000000,0.0000000,0.0000000); //
    for(new i = 0; i<=10; i++) SetDynamicObjectMaterial(SaintsStaffWall[i], 0, 8496, "lowbuild03_lvs", "vgshopwall05_64", 0);
    //Staff Wall 2
    new SaintsStaffWalls[8];
    SaintsStaffWalls[0] = CreateDynamicObject(4199,1166.7298600,-1357.3662100,1094.8745100,0.0000000,0.0000000,180.0000000); //
    SaintsStaffWalls[1] = CreateDynamicObject(4199,1170.7906500,-1361.9917000,1094.8745100,0.0000000,0.0000000,-90.0000000); //
    SaintsStaffWalls[2] = CreateDynamicObject(4199,1200.2656300,-1356.2915000,1094.8745100,0.0000000,0.0000000,-90.0000000); //
    SaintsStaffWalls[3] = CreateDynamicObject(4199,1200.4854700,-1338.6317100,1094.8745100,0.0000000,0.0000000,90.0000000); //
    SaintsStaffWalls[4] = CreateDynamicObject(4199,1200.6190200,-1343.2734400,1094.8745100,0.0000000,0.0000000,0.0000000); //
    SaintsStaffWalls[5] = CreateDynamicObject(4199,1162.2938200,-1350.3945300,1089.8344700,0.0000000,0.0000000,180.0000000); //
    SaintsStaffWalls[6] = CreateDynamicObject(4199,1162.8772000,-1350.5960700,1089.8344700,0.0000000,0.0000000,-90.0000000); //
    for(new i = 0; i<=6; i++) SetDynamicObjectMaterial(SaintsStaffWalls[i], 1, 6095, "shops01_law", "GB_chatwall03b", 0);
    //Staff Ceiling
    new SaintsStaffCeil[4];
    SaintsStaffCeil[0] = CreateDynamicObject(18981,1178.3054200,-1344.4759500,1096.9713100,0.0000000,90.0000000,0.0000000); //
    SaintsStaffCeil[1] = CreateDynamicObject(18981,1165.2935800,-1347.1109600,1092.1473400,0.0000000,90.0000000,0.0000000); //
    SaintsStaffCeil[2] = CreateDynamicObject(18981,1203.3033400,-1344.4759500,1096.9713100,0.0000000,90.0000000,0.0000000); //
    for(new i = 0; i<=2; i++) SetDynamicObjectMaterial(SaintsStaffCeil[i], 0, 3975, "lanbloke", "ceiling_256", 0);
    //Staff door blocks
    new SaintsStaffDoorBlocks[3];
    SaintsStaffDoorBlocks[0] = CreateDynamicObject(18764,1186.9035600,-1353.7755100,1094.9997600,0.0000000,0.0000000,0.0000000); //
    SaintsStaffDoorBlocks[1] = CreateDynamicObject(18764,1183.0014600,-1358.7003200,1094.9997600,0.0000000,0.0000000,0.0000000); //
    for(new i = 0; i<=1; i++) SetDynamicObjectMaterial(SaintsStaffDoorBlocks[i], 0, 8396, "sphinx01", "luxorceiling01_128", 0);
    //Shower wall
    new SaintsShowerWall;
    SaintsShowerWall = CreateDynamicObject(19375,1192.2337600,-1343.9447000,1092.8701200,0.0000000,0.0000000,0.0000000); //
    SetDynamicObjectMaterial(SaintsShowerWall, 0, 16150, "ufo_bar", "offwhitebrix", 0);
    //Shower floor
    new SaintsShowerFloor;
    SaintsShowerFloor = CreateDynamicObject(19377,1197.4167500,-1345.9106400,1092.7861300,0.0000000,90.0000000,0.0000000); //
    SetDynamicObjectMaterial(SaintsShowerFloor, 0, 8390, "vegasemulticar", "Bow_sub_walltiles", 0);
    //Poles
    new SaintsPoles[7];
    SaintsPoles[0] = CreateDynamicObject(16101,1177.6193800,-1347.3497300,1092.8690200,0.0000000,0.0000000,0.0000000); //
    SaintsPoles[1] = CreateDynamicObject(16101,1177.6193800,-1345.6737100,1092.8690200,0.0000000,0.0000000,0.0000000); //
    SaintsPoles[2] = CreateDynamicObject(16101,1177.6193800,-1354.0477300,1092.8690200,0.0000000,0.0000000,0.0000000); //
    SaintsPoles[3] = CreateDynamicObject(16101,1177.6193800,-1355.7237500,1092.8690200,0.0000000,0.0000000,0.0000000); //
    SaintsPoles[4] = CreateDynamicObject(16101,1184.6337900,-1347.6224400,1092.8690200,0.0000000,0.0000000,0.0000000); //
    SaintsPoles[5] = CreateDynamicObject(16101,1184.6337900,-1349.2784400,1092.8690200,0.0000000,0.0000000,0.0000000); //
    for(new i = 0; i<=5; i++) SetDynamicObjectMaterial(SaintsPoles[i], 0, 9098, "vgesvhouse01", "black32", 0);
    //Staff stair
    new SaintsStaffStair;
    SaintsStaffStair = CreateDynamicObject(14395,1181.5526100,-1341.4909700,1090.7088600,0.0000000,0.0000000,-90.0000000); //
    SetDynamicObjectMaterial(SaintsStaffStair, 1, 6095, "shops01_law", "hotwall1_law", 0);
    //Room 1
    new SaintsRoom1;
    SaintsRoom1 = CreateDynamicObject(14430,1149.2099600,-1301.8297100,1085.9050300,0.0000000,0.0000000,0.0000000); //
    SetDynamicObjectMaterial(SaintsRoom1, 5, 10871, "blacksky_sfse", "ws_slatetiles", 0);
    SetDynamicObjectMaterial(SaintsRoom1, 1, 13007, "sw_bankint", "woodfloor1", 0);
    //Room 2
    new SaintsRoom2;
    SaintsRoom2 = CreateDynamicObject(14431,1149.2113000,-1301.8299600,1085.9050300,0.0000000,0.0000000,0.0000000); //
    SetDynamicObjectMaterial(SaintsRoom2, 5, 10871, "blacksky_sfse", "ws_slatetiles", 0);
    SetDynamicObjectMaterial(SaintsRoom2, 1, 13007, "sw_bankint", "woodfloor1", 0);
    //Room 3
    new SaintsRoom3;
    SaintsRoom3 = CreateDynamicObject(14427,1149.2103300,-1301.8324000,1085.9050300,0.0000000,0.0000000,0.0000000); //
    SetDynamicObjectMaterial(SaintsRoom3, 6, 10871, "blacksky_sfse", "ws_slatetiles", 0);
    SetDynamicObjectMaterial(SaintsRoom3, 2, 13007, "sw_bankint", "woodfloor1", 0);
    //Room 4
    new SaintsRoom4;
    SaintsRoom4 = CreateDynamicObject(14429,1149.2032500,-1301.8302000,1085.9050300,0.0000000,0.0000000,0.0000000); //
    SetDynamicObjectMaterial(SaintsRoom4, 5, 10871, "blacksky_sfse", "ws_slatetiles", 0);
    SetDynamicObjectMaterial(SaintsRoom4, 1, 13007, "sw_bankint", "woodfloor1", 0);
    //Room 5
    new SaintsRoom5;
    SaintsRoom5 = CreateDynamicObject(14426,1149.2032500,-1301.8324000,1085.9051500,0.0000000,0.0000000,0.0000000); //
    SetDynamicObjectMaterial(SaintsRoom5, 6, 10871, "blacksky_sfse", "ws_slatetiles", 0);
    SetDynamicObjectMaterial(SaintsRoom5, 2, 13007, "sw_bankint", "woodfloor1", 0);
    //All
    new SaintsAll;
    SaintsAll = CreateDynamicObject(19357,1179.7796600,-1323.079900,1092.0964400,0.0000000,0.0000000,0.0000000); //
    SetDynamicObjectMaterialText(SaintsAll, 0, "All", OBJECT_MATERIAL_SIZE_256x128, "Tahoma", 50, 1, 0xFF937960, 0x00000000, OBJECT_MATERIAL_TEXT_ALIGN_CENTER);
    //Saints
    new SaintsSaints;
    SaintsSaints = CreateDynamicObject(19357,1179.7817400,-1324.925900,1092.0964400,0.0000000,0.0000000,0.0000000); //
    SetDynamicObjectMaterialText(SaintsSaints, 0, "Saints", OBJECT_MATERIAL_SIZE_256x128, "Tahoma", 50, 1, 0xFF937960, 0x00000000, OBJECT_MATERIAL_TEXT_ALIGN_CENTER);
    //Hospital
    new SaintsHospital;
    SaintsHospital = CreateDynamicObject(19358,1179.7777100,-1324.2060500,1090.827600,0.0000000,0.0000000,0.0000000); //
    SetDynamicObjectMaterialText(SaintsHospital, 0, "Hospital", OBJECT_MATERIAL_SIZE_256x128, "Arial Black", 50, 1, 0xFF999999, 0x00000000, OBJECT_MATERIAL_TEXT_ALIGN_CENTER);
    //ASH Plan
    new SaintsASHPlan;
    SaintsASHPlan = CreateDynamicObject(1547,1171.3352100,-1334.5792200,1091.1584500,90.0000000,0.0000000,180.0000000); //
    SetDynamicObjectMaterialText(SaintsASHPlan, 0, "ASH Plan", OBJECT_MATERIAL_SIZE_256x128, "Comic Sans MS,", 40, 1, 0xFFFFFFFF, 0xFF4B63C0, OBJECT_MATERIAL_TEXT_ALIGN_CENTER);
    //Signature
    new SaintsSignature;
    SaintsSignature = CreateDynamicObject(1547,1171.3352100,-1334.5792200,1090.0334500,90.0000000,0.0000000,180.0000000); //
    SetDynamicObjectMaterialText(SaintsSignature, 0, "Architect: Nate", OBJECT_MATERIAL_SIZE_256x128, "Comic Sans MS,", 25, 1, 0xFFFFFFFF, 0x00000000, OBJECT_MATERIAL_TEXT_ALIGN_CENTER);
    //Rest of the stuff
    CreateDynamicObject(1569,1166.8764600,-1325.9160200,1088.5753200,0.0000000,0.0000000,90.0000000); //
    CreateDynamicObject(1569,1166.8741500,-1322.9158900,1088.5753200,0.0000000,0.0000000,-90.0000000); //
    CreateDynamicObject(1533,1175.0307600,-1313.4649700,1088.5759300,0.0000000,0.0000000,90.0000000); //
    CreateDynamicObject(1533,1177.9239500,-1311.9460400,1088.5759300,0.0000000,0.0000000,-90.0000000); //
    CreateDynamicObject(14485,1149.2037400,-1301.8481400,1085.9050300,0.0000000,0.0000000,0.0000000); //
    CreateDynamicObject(19325,1177.6536900,-1350.6965300,1093.3208000,0.0000000,0.0000000,0.0000000); //
    CreateDynamicObject(19325,1177.6536900,-1342.2645300,1093.3208000,0.0000000,0.0000000,0.0000000); //
    CreateDynamicObject(19325,1177.6536900,-1348.3864700,1097.4448200,0.0000000,0.0000000,0.0000000); //
    CreateDynamicObject(19325,1181.5628700,-1379.2095900,1093.3208000,0.0000000,0.0000000,0.0000000); //
    CreateDynamicObject(19325,1177.6536900,-1355.0284400,1097.4448200,0.0000000,0.0000000,0.0000000); //
    CreateDynamicObject(1533,1184.3729200,-1351.7446300,1092.8685300,0.0000000,0.0000000,-90.0000000); //
    CreateDynamicObject(1533,1184.3729200,-1353.2436500,1092.8685300,0.0000000,0.0000000,-90.0000000); //
    CreateDynamicObject(3657,1167.3775600,-1317.8048100,1089.0922900,0.0000000,0.0000000,90.0000000); //
    CreateDynamicObject(3657,1167.3775600,-1330.7647700,1089.0922900,0.0000000,0.0000000,90.0000000); //
    CreateDynamicObject(626,1167.9726600,-1314.5943600,1090.6010700,0.0000000,0.0000000,0.0000000); //
    CreateDynamicObject(626,1168.0189200,-1333.7392600,1090.6010700,0.0000000,0.0000000,0.0000000); //
    CreateDynamicObject(932,1171.9134500,-1314.3011500,1088.5737300,0.0000000,0.0000000,22.1600000); //
    CreateDynamicObject(932,1172.9039300,-1314.0550500,1088.5737300,0.0000000,0.0000000,0.2770000); //
    CreateDynamicObject(932,1173.6832300,-1314.0908200,1088.5737300,0.0000000,0.0000000,-4.1550000); //
    CreateDynamicObject(1671,1177.2791700,-1327.4327400,1089.0293000,0.0000000,0.0000000,-82.9710000); //
    CreateDynamicObject(1671,1177.3501000,-1320.8906300,1089.0293000,0.0000000,0.0000000,-88.9350000); //
    CreateDynamicObject(2164,1179.6673600,-1327.3512000,1088.5749500,0.0000000,0.0000000,-90.0000000); //
    CreateDynamicObject(2161,1179.6634500,-1322.4652100,1088.5765400,0.0000000,0.0000000,-90.0000000); //
    CreateDynamicObject(2609,1179.2058100,-1326.4709500,1089.3046900,0.0000000,0.0000000,-96.6000000); //
    CreateDynamicObject(2609,1179.2188700,-1325.7901600,1089.3046900,0.0000000,0.0000000,-85.5120000); //
    CreateDynamicObject(1776,1170.2410900,-1313.9821800,1089.6671100,0.0000000,0.0000000,0.0000000); //
    CreateDynamicObject(3111,1170.9423800,-1334.5747100,1090.6875000,90.0000000,0.0000000,180.0000000); //
    CreateDynamicObject(3657,1178.6221900,-1303.5223400,1089.0922900,0.0000000,0.0000000,-90.0000000); //
    CreateDynamicObject(3657,1178.6159700,-1293.6206100,1089.0922900,0.0000000,0.0000000,-90.0000000); //
    CreateDynamicObject(2878,1179.6767600,-1312.0056200,1089.7440200,0.0000000,0.0000000,90.0000000); //
    CreateDynamicObject(1997,1175.0134300,-1275.4217500,1088.5789800,0.0000000,0.0000000,46.0000000); //
    CreateDynamicObject(2994,1174.4412800,-1297.1251200,1089.0776400,0.0000000,0.0000000,8.0400000); //
    CreateDynamicObject(2830,1174.4827900,-1297.1466100,1089.4520300,0.0000000,0.0000000,0.0000000); //
    CreateDynamicObject(3657,1174.3823200,-1286.2175300,1089.0922900,0.0000000,0.0000000,90.0000000); //
    CreateDynamicObject(2267,1174.0008500,-1295.1571000,1091.0655500,0.0000000,0.0000000,90.0000000); //
    CreateDynamicObject(2267,1174.0028100,-1295.1551500,1091.0456500,0.0000000,0.0000000,90.0000000); //
    CreateDynamicObject(18644,1173.9672900,-1295.1090100,1090.6230500,0.0000000,90.0000000,0.0000000); //
    CreateDynamicObject(932,1178.5717800,-1274.6438000,1088.5793500,0.0000000,0.0000000,-15.7080000); //
    CreateDynamicObject(1796,1165.9304200,-1279.9101600,1088.5793500,0.0000000,0.0000000,0.0000000); //
    CreateDynamicObject(1796,1168.6153600,-1279.8292200,1088.5793500,0.0000000,0.0000000,0.0000000); //
    CreateDynamicObject(1796,1168.6923800,-1281.9429900,1088.5793500,0.0000000,0.0000000,90.0000000); //
    CreateDynamicObject(1997,1186.7081300,-1288.6622300,1088.5800800,0.0000000,0.0000000,-90.0000000); //
    CreateDynamicObject(2069,1180.2147200,-1288.8791500,1088.5922900,0.0000000,0.0000000,0.0000000); //
    CreateDynamicObject(2167,1182.2192400,-1284.6782200,1088.5797100,0.0000000,0.0000000,0.0000000); //
    CreateDynamicObject(1796,1186.6295200,-1288.1604000,1088.5793500,0.0000000,0.0000000,0.0000000); //
    CreateDynamicObject(1796,1184.2896700,-1288.1754200,1088.5793500,0.0000000,0.0000000,0.0000000); //
    CreateDynamicObject(1997,1172.0587200,-1281.6637000,1088.5800800,0.0000000,0.0000000,-90.0000000); //
    CreateDynamicObject(2167,1171.2386500,-1276.3522900,1088.5797100,0.0000000,0.0000000,0.0000000); //
    CreateDynamicObject(2069,1172.6778600,-1276.8931900,1088.5922900,0.0000000,0.0000000,0.0000000); //
    CreateDynamicObject(3383,1184.2983400,-1299.0584700,1088.5803200,0.0000000,0.0000000,0.0000000); //
    CreateDynamicObject(2518,1165.6977500,-1304.5550500,1088.6429400,0.0000000,0.0000000,90.0000000); //
    CreateDynamicObject(2167,1173.1535600,-1307.7719700,1088.5800800,0.0000000,0.0000000,-90.0000000); //
    CreateDynamicObject(3384,1185.5694600,-1295.5997300,1089.9881600,0.0000000,0.0000000,90.0000000); //
    CreateDynamicObject(3388,1184.4335900,-1295.3322800,1088.5799600,0.0000000,0.0000000,90.0000000); //
    CreateDynamicObject(1796,1165.6551500,-1292.2692900,1088.5793500,0.0000000,0.0000000,0.0000000); //
    CreateDynamicObject(1796,1167.5714100,-1292.2877200,1088.5793500,0.0000000,0.0000000,0.0000000); //
    CreateDynamicObject(2167,1171.1904300,-1288.8204300,1088.5797100,0.0000000,0.0000000,0.0000000); //
    CreateDynamicObject(1997,1172.1108400,-1293.5612800,1088.5800800,0.0000000,0.0000000,-90.0000000); //
    CreateDynamicObject(2069,1166.7058100,-1289.0656700,1088.5922900,0.0000000,0.0000000,0.0000000); //
    CreateDynamicObject(3383,1169.1610100,-1306.4737500,1088.5803200,0.0000000,0.0000000,0.0000000); //
    CreateDynamicObject(3388,1167.4810800,-1301.1674800,1088.5799600,0.0000000,0.0000000,90.0000000); //
    CreateDynamicObject(3384,1168.6068100,-1301.4753400,1089.9881600,0.0000000,0.0000000,90.0000000); //
    CreateDynamicObject(2167,1179.7933300,-1296.3538800,1088.5800800,0.0000000,0.0000000,90.0000000); //
    CreateDynamicObject(2518,1187.2662400,-1296.0520000,1088.6429400,0.0000000,0.0000000,-90.0000000); //
    CreateDynamicObject(18757,1170.2200900,-1343.0122100,1090.4968300,0.0000000,0.0000000,90.0000000); //
    CreateDynamicObject(18756,1170.2159400,-1343.0128200,1090.4968300,0.0000000,0.0000000,90.0000000); //
    CreateDynamicObject(2737,1175.2291300,-1341.5446800,1090.1619900,0.0000000,0.0000000,180.0000000); //
    CreateDynamicObject(1721,1179.5620100,-1345.2747800,1092.8691400,0.0000000,0.0000000,180.0000000); //
    CreateDynamicObject(1721,1180.1500200,-1345.2747800,1092.8691400,0.0000000,0.0000000,180.0000000); //
    CreateDynamicObject(1721,1178.9740000,-1345.2747800,1092.8691400,0.0000000,0.0000000,180.0000000); //
    CreateDynamicObject(2609,1182.9677700,-1355.8144500,1093.5976600,0.0000000,0.0000000,184.4620100); //
    CreateDynamicObject(2609,1182.4405500,-1355.7893100,1093.5976600,0.0000000,0.0000000,175.1499900); //
    CreateDynamicObject(1533,1182.0843500,-1356.1857900,1092.8685300,0.0000000,0.0000000,180.0000000); //
    CreateDynamicObject(1808,1181.5081800,-1345.4317600,1092.8697500,0.0000000,0.0000000,0.0000000); //
    CreateDynamicObject(1533,1172.3774400,-1342.8437500,1088.5772700,0.0000000,0.0000000,-90.0000000); //
    CreateDynamicObject(1209,1168.3566900,-1340.1713900,1088.5769000,0.0000000,0.0000000,90.0000000); //
    CreateDynamicObject(1703,1169.9270000,-1335.4493400,1088.5773900,0.0000000,0.0000000,-0.4800000); //
    CreateDynamicObject(1703,1169.1716300,-1338.3469200,1088.5773900,0.0000000,0.0000000,96.1800600); //
    CreateDynamicObject(1819,1172.4860800,-1336.1401400,1088.5770300,0.0000000,0.0000000,0.0000000); //
    CreateDynamicObject(2816,1172.9935300,-1335.6335400,1089.0733600,0.0000000,0.0000000,0.0000000); //
    CreateDynamicObject(2010,1168.7529300,-1335.2904100,1088.5761700,0.0000000,0.0000000,0.0000000); //
    CreateDynamicObject(2010,1173.3387500,-1341.2462200,1088.5761700,0.0000000,0.0000000,0.0000000); //
    CreateDynamicObject(14782,1187.8775600,-1344.7911400,1093.8636500,0.0000000,0.0000000,0.0000000); //
    CreateDynamicObject(14782,1187.8714600,-1350.0474900,1093.8636500,0.0000000,0.0000000,180.0000000); //
    CreateDynamicObject(14842,1193.1975100,-1346.1995800,1094.5345500,0.0000000,0.0000000,0.0000000); //
    CreateDynamicObject(14401,1189.5771500,-1348.1181600,1092.8703600,0.0000000,0.0000000,-90.0000000); //
    CreateDynamicObject(2372,1191.4520300,-1347.2491500,1092.8704800,0.0000000,0.0000000,90.0000000); //
    CreateDynamicObject(2372,1188.9019800,-1347.2491500,1092.8704800,0.0000000,0.0000000,90.0000000); //
    CreateDynamicObject(2686,1184.7695300,-1347.2356000,1094.1062000,0.0000000,0.0000000,90.0000000); //
    CreateDynamicObject(2688,1188.8342300,-1344.4831500,1094.4085700,0.0000000,0.0000000,0.0000000); //
    CreateDynamicObject(2687,1183.0755600,-1338.5330800,1092.4199200,0.0000000,0.0000000,0.0000000); //
    CreateDynamicObject(2169,1174.5461400,-1351.3378900,1092.8702400,0.0000000,0.0000000,-90.0000000); //
    CreateDynamicObject(1714,1172.7973600,-1347.9200400,1092.8703600,0.0000000,0.0000000,92.1390300); //
    CreateDynamicObject(1715,1176.2918700,-1351.5789800,1092.8700000,0.0000000,0.0000000,-78.0020000); //
    CreateDynamicObject(2601,1174.4038100,-1350.9887700,1093.7363300,0.0000000,0.0000000,0.0000000); //
    CreateDynamicObject(19325,1177.6536900,-1359.1204800,1093.3208000,0.0000000,0.0000000,0.0000000); //
    CreateDynamicObject(2164,1172.5813000,-1355.6958000,1092.8703600,0.0000000,0.0000000,90.0000000); //
    CreateDynamicObject(2204,1176.4147900,-1356.1377000,1092.8701200,0.0000000,0.0000000,180.0000000); //
    CreateDynamicObject(19330,1188.3566900,-1350.2259500,1094.9860800,0.0000000,-90.0000000,17.3740000); //
    CreateDynamicObject(2256,1172.5396700,-1352.9068600,1094.6909200,0.0000000,0.0000000,90.0000000); //
    CreateDynamicObject(2202,1176.4841300,-1350.1268300,1092.8704800,0.0000000,0.0000000,180.0000000); //
    CreateDynamicObject(2173,1174.3223900,-1347.3895300,1092.8709700,0.0000000,0.0000000,-90.0000000); //
    CreateDynamicObject(1714,1172.9866900,-1351.8341100,1092.8703600,0.0000000,0.0000000,75.2190000); //
    CreateDynamicObject(2173,1174.3223900,-1347.3895300,1092.8709700,0.0000000,0.0000000,-90.0000000); //
    CreateDynamicObject(1715,1176.1696800,-1348.4805900,1092.8700000,0.0000000,0.0000000,-111.0019600); //
    CreateDynamicObject(2167,1172.5573700,-1345.6745600,1092.8707300,0.0000000,0.0000000,90.0000000); //
    CreateDynamicObject(2164,1174.2489000,-1350.5504200,1092.8703600,0.0000000,0.0000000,180.0000000); //
    CreateDynamicObject(630,1176.8392300,-1345.5925300,1093.8667000,0.0000000,0.0000000,0.0000000); //
    CreateDynamicObject(14438,1179.3369100,-1292.3758500,1095.9480000,0.0000000,0.0000000,90.0000000); //
    CreateDynamicObject(14438,1191.4249300,-1300.6521000,1094.1929900,0.0000000,0.0000000,0.0000000); //
    CreateDynamicObject(14438,1191.7176500,-1283.6324500,1094.1929900,0.0000000,0.0000000,0.0000000); //
    CreateDynamicObject(14438,1161.1132800,-1275.8077400,1094.1929900,0.0000000,0.0000000,0.0000000); //
    CreateDynamicObject(14438,1161.0011000,-1288.2436500,1094.1929900,0.0000000,0.0000000,0.0000000); //
    CreateDynamicObject(14438,1160.3817100,-1302.0935100,1094.1929900,0.0000000,0.0000000,0.0000000); //
    CreateDynamicObject(14438,1165.2966300,-1324.2414600,1095.3630400,0.0000000,0.0000000,0.0000000); //
    CreateDynamicObject(14441,1179.7852800,-1347.1763900,1096.4679000,0.0000000,0.0000000,0.0000000); //
	//All Saints exterior, credits to Nate (Jayden Riggs)
    //Main <-----------Remade as CreateObject
    new AllSaintsMain;
    AllSaintsMain = CreateObject(5708,1134.2500000,-1338.0781300,23.1563000,0.0000000,0.0000000,0.0000000, 300.0); //
    SetObjectMaterial(AllSaintsMain, 10, 4010, "lanblokb2", "sl_lavicdtwall1", 0);//Walls
    SetObjectMaterial(AllSaintsMain, 9, 13746, "lahillshilhs1z", "ws_stationfloor", 0);//Frindge around the grass yard
    SetObjectMaterial(AllSaintsMain, 7, 8664, "casnorylgrnd", "ws_floortiles4", 0);//Pavement/Pedwalk or w/s/e
    SetObjectMaterial(AllSaintsMain, 6, 6052, "law_doontoon", "sf_window_mod1", 0);//Side windows
    SetObjectMaterial(AllSaintsMain, 3, 9900, "pointysfe", "ws_trans_window1", 0);//Front lower windows
    SetObjectMaterial(AllSaintsMain, 2, 9169, "vgslowbuild", "marinawindow1_256", 0);//Front Main windows
    SetObjectMaterial(AllSaintsMain, 0, 5735, "studio01_lawn", "Grass_128HV", 0);//Grass
    //Walls
    new AllSaintsFDWalls[14];
    AllSaintsFDWalls[0] = CreateDynamicObject(19377,1145.8793900,-1311.1214600,12.6080000,0.0000000,0.0000000,90.0000000); //
    AllSaintsFDWalls[1] = CreateDynamicObject(19377,1136.2493900,-1311.1214600,12.6080000,0.0000000,0.0000000,90.0000000); //
    AllSaintsFDWalls[2] = CreateDynamicObject(19377,1126.6193800,-1311.1214600,12.6080000,0.0000000,0.0000000,90.0000000); //
    AllSaintsFDWalls[3] = CreateDynamicObject(19377,1121.5373500,-1311.1235400,12.6080000,0.0000000,0.0000000,90.0000000); //
    AllSaintsFDWalls[4] = CreateDynamicObject(19377,1116.8184800,-1306.3746300,12.6080000,0.0000000,0.0000000,0.0000000); //
    AllSaintsFDWalls[5] = CreateDynamicObject(19377,1116.8165300,-1297.1186500,12.6080000,0.0000000,0.0000000,0.0000000); //
    AllSaintsFDWalls[6] = CreateDynamicObject(19377,1149.9793700,-1306.3009000,12.6080000,0.0000000,0.0000000,0.0000000); //
    AllSaintsFDWalls[7] = CreateDynamicObject(19377,1149.9774200,-1297.1186500,12.6080000,0.0000000,0.0000000,0.0000000); //
    AllSaintsFDWalls[8] = CreateDynamicObject(19454,1149.4492200,-1292.8739000,13.0415000,90.0000000,90.0000000,0.0000000); //
    AllSaintsFDWalls[9] = CreateDynamicObject(19454,1139.7772200,-1292.8739000,13.0415000,90.0000000,90.0000000,0.0000000); //
    AllSaintsFDWalls[10] = CreateDynamicObject(19454,1130.1121800,-1292.8739000,13.0415000,90.0000000,90.0000000,0.0000000); //
    AllSaintsFDWalls[11] = CreateDynamicObject(19454,1120.4552000,-1292.8739000,13.0415000,90.0000000,90.0000000,0.0000000); //
    AllSaintsFDWalls[12] = CreateDynamicObject(19454,1118.4571500,-1292.8758500,13.0415000,90.0000000,90.0000000,0.0000000); //
    for(new i = 0; i<=12; i++) SetDynamicObjectMaterial(AllSaintsFDWalls[i], 0, 4010, "lanblokb2", "sl_lavicdtwall1", 0);
    //Roof
    new AllSaintsFDRoof[9];
    AllSaintsFDRoof[0] = CreateDynamicObject(19378,1121.5373500,-1297.1186500,17.7790000,0.0000000,90.0000000,0.0000000); //
    AllSaintsFDRoof[1] = CreateDynamicObject(19378,1132.0253900,-1297.1186500,17.7790000,0.0000000,90.0000000,0.0000000); //
    AllSaintsFDRoof[2] = CreateDynamicObject(19378,1142.5194100,-1297.1186500,17.7790000,0.0000000,90.0000000,0.0000000); //
    AllSaintsFDRoof[3] = CreateDynamicObject(19378,1153.0134300,-1297.1186500,17.7790000,0.0000000,90.0000000,0.0000000); //
    AllSaintsFDRoof[4] = CreateDynamicObject(19378,1121.5394300,-1306.5085400,17.7770000,0.0000000,90.0000000,0.0000000); //
    AllSaintsFDRoof[5] = CreateDynamicObject(19378,1132.0253900,-1306.5085400,17.7770000,0.0000000,90.0000000,0.0000000); //
    AllSaintsFDRoof[6] = CreateDynamicObject(19378,1142.5194100,-1306.5065900,17.7770000,0.0000000,90.0000000,0.0000000); //
    AllSaintsFDRoof[7] = CreateDynamicObject(19378,1153.0134300,-1306.5085400,17.7770000,0.0000000,90.0000000,0.0000000); //
    for(new i = 0; i<=7; i++) SetDynamicObjectMaterial(AllSaintsFDRoof[i], 0,  6056, "venice_law", "rooftop_gz4", 0);
    //Concrete
    new AllSaintsFDConcrete[15];
    AllSaintsFDConcrete[0] = CreateDynamicObject(18980,1116.7760000,-1292.6317100,5.3604000,0.0000000,0.0000000,0.0000000); //
    AllSaintsFDConcrete[1] = CreateDynamicObject(18980,1150.0040300,-1292.6317100,5.3604000,0.0000000,0.0000000,0.0000000); //
    AllSaintsFDConcrete[2] = CreateDynamicObject(18980,1128.7800300,-1292.6297600,17.6044000,0.0000000,90.0000000,0.0000000); //
    AllSaintsFDConcrete[3] = CreateDynamicObject(18980,1153.7800300,-1292.6297600,17.6044000,0.0000000,90.0000000,0.0000000); //
    AllSaintsFDConcrete[4] = CreateDynamicObject(18980,1153.7800300,-1292.6278100,16.6744000,0.0000000,90.0000000,0.0000000); //
    AllSaintsFDConcrete[5] = CreateDynamicObject(18980,1128.7800300,-1292.6278100,16.6744000,0.0000000,90.0000000,0.0000000); //
    AllSaintsFDConcrete[6] = CreateDynamicObject(18980,1116.7760000,-1310.9616700,5.3604000,0.0000000,0.0000000,0.0000000); //
    AllSaintsFDConcrete[7] = CreateDynamicObject(18980,1150.0040300,-1310.9616700,5.3604000,0.0000000,0.0000000,0.0000000); //
    AllSaintsFDConcrete[8] = CreateDynamicObject(18980,1128.7800300,-1310.9597200,17.6044000,0.0000000,90.0000000,0.0000000); //
    AllSaintsFDConcrete[9] = CreateDynamicObject(18980,1153.7800300,-1310.9597200,17.6044000,0.0000000,90.0000000,0.0000000); //
    AllSaintsFDConcrete[10] = CreateDynamicObject(18762,1116.7740500,-1304.5533400,17.6024000,0.0000000,90.0000000,90.0000000); //
    AllSaintsFDConcrete[11] = CreateDynamicObject(18762,1116.7719700,-1308.9173600,17.6004000,0.0000000,90.0000000,90.0000000); //
    AllSaintsFDConcrete[12] = CreateDynamicObject(18762,1116.7740500,-1294.6413600,17.6024000,0.0000000,90.0000000,90.0000000); //
    AllSaintsFDConcrete[13] = CreateDynamicObject(18762,1116.7740500,-1299.5974100,17.6024000,0.0000000,90.0000000,90.0000000); //
    for(new i = 0; i<=13; i++) SetDynamicObjectMaterial(AllSaintsFDConcrete[i], 0, 3985, "pershingsq", "duskyred_64", 0);
    new AllSaintsFDConcrete2[3];
    AllSaintsFDConcrete2[0] = CreateDynamicObject(18980,1129.4777800,-1302.3747600,5.3604000,0.0000000,0.0000000,0.0000000); //
    AllSaintsFDConcrete2[1] = CreateDynamicObject(18980,1139.3887900,-1302.3747600,5.3604000,0.0000000,0.0000000,0.0000000); //
    for(new i = 0; i<=1; i++) SetDynamicObjectMaterial(AllSaintsFDConcrete2[i], 0, 16150, "ufo_bar", "GEwhite1_64", 0);
    //Droor block
    new AllSaintsDoorBlock;
    AllSaintsDoorBlock = CreateDynamicObject(18764,1152.4080800,-1301.7189900,19.1933000,0.0000000,0.0000000,0.0000000); //
    SetDynamicObjectMaterial(AllSaintsDoorBlock, 0, 3985, "pershingsq", "duskyred_64", 0);

	CreateDynamicObject(1368,1177.8037100,-1319.1646700,13.7577000,0.0000000,-2.7450000,0.0000000); //
    CreateDynamicObject(1368,1177.6523400,-1328.5316200,13.7577000,0.0000000,2.7450000,180.0000000); //
    CreateDynamicObject(3934,1132.5941200,-1301.8873300,17.8580000,0.0000000,0.0000000,90.0000000); //
    CreateDynamicObject(1533,1149.8874500,-1300.2424300,17.8630000,0.0000000,0.0000000,-90.0000000); //
    CreateDynamicObject(1533,1149.8874500,-1301.7464600,17.8630000,0.0000000,0.0000000,-90.0000000); //
    CreateDynamicObject(3934,1161.2640400,-1313.9383500,30.4888000,0.0000000,0.0000000,90.0000000); //
    CreateDynamicObject(1533,1163.1114500,-1330.4676500,30.4866000,0.0000000,0.0000000,180.0000000); //
    CreateDynamicObject(1533,1161.6134000,-1330.4676500,30.4866000,0.0000000,0.0000000,180.0000000); //
    CreateDynamicObject(2690,1139.1561300,-1293.0833700,12.9833000,0.0000000,0.0000000,0.0000000); //
    CreateDynamicObject(2922,1140.7110600,-1293.0089100,14.1859000,0.0000000,0.0000000,180.0000000); //
    CreateDynamicObject(2922,1131.1510000,-1293.0089100,14.1859000,0.0000000,0.0000000,180.0000000); //
    CreateDynamicObject(2922,1121.5109900,-1293.0089100,14.1859000,0.0000000,0.0000000,180.0000000); //
    CreateDynamicObject(1533,1149.8603500,-1305.0349100,12.6485000,0.0000000,0.0000000,-90.0000000); //
    CreateDynamicObject(1533,1149.8603500,-1306.5148900,12.6485000,0.0000000,0.0000000,-90.0000000); //
    CreateDynamicObject(2737,1137.3712200,-1310.9870600,14.0169000,0.0000000,0.0000000,180.0000000); //
    CreateDynamicObject(2986,1139.8222700,-1293.1480700,16.4192000,0.0000000,90.0000000,90.0000000); //
    CreateDynamicObject(2986,1119.8902600,-1293.1480700,16.4192000,0.0000000,90.0000000,90.0000000); //
    CreateDynamicObject(1368,1134.8315400,-1310.5899700,13.2565000,0.0000000,0.0000000,180.0000000); //
	return 1;
}
stock LoadFBIMap()
{
	CreateObject(6966, 1796.58936, -1641.16870, 12.61000,   0.00000, 0.00000, 270.00000);
	CreateObject(7245, 1783.75964, -1691.52808, 9.44000,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(6970, 1786.79773, -1695.16907, 15.12000,   0.00000, 0.00000, 270.00000);
	SetDynamicObjectMaterial(CreateDynamicObject(18981, 1799.28711, -1709.83386, 12.07000,   0.00000, 90.00000, 0.00000), 0, 12931, "sw_brewery", "fancy_slab128", 0xFFFFFFFF);
	SetDynamicObjectMaterial(CreateDynamicObject(18981, 1770.58508, -1629.01147, 12.00000,   0.00000, 90.00000, 256.42670), 0, 12931, "sw_brewery", "fancy_slab128", 0xFFFFFFFF);
	SetDynamicObjectMaterial(CreateDynamicObject(18981, 1792.06250, -1709.83386, 12.05000,   0.00000, 90.00000, 0.00000), 0, 12931, "sw_brewery", "fancy_slab128", 0xFFFFFFFF);
	SetDynamicObjectMaterial(CreateDynamicObject(18981, 1767.02856, -1709.83386, 12.05000,   0.00000, 90.00000, 0.00000), 0, 12931, "sw_brewery", "fancy_slab128", 0xFFFFFFFF);
	SetDynamicObjectMaterial(CreateDynamicObject(18981, 1767.02856, -1684.89233, 12.05000,   0.00000, 90.00000, 0.00000), 0, 12931, "sw_brewery", "fancy_slab128", 0xFFFFFFFF);
	SetDynamicObjectMaterial(CreateDynamicObject(18981, 1767.02856, -1659.98596, 12.05000,   0.00000, 90.00000, 0.00000), 0, 12931, "sw_brewery", "fancy_slab128", 0xFFFFFFFF);
	SetDynamicObjectMaterial(CreateDynamicObject(18981, 1767.02856, -1635.07654, 12.05000,   0.00000, 90.00000, 0.00000), 0, 12931, "sw_brewery", "fancy_slab128", 0xFFFFFFFF);
	SetDynamicObjectMaterial(CreateDynamicObject(18766, 1759.56238, -1627.09656, 11.45000,   0.00000, 0.00000, 0.00000), 0, 12931, "sw_brewery", "fancy_slab128", 0xFFFFFFFF);
	SetDynamicObjectMaterial(CreateDynamicObject(18766, 1760.86719, -1619.87305, 12.03000,   90.00000, 90.00000, 44.18820), 0, 12931, "sw_brewery", "fancy_slab128", 0xFFFFFFFF);
	SetDynamicObjectMaterial(CreateDynamicObject(18766, 1760.95068, -1618.84827, 12.01000,   90.00000, 90.00000, 342.99521), 0, 12931, "sw_brewery", "fancy_slab128", 0xFFFFFFFF);
	SetDynamicObjectMaterial(CreateDynamicObject(18766, 1756.99048, -1622.78259, 12.04000,   90.00000, 90.00000, 0.16580), 0, 12931, "sw_brewery", "fancy_slab128", 0xFFFFFFFF);
	SetDynamicObjectMaterial(CreateDynamicObject(18766, 1758.86206, -1616.02747, 7.50000,   0.00000, 90.00000, 65.29113), 0, 12931, "sw_brewery", "fancy_slab128", 0xFFFFFFFF);
	CreateDynamicObject(3934, 1774.25806, -1692.60266, 23.45555,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3934, 1799.65710, -1692.64355, 23.45555,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1506, 1786.02673, -1680.54968, 23.40000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19454, 1786.10229, -1675.79211, 24.10000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19454, 1787.54114, -1675.79211, 24.10000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19435, 1786.82727, -1678.86230, 25.90000,   0.00000, 90.00000, 270.00000);
	CreateDynamicObject(966, 1760.71057, -1680.12817, 12.50000,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(966, 1760.71057, -1660.00781, 12.50000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1214, 1760.85510, -1672.38940, 12.50000,   0.00000, 0.00000, 358.98273);
	CreateDynamicObject(1214, 1760.85510, -1667.72571, 12.50000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1214, 1760.85510, -1668.89587, 12.50000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1214, 1760.85510, -1670.03882, 12.50000,   0.00000, 0.00000, 359.79901);
	CreateDynamicObject(1214, 1760.85510, -1671.14209, 12.50000,   0.00000, 0.00000, 359.18369);

	CreateObject(17536, 1782.49524, -1712.96350, 24.13992,   0.00000, 0.00000, 90.00000); // buildings / the biz behind fbi
	return 1;
}
stock LoadPrisonMap()
{
	CreateDynamic3DTextLabel("Garage", COLOR_YELLOW, 143.9877,1497.2058,989.4397, 5.0);
	CreateDynamic3DTextLabel("Garage", COLOR_YELLOW, 184.0263,1823.5316,17.6406, 5.0);

	new pWallWeed[5];
	new pWallCon[25];
	//naval stairs
	CreateDynamicObject(7096, -1341.07, 481.08, 8.60,   0.00, 0.00, 90.00);
	CreateDynamicObject(1698, -1338.06, 486.35, 11.03,   0.00, 0.00, 0.00);
	CreateDynamicObject(1698, -1336.70, 486.35, 11.03,   0.00, 0.00, 0.00);
	CreateDynamicObject(1698, -1335.35, 486.36, 11.03,   0.00, 0.00, 0.00);
	CreateDynamicObject(1698, -1337.05, 484.75, 10.53,   0.00, 0.00, 90.00);
	CreateDynamicObject(1698, -1337.04, 484.99, 10.73,   0.00, 0.00, 90.00);
	CreateDynamicObject(1698, -1337.05, 485.18, 10.97,   0.00, 0.00, 90.00);
	CreateDynamicObject(1698, -1338.77, 486.30, 10.43,   0.00, 270.00, 0.00);
	CreateDynamicObject(1698, -1334.64, 486.42, 10.43,   0.00, 270.00, 180.00);
	CreateDynamicObject(1698, -1336.22, 487.97, 10.42,   0.00, 270.00, 270.00);
	CreateDynamicObject(1698, -1337.22, 487.97, 10.41,   0.00, 270.00, 270.00);
	//Cell beginning
	CreateObject(10824, 2702.97, -2467.05, 1300.83,   0.00, 0.00, 0.00);
	CreateDynamicObject(16339, 2723.00, -2469.16, 1303.56,   0.00, 0.00, 180.00, 50, 50);
	CreateDynamicObject(8533, 2744.29, -2461.51, 1298.01,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(16339, 2766.27, -2447.57, 1302.86,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(14437, 2747.35, -2527.43, 1300.76,   0.00, 0.00, 0.00, 50, 50);
	CreateObject(14412, 2735.87, -2517.65, 1303.99,   0.00, 0.00, 270.00);
	CreateDynamicObject(16339, 2749.11, -2498.58, 1302.86,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(16339, 2749.11, -2523.57, 1302.86,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(16339, 2722.52, -2520.95, 1302.86,   0.00, 0.00, 180.00, 50, 50);
	CreateDynamicObject(16339, 2722.51, -2501.39, 1302.86,   0.00, 0.00, 180.00, 50, 50);
	CreateDynamicObject(16339, 2722.51, -2476.39, 1302.86,   0.00, 0.00, 180.00, 50, 50);
	CreateDynamicObject(1411, 2730.45, -2494.59, 1300.70,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(1411, 2735.69, -2494.59, 1300.70,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(1411, 2740.93, -2494.58, 1300.70,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(14437, 2743.35, -2527.43, 1300.76,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(14437, 2739.36, -2527.43, 1300.76,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(14437, 2735.36, -2527.43, 1300.76,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(14437, 2731.37, -2527.43, 1300.76,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(14437, 2727.37, -2527.43, 1300.76,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(14437, 2723.69, -2527.44, 1300.76,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(14437, 2725.60, -2506.33, 1296.56,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(14437, 2725.60, -2502.33, 1296.56,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(14437, 2725.60, -2498.34, 1296.56,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(14437, 2725.60, -2494.34, 1296.56,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(14437, 2725.62, -2493.18, 1296.56,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(14437, 2762.26, -2506.28, 1296.56,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(14437, 2762.26, -2502.28, 1296.56,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(14437, 2762.26, -2498.29, 1296.56,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(9339, 2736.41, -2511.23, 1303.41,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(9339, 2736.41, -2511.23, 1304.81,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(9339, 2710.29, -2511.23, 1303.41,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(9339, 2710.29, -2511.23, 1304.81,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(16339, 2745.26, -2523.87, 1302.86,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(16339, 2745.68, -2523.83, 1302.86,   0.00, 0.00, 180.00, 50, 50);
	CreateDynamicObject(16339, 2741.73, -2523.81, 1302.86,   0.00, 0.00, 180.00, 50, 50);
	CreateDynamicObject(16339, 2741.18, -2523.85, 1302.86,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(16339, 2737.76, -2523.86, 1302.86,   0.00, 0.00, 180.00, 50, 50);
	CreateDynamicObject(16339, 2733.74, -2523.89, 1302.86,   0.00, 0.00, 180.00, 50, 50);
	CreateDynamicObject(16339, 2729.73, -2523.88, 1302.86,   0.00, 0.00, 180.00, 50, 50);
	CreateDynamicObject(16339, 2725.90, -2523.89, 1302.86,   0.00, 0.00, 180.00, 50, 50);
	CreateDynamicObject(16339, 2737.08, -2523.84, 1302.86,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(16339, 2733.25, -2523.91, 1302.86,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(16339, 2729.20, -2523.86, 1302.86,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(16339, 2725.45, -2523.79, 1302.86,   0.00, 0.00, 0.00, 50, 50);
	CreateObject(14416, 2742.75, -2496.90, 1295.59,   0.00, 0.00, 270.00);
	pWallCon[19] = CreateDynamicObject(16339, 2713.83, -2486.52, 1302.86,   0.00, 0.00, 90.00, 50, 50);
	pWallCon[18] = CreateDynamicObject(16339, 2741.84, -2486.52, 1302.86,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(16339, 2719.18, -2486.51, 1313.86,   90.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(16339, 2720.22, -2485.73, 1313.81,   90.00, 0.00, 270.00, 50, 50);
	pWallCon[17] = CreateDynamicObject(16339, 2713.85, -2485.72, 1302.86,   0.00, 0.00, 270.00, 50, 50);
	pWallCon[16] = CreateDynamicObject(16339, 2741.85, -2485.72, 1302.86,   0.00, 0.00, 270.00, 50, 50);
	CreateDynamicObject(7191, 2741.52, -2513.26, 1303.14,   0.00, 270.00, 90.00, 50, 50);
	CreateDynamicObject(7191, 2741.16, -2517.22, 1303.14,   0.00, 270.00, 90.00, 50, 50);
	CreateDynamicObject(2792, 2725.67, -2509.08, 1298.11,   0.00, 0.00, 270.00, 50, 50);
	CreateDynamicObject(2793, 2722.37, -2511.10, 1303.41,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(2794, 2745.89, -2498.48, 1298.11,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(2794, 2746.13, -2498.53, 1298.11,   0.00, 0.00, 270.00, 50, 50);
	CreateDynamicObject(1622, 2748.72, -2510.73, 1303.98,   0.00, 0.00, 270.00, 50, 50);
	CreateDynamicObject(1622, 2723.27, -2495.28, 1303.98,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(1622, 2748.99, -2494.04, 1303.98,   0.00, 0.00, -45.00, 50, 50);
	CreateDynamicObject(14439, 2740.16, -2502.62, 1305.80,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(2448, 2738.17, -2490.14, 1298.73,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(2446, 2738.13, -2491.13, 1298.73,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(2446, 2738.13, -2492.13, 1298.73,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(2589, 2748.57, -2492.30, 1304.71,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(2415, 2742.22, -2487.08, 1298.82,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(2417, 2743.10, -2486.81, 1298.82,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(2419, 2745.16, -2490.07, 1298.80,   0.00, 0.00, 270.00, 50, 50);
	CreateDynamicObject(2418, 2745.14, -2487.56, 1298.81,   0.00, 0.00, 270.00, 50, 50);
	CreateDynamicObject(2446, 2744.92, -2486.58, 1298.73,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(2446, 2745.39, -2489.28, 1298.73,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(2803, 2748.29, -2493.49, 1299.25,   0.00, 0.00, -47.00, 50, 50);
	CreateDynamicObject(2963, 2746.08, -2489.39, 1298.04,   180.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(2417, 2744.08, -2486.82, 1298.82,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(16101, 2745.81, -2494.87, 1303.24,   90.00, 0.00, 180.00, 50, 50);
	CreateDynamicObject(16101, 2746.09, -2494.82, 1303.24,   90.00, 0.00, 180.00, 50, 50);
	CreateDynamicObject(2649, 2743.22, -2486.87, 1303.05,   0.00, 90.00, 270.00, 50, 50);
	CreateDynamicObject(16339, 2745.46, -2470.60, 1298.86,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(16659, 2765.53, -2467.18, 1305.30,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(18980, 2769.28, -2463.96, 1294.32,   0.00, 90.00, 0.00, 50, 50);
	pWallWeed[1] = CreateDynamicObject(8533, 2744.37, -2456.30, 1302.80,   180.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(16339, 2769.08, -2462.13, 1298.86,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(16532, 2771.93, -2474.67, 1300.97,   0.00, 0.00, 180.00, 50, 50);
	CreateDynamicObject(16086, 2761.57, -2436.60, 1299.76,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(1508, 2758.21, -2476.07, 1300.43,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(16339, 2745.40, -2508.09, 1285.00,   90.00, 0.00, 270.00, 50, 50);
	CreateObject(8185, 2730.92, -2383.48, 1298.66,   0.00, 90.00, 180.00);
	CreateObject(8185, 2747.97, -2583.87, 1298.64,   0.00, 90.00, 180.00);
	CreateDynamicObject(19313, 2734.78, -2494.70, 1306.10,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(19313, 2748.81, -2494.70, 1306.07,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(994, 2738.91, -2508.71, 1298.83,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(994, 2732.64, -2508.71, 1298.83,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(994, 2726.41, -2508.72, 1298.83,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(16339, 2729.96, -2508.10, 1285.00,   90.00, 0.00, 270.00, 50, 50);
	CreateDynamicObject(994, 2725.74, -2508.07, 1298.83,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(994, 2725.74, -2501.80, 1298.83,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(994, 2746.01, -2508.36, 1298.83,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(17969, 2731.60, -2508.20, 1296.12,   0.00, 0.00, 270.00, 50, 50);
	CreateDynamicObject(5069, 2732.75, -2512.04, 1295.48,   0.00, 0.00, 270.00, 50, 50);
	CreateDynamicObject(18665, 2739.20, -2508.16, 1295.71,   0.00, 0.00, 270.00, 50, 50);
	CreateDynamicObject(2949, 2736.98, -2508.19, 1294.69,   0.00, 0.00, 270.00, 50, 50);
	CreateDynamicObject(1368, 2739.91, -2501.92, 1295.31,   0.00, 0.00, 180.00, 50, 50);
	CreateDynamicObject(1368, 2742.66, -2507.86, 1295.31,   0.00, 0.00, 180.00, 50, 50);
	CreateDynamicObject(1368, 2732.47, -2495.27, 1295.31,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(14578, 2726.47, -2505.63, 1305.00,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(14578, 2738.44, -2509.33, 1305.00,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(14578, 2750.41, -2513.04, 1305.00,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(16101, 2745.83, -2480.62, 1300.08,   90.00, 180.00, 180.00, 50, 50);
	CreateDynamicObject(16101, 2745.99, -2491.60, 1300.08,   90.00, 0.00, 180.00, 50, 50);
	CreateDynamicObject(16101, 2746.04, -2480.64, 1300.08,   90.00, 180.00, 180.00, 50, 50);
	CreateDynamicObject(16339, 2754.76, -2460.85, 1298.86,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(16339, 2767.39, -2473.49, 1298.86,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(16339, 2773.97, -2475.92, 1298.86,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(16339, 2778.55, -2480.38, 1302.86,   0.00, 0.00, 270.00, 50, 50);
	CreateDynamicObject(14464, 2747.07, -2448.97, 1300.98,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(2451, 2740.20, -2487.03, 1298.76,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(2762, 2734.87, -2486.92, 1299.23,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(2763, 2732.18, -2486.91, 1299.23,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(2762, 2734.83, -2489.56, 1299.23,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(2762, 2731.66, -2489.57, 1299.23,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(2762, 2731.66, -2493.88, 1299.23,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(2767, 2738.30, -2491.18, 1299.77,   0.00, 0.00, 105.00, 50, 50);
	CreateDynamicObject(2310, 2732.71, -2490.98, 1299.25,   0.00, 0.00, -80.00, 50, 50);
	CreateDynamicObject(2310, 2731.55, -2490.21, 1299.25,   0.00, 0.00, -98.00, 50, 50);
	CreateDynamicObject(2310, 2730.60, -2488.15, 1299.25,   0.00, 0.00, -229.00, 50, 50);
	CreateDynamicObject(2310, 2730.79, -2492.37, 1299.25,   0.00, 0.00, -273.00, 50, 50);
	CreateDynamicObject(2310, 2729.52, -2493.66, 1299.25,   0.00, 0.00, -185.00, 50, 50);
	CreateDynamicObject(2310, 2734.53, -2491.00, 1299.25,   0.00, 0.00, -127.00, 50, 50);
	CreateDynamicObject(2310, 2733.51, -2486.77, 1299.25,   0.00, 0.00, -11.00, 50, 50);
	CreateDynamicObject(2310, 2730.80, -2487.14, 1299.25,   0.00, 0.00, -164.00, 50, 50);
	CreateDynamicObject(2310, 2736.94, -2486.90, 1299.25,   0.00, 0.00, 33.00, 50, 50);
	CreateDynamicObject(2949, 2752.41, -2480.44, 1298.85,   0.00, 0.00, 270.00, 50, 50);
	CreateDynamicObject(14867, 2761.99, -2480.71, 1299.63,   0.00, 0.00, 180.00, 50, 50);
	CreateDynamicObject(16101, 2745.99, -2491.59, 1298.08,   0.00, 0.00, 180.00, 50, 50);
	CreateDynamicObject(16339, 2714.37, -2503.84, 1286.30,   270.00, 0.00, 270.00, 50, 50);
	CreateDynamicObject(16339, 2714.37, -2504.58, 1286.30,   90.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(16339, 2714.32, -2500.43, 1286.30,   90.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(16339, 2714.32, -2499.66, 1286.30,   270.00, 0.00, 270.00, 50, 50);
	CreateDynamicObject(7191, 2747.89, -2505.80, 1298.52,   0.00, 270.00, 0.00, 50, 50);
	CreateDynamicObject(1800, 2725.85, -2499.34, 1294.60,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(2602, 2723.48, -2495.24, 1295.16,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(1800, 2722.95, -2503.79, 1294.60,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(2602, 2724.77, -2500.65, 1295.16,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(1800, 2722.84, -2508.75, 1294.60,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(2602, 2724.80, -2504.81, 1295.16,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(1800, 2748.37, -2517.30, 1298.80,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(1800, 2744.59, -2517.30, 1298.80,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(1800, 2740.54, -2517.28, 1298.80,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(1800, 2736.43, -2517.31, 1298.80,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(1800, 2732.62, -2517.33, 1298.80,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(1800, 2728.54, -2517.33, 1298.80,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(1800, 2724.81, -2517.32, 1298.80,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(2602, 2745.90, -2512.00, 1299.34,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(2602, 2741.94, -2512.03, 1299.34,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(2602, 2737.97, -2511.95, 1299.34,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(2602, 2733.95, -2511.93, 1299.34,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(2602, 2729.94, -2511.93, 1299.34,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(2602, 2726.11, -2511.93, 1299.34,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(2602, 2722.74, -2511.92, 1299.34,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(14439, 2741.08, -2485.21, 1305.80,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(14439, 2727.33, -2466.43, 1304.00,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(2397, 2739.18, -2480.10, 1299.53,   -23.00, 0.00, 180.00, 50, 50);
	CreateDynamicObject(2009, 2743.52, -2478.98, 1298.84,   0.00, 0.00, 270.00, 50, 50);
	CreateDynamicObject(16644, 2743.37, -2478.45, 1300.21,   0.00, 90.00, 90.00, 50, 50);
	CreateDynamicObject(16644, 2745.04, -2479.35, 1300.21,   0.00, 90.00, 0.00, 50, 50);
	CreateDynamicObject(16644, 2739.20, -2478.40, 1300.21,   0.00, 90.00, 90.00, 50, 50);
	CreateDynamicObject(1495, 2740.94, -2478.47, 1298.83,   0.00, 0.00, 189.00, 50, 50);
	CreateDynamicObject(2197, 2742.39, -2479.97, 1299.06,   0.00, 0.00, 180.00, 50, 50);
	CreateDynamicObject(2197, 2741.70, -2479.97, 1299.06,   0.00, 0.00, 180.00, 50, 50);
	CreateDynamicObject(2197, 2741.01, -2479.97, 1299.06,   0.00, 0.00, 180.00, 50, 50);
	CreateDynamicObject(2197, 2740.33, -2479.97, 1299.06,   0.00, 0.00, 180.00, 50, 50);
	CreateDynamicObject(1806, 2743.51, -2480.32, 1298.82,   0.00, 0.00, -40.00, 50, 50);
	CreateDynamicObject(2399, 2739.18, -2479.57, 1299.56,   -23.00, 0.00, 180.00, 50, 50);
	CreateDynamicObject(2397, 2739.17, -2479.01, 1299.54,   -23.00, 0.00, 180.00, 50, 50);
	CreateDynamicObject(2372, 2739.38, -2480.46, 1298.83,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(16644, 2738.24, -2479.27, 1300.21,   0.00, 90.00, 0.00, 50, 50);
	CreateDynamicObject(1622, 2756.88, -2480.07, 1302.58,   0.00, 0.00, 270.00, 50, 50);
	CreateDynamicObject(2949, 2722.90, -2477.98, 1298.85,   0.00, 0.00, 180.00, 50, 50);
	CreateDynamicObject(10369, 2733.52, -2519.17, 1291.64,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(10369, 2726.5903, -2483.9600, 1292.6300,   0.00, 0.00, 180.01, 50, 50);
	CreateDynamicObject(10369, 2739.52, -2483.95, 1292.64,   0.00, 0.00, 180.00, 50, 50);
	CreateDynamicObject(16339, 2732.89, -2460.28, 1298.86,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(16339, 2734.64, -2460.19, 1298.86,   0.00, 0.00, 180.00, 50, 50);
	CreateDynamicObject(14437, 2728.82, -2470.56, 1300.80,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(14437, 2728.82, -2466.56, 1300.80,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(14437, 2728.82, -2462.57, 1300.80,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(8533, 2698.93, -2442.69, 1298.82,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(8185, 2726.54, -2383.33, 1298.66,   0.00, 90.00, 180.00, 50, 50);
	CreateDynamicObject(10369, 2712.57, -2466.08, 1297.64,   0.00, 0.00, 270.00, 50, 50);
	CreateDynamicObject(16339, 2716.03, -2460.98, 1303.56,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(16339, 2716.21, -2464.26, 1303.56,   0.00, 0.00, 270.00, 50, 50);
	CreateDynamicObject(16339, 2716.16, -2464.69, 1303.56,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(16339, 2716.11, -2468.67, 1303.56,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(16339, 2716.05, -2468.11, 1303.56,   0.00, 0.00, 270.00, 50, 50);
	CreateDynamicObject(16339, 2716.41, -2472.69, 1303.56,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(16339, 2716.08, -2471.90, 1303.56,   0.00, 0.00, 270.00, 50, 50);
	CreateDynamicObject(16339, 2716.42, -2460.41, 1303.56,   0.00, 0.00, 270.00, 50, 50);
	CreateDynamicObject(18980, 2728.50, -2472.68, 1298.83,   0.00, 0.00, 0.00, 50, 50);
	pWallCon[2] = CreateDynamicObject(18980, 2728.20, -2460.11, 1298.83,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(7191, 2705.66, -2470.52, 1302.89,   0.00, 90.00, 90.00, 50, 50);
	CreateDynamicObject(7191, 2705.66, -2466.56, 1302.89,   0.00, 90.00, 90.00, 50, 50);
	CreateDynamicObject(7191, 2705.67, -2463.00, 1302.88,   0.00, 90.00, 90.00, 50, 50);
	CreateDynamicObject(1411, 2725.44, -2472.37, 1300.30,   0.00, 0.00, 0.00, 50, 50);
	pWallCon[1] = CreateDynamicObject(9339, 2728.86, -2472.49, 1300.61,   90.00, 0.00, 180.00, 50, 50);
	pWallCon[0] = CreateDynamicObject(9339, 2728.30, -2473.04, 1300.61,   90.00, 0.00, 270.00, 50, 50);
	pWallWeed[4] = CreateDynamicObject(9339, 2733.82, -2472.64, 1300.61,   90.00, 0.00, 90.00, 50, 50);
	pWallWeed[2] = CreateDynamicObject(9339, 2738.28, -2472.35, 1300.61,   90.00, 0.00, 0.00, 50, 50);
	pWallWeed[3] = CreateDynamicObject(9339, 2738.27, -2470.95, 1300.61,   90.00, 0.00, 0.00, 50, 50);
	pWallCon[21] = CreateDynamicObject(9339, 2758.12, -2475.60, 1302.81,   0.00, 180.00, 0.00, 50, 50);
	pWallCon[22] = CreateDynamicObject(9339, 2724.37, -2442.24, 1300.61,   90.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(2990, 2738.26, -2475.88, 1305.29,   0.00, 180.00, 90.00, 50, 50);
	CreateDynamicObject(14578, 2733.74, -2466.38, 1302.80,   0.00, 0.00, 270.00, 50, 50);
	CreateDynamicObject(14439, 2746.33, -2471.27, 1304.30,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(2795, 2723.69, -2472.52, 1302.45,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(11543, 2708.47, -2435.39, 1303.53,   0.00, 0.00, 180.00, 50, 50);
	CreateDynamicObject(8260, 2723.51, -2413.35, 1295.66,   0.00, 0.00, 180.00, 50, 50);
	CreateDynamicObject(16659, 2719.26, -2435.06, 1305.61,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(8260, 2755.78, -2439.41, 1295.66,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(14401, 2727.97, -2446.17, 1299.21,   0.00, 0.00, 270.00, 50, 50);
	CreateDynamicObject(4724, 2723.41, -2436.57, 1299.46,   0.00, 0.00, 180.00, 50, 50);
	CreateDynamicObject(4724, 2729.46, -2443.13, 1297.06,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(16659, 2722.17, -2430.33, 1305.60,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(2846, 2729.96, -2444.52, 1298.96,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(1738, 2731.00, -2448.50, 1299.44,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(1208, 2728.87, -2450.55, 1298.96,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(1208, 2728.13, -2450.57, 1298.96,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(1208, 2727.39, -2450.58, 1298.96,   0.00, 0.00, 1.00, 50, 50);
	CreateDynamicObject(1208, 2726.65, -2450.57, 1298.96,   0.00, 0.00, -1.00, 50, 50);
	CreateDynamicObject(14867, 2732.39, -2442.32, 1300.48,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(2154, 2725.11, -2448.74, 1298.96,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(1789, 2727.15, -2448.24, 1299.50,   0.00, 0.00, -69.00, 50, 50);
	CreateDynamicObject(1778, 2729.60, -2450.67, 1298.96,   0.00, 0.00, -120.00, 50, 50);
	CreateDynamicObject(14587, 2720.23, -2407.81, 1304.37,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(14587, 2720.98, -2419.08, 1301.17,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(14494, 2727.30, -2437.44, 1300.80,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(14494, 2726.17, -2437.43, 1300.80,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(14494, 2725.04, -2437.41, 1300.80,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(14494, 2724.90, -2440.91, 1300.80,   0.00, 0.00, 270.00, 50, 50);
	CreateDynamicObject(16101, 2727.83, -2451.35, 1301.38,   0.00, 90.00, 0.00, 50, 50);
	CreateDynamicObject(19313, 2726.55, -2451.29, 1294.35,   0.00, 90.00, 0.00, 50, 50);
	CreateDynamicObject(14439, 2724.83, -2443.07, 1303.70,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(2819, 2728.19, -2451.08, 1299.87,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(1800, 2732.62, -2517.33, 1299.78,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(1800, 2727.22, -2471.46, 1298.80,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(1800, 2722.69, -2465.09, 1298.80,   0.00, 0.00, 270.00, 50, 50);
	CreateDynamicObject(1800, 2727.17, -2463.80, 1298.80,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(2602, 2723.88, -2469.11, 1299.33,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(2602, 2724.44, -2467.88, 1299.33,   0.00, 0.00, 180.00, 50, 50);
	CreateDynamicObject(2602, 2725.50, -2461.20, 1299.33,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(1800, 2727.17, -2463.80, 1299.80,   0.00, 0.00, 90.00, 50, 50);
	pWallCon[20] = CreateDynamicObject(9339, 2748.60, -2494.47, 1300.61,   90.00, 0.00, 270.00, 50, 50);
	pWallCon[24] = CreateDynamicObject(9339, 2748.60, -2494.74, 1300.61,   90.00, 0.00, 270.00, 50, 50);
	CreateDynamicObject(14798, 62.24, 2639.02, 1000.94,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(2000, 62.63, 2638.35, 1001.85,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(2000, 117.78, 1630.10, 999.46,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(16101, 116.17, 1605.22, 1000.17,   0.00, 90.00, 90.00, 50, 50);
	CreateDynamicObject(16101, 116.16, 1605.24, 1000.17,   0.00, 90.00, 270.00, 50, 50);
	CreateDynamicObject(2949, 2748.36, -2480.45, 1298.85,   0.00, 0.00, 270.00, 50, 50);
	CreateDynamicObject(1989, 2747.31, -2486.87, 1298.84,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(2543, 2748.35, -2486.92, 1298.83,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(2539, 2746.54, -2487.77, 1297.84,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(2539, 2746.54, -2488.79, 1297.84,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(2803, 2748.61, -2490.29, 1299.25,   0.00, 0.00, -142.00, 50, 50);
	CreateDynamicObject(3055, 1768.01, 1051.10, 1002.97,   90.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(2949, 1765.35, 1049.51, 997.90,   0.00, 0.00, 180.00, 50, 50);
	CreateDynamicObject(3109, 2542.87, -2519.34, 13.90,   0.00, 0.00, 270.00, 50, 50);
	CreateDynamicObject(3109, 2559.93, -2529.57, 13.50,   0.00, 0.00, 180.00, 50, 50);
	CreateDynamicObject(4724, 2737.80, -2435.75, 1297.06,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(16339, 2744.19, -2451.58, 1303.56,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(16339, 2737.95, -2451.51, 1312.36,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(16339, 2715.49, -2452.44, 1303.56,   0.00, 0.00, 90.00, 50, 50);
	pWallCon[5] = CreateDynamicObject(9339, 2727.89, -2451.62, 1300.61,   90.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(16339, 2716.95, -2451.51, 1304.56,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(16339, 2716.17, -2458.49, 1303.56,   0.00, 0.00, 270.00, 50, 50);
	CreateDynamicObject(9339, 2722.84, -2457.31, 1300.61,   90.00, 0.00, 180.00, 50, 50);
	CreateDynamicObject(14464, 2708.77, -2480.52, 1300.98,   0.00, 0.00, 180.00, 50, 50);
	CreateDynamicObject(16339, 2702.81, -2439.84, 1303.56,   0.00, 0.00, 0.00, 50, 50);
	pWallCon[3] = CreateDynamicObject(9339, 2728.52, -2459.34, 1300.61,   90.00, 0.00, 0.00, 50, 50);
	pWallCon[4] = CreateDynamicObject(9339, 2727.96, -2458.76, 1300.61,   90.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(9339, 2722.84, -2458.71, 1300.61,   90.00, 0.00, 180.00, 50, 50);
	CreateDynamicObject(8533, 2684.37, -2449.40, 1302.80,   180.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(14587, 2706.14, -2430.27, 1301.87,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(2990, 2720.02, -2454.65, 1305.29,   0.00, 180.00, 90.00, 50, 50);
	CreateDynamicObject(2990, 2720.08, -2461.31, 1300.29,   0.00, 180.00, 90.00, 50, 50);
	CreateDynamicObject(16532, 2718.42, -2461.15, 1301.57,   0.00, 0.00, 180.00, 50, 50);
	CreateDynamicObject(11148, 2702.91, -2458.76, 1300.00,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(16339, 2691.18, -2458.49, 1303.56,   0.00, 0.00, 270.00, 50, 50);
	CreateDynamicObject(14464, 2682.77, -2480.51, 1300.97,   0.00, 0.00, 180.00, 50, 50);
	CreateDynamicObject(2990, 2720.20, -2448.25, 1300.29,   0.00, 180.00, 90.00, 50, 50);
	pWallCon[11] = CreateDynamicObject(16339, 2679.57, -2462.47, 1303.56,   0.00, 0.00, 180.00, 50, 50);
	CreateDynamicObject(16339, 2683.52, -2469.05, 1303.56,   0.00, 0.00, 180.00, 50, 50);
	pWallCon[6] = CreateDynamicObject(9339, 2683.24, -2453.61, 1300.61,   90.00, 0.00, 180.00, 50, 50);
	pWallCon[9] = CreateDynamicObject(16339, 2683.51, -2445.69, 1312.36,   0.00, 0.00, 180.00, 50, 50);
	pWallCon[23] = CreateDynamicObject(9339, 2683.25, -2450.36, 1300.61,   90.00, 0.00, 0.00, 50, 50);
	pWallCon[7] = CreateDynamicObject(9339, 2683.25, -2456.85, 1300.61,   90.00, 0.00, 180.00, 50, 50);
	pWallCon[8] = CreateDynamicObject(16339, 2682.64, -2459.13, 1312.36,   0.00, 0.00, 180.00, 50, 50);
	pWallCon[10] = CreateDynamicObject(16339, 2682.65, -2460.56, 1312.36,   0.00, 0.00, 180.00, 50, 50);
	pWallWeed[0] = CreateDynamicObject(8185, 2681.26, -2367.94, 1301.46,   0.00, 90.00, 0.00, 50, 50);
	CreateDynamicObject(2990, 2683.29, -2460.83, 1300.29,   0.00, 180.00, 90.00, 50, 50);
	CreateDynamicObject(2990, 2683.24, -2446.39, 1300.29,   0.00, 180.00, 90.00, 50, 50);
	CreateDynamicObject(9339, 2683.23, -2453.61, 1300.61,   90.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(2990, 2680.04, -2450.49, 1300.29,   0.00, 180.00, 0.00, 50, 50);
	CreateDynamicObject(2990, 2688.26, -2450.50, 1305.29,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(16644, 2688.89, -2450.56, 1293.86,   0.00, 90.00, 90.00, 50, 50);
	CreateDynamicObject(16644, 2684.65, -2450.59, 1293.86,   0.00, 90.00, 90.00, 50, 50);
	CreateDynamicObject(1495, 2687.90, -2450.50, 1298.86,   0.00, 0.00, 18.00, 50, 50);
	CreateDynamicObject(16339, 2687.02, -2445.05, 1303.56,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(16378, 2688.68, -2447.19, 1299.56,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(2166, 2685.88, -2446.58, 1298.84,   0.00, 0.00, 180.00, 50, 50);
	CreateDynamicObject(2162, 2684.39, -2449.70, 1298.84,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(2309, 2685.68, -2449.34, 1298.84,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(2309, 2684.65, -2446.25, 1298.84,   0.00, 0.00, -142.00, 50, 50);
	CreateDynamicObject(2606, 2686.14, -2450.12, 1301.62,   0.00, 0.00, 180.00, 50, 50);
	CreateDynamicObject(2606, 2688.13, -2450.12, 1301.62,   0.00, 0.00, 180.00, 50, 50);
	CreateDynamicObject(2794, 2720.40, -2451.37, 1301.42,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(2794, 2720.41, -2450.98, 1301.42,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(931, 2724.29, -2457.69, 1299.83,   0.00, 0.00, 0.00, 50, 50);
	pWallCon[13] = CreateDynamicObject(16339, 2670.67, -2453.26, 1303.56,   0.00, 0.00, 270.00, 50, 50);
	pWallCon[12] = CreateDynamicObject(16339, 2670.70, -2453.98, 1303.56,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(1800, 2682.91, -2456.16, 1298.80,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(16339, 2670.63, -2456.58, 1303.56,   0.00, 0.00, 270.00, 50, 50);
	CreateDynamicObject(1800, 2683.12, -2451.49, 1298.80,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(2602, 2681.08, -2454.20, 1299.33,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(2602, 2680.06, -2453.04, 1299.33,   0.00, 0.00, 180.00, 50, 50);
	CreateDynamicObject(2949, 2714.15, -2452.33, 1298.85,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(2949, 2700.22, -2450.70, 1298.85,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(14439, 2718.21, -2442.14, 1304.00,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(14439, 2702.70, -2442.14, 1304.00,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(14439, 2687.73, -2435.35, 1304.00,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(2961, 2690.58, -2447.19, 1299.99,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(16086, 2653.1899, -2466.1077, 1299.7600,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(16086, 2652.58, -2466.10, 1299.76,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(16267, 2658.03, -2457.05, 1297.50,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(1369, 2738.45, -2502.75, 1295.24,   0.00, 0.00, -20.00, 50, 50);
	CreateDynamicObject(1810, 2739.95, -2502.92, 1294.62,   0.00, 0.00, 10.00, 50, 50);
	CreateDynamicObject(1810, 2740.89, -2503.29, 1294.62,   0.00, 0.00, -33.00, 50, 50);
	CreateDynamicObject(1810, 2732.56, -2504.03, 1294.62,   0.00, 0.00, 76.00, 50, 50);
	CreateDynamicObject(1810, 2731.65, -2504.48, 1294.62,   0.00, 0.00, 273.00, 50, 50);
	CreateDynamicObject(1810, 2732.11, -2502.08, 1294.64,   0.00, 90.00, 273.00, 50, 50);
	CreateDynamicObject(2680, 2732.05, -2504.49, 1294.80,   -30.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(1368, 2732.24, -2506.30, 1295.31,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(8533, 2742.54, -2481.14, 1304.80,   180.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(2846, 2727.24, -2450.25, 1299.87,   0.00, 0.00, -164.00, 50, 50);
	pWallCon[15] = CreateDynamicObject(9339, 2734.91, -2486.25, 1302.11,   180.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(2990, 2738.25, -2469.43, 1297.59,   0.00, 180.00, 90.00, 50, 50);
	CreateDynamicObject(2990, 2738.2603, -2482.4888, 1297.5900,   0.00, 180.00, 90.00, 50, 50);
	CreateDynamicObject(2990, 2738.25, -2468.12, 1297.41,   0.00, 180.00, 90.00, 50, 50);
	CreateDynamicObject(1368, 2731.37, -2506.27, 1295.31,   0.00, 0.00, 268.00, 50, 50);
	pWallCon[14] = CreateDynamicObject(9339, 2734.78, -2485.98, 1302.11,   180.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(14401, 2751.02, -2505.89, 1294.94,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(14401, 2750.33, -2500.64, 1294.94,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(1508, 2758.19, -2481.72, 1300.43,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(1508, 2758.18, -2470.31, 1300.43,   0.00, 0.00, 0.00, 50, 50);
	for(new i = 0; i < sizeof(pWallCon); i++)
	{
		SetDynamicObjectMaterial(pWallCon[i], 0, 10824, "subpen1_sfse", "ws_sub_pen_conc2", 0);

	}
	for(new i = 0; i < sizeof(pWallWeed); i++)
	{
		SetDynamicObjectMaterial(pWallWeed[i], 0, 10824, "subpen1_sfse", "ws_sub_pen_conc3", 0);
	}
	//cell end
	//Bus interior
	CreateDynamicObject(18038, 518.34, 1962.89, 1000.47,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(16642, 518.67, 1977.07, 1000.82,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(16642, 515.08, 1977.06, 1000.83,   0.00, 0.00, 0.00, 50, 50);
	CreateObject(16642, 511.77, 1990.89, 1000.83,   0.00, 0.00, 0.00);
	CreateDynamicObject(16642, 497.3840, 1972.7500, 1000.8200,   0.00, 0.00, 180.00, 50, 50);
	CreateDynamicObject(16642, 497.40, 1957.66, 1000.81,   0.00, 0.00, 180.00, 50, 50);
	CreateDynamicObject(10154, 506.16, 1967.81, 999.62,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(10154, 509.89, 1967.83, 999.62,   0.00, 0.00, 180.00, 50, 50);
	CreateDynamicObject(7930, 507.77, 1968.62, 1001.23,   0.00, 270.00, 0.00, 50, 50);
	CreateDynamicObject(7930, 510.75, 1968.66, 1001.22,   0.00, 270.00, 0.00, 50, 50);
	CreateDynamicObject(19304, 509.84, 1968.14, 1000.01,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(19304, 509.85, 1971.64, 1000.01,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(19304, 506.24, 1968.15, 1000.01,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(19304, 506.24, 1971.65, 1000.01,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(3033, 508.41, 1964.25, 999.09,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(3033, 508.41, 1964.26, 1002.63,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(3033, 506.36, 1967.22, 1003.00,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(3033, 506.36, 1972.82, 1003.00,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(3033, 509.76, 1971.29, 1003.00,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(3033, 509.76, 1965.71, 1003.00,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(3033, 509.73, 1963.34, 1001.00,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(10154, 509.88, 1964.26, 999.62,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(14902, 508.19, 1949.41, 999.16,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(958, 508.61, 1964.27, 998.29,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(1663, 509.07, 1965.81, 998.86,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(1216, 509.79, 1965.10, 997.66,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(2748, 508.85, 1968.23, 999.00,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(2748, 508.87, 1970.26, 999.00,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(2748, 508.86, 1972.28, 999.00,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(19313, 515.15, 1966.80, 998.59,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(19313, 516.85, 1966.83, 998.59,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(19463, 509.63, 1969.10, 998.40,   0.00, 90.00, 0.00, 50, 50);
	CreateDynamicObject(18762, 511.12, 1966.00, 998.29,   90.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(18074, 513.67, 1966.40, 998.90,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(2911, 506.38, 1965.07, 998.40,   0.00, 0.00, 90.00, 50, 50);
	//Bus interior end
	CreateObject(14572, 1768.08, 1051.16, 1000.38,   0.00, 0.00, 0.00);
	CreateDynamicObject(3055, 1768.77, 1047.42, 999.97,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(3055, 1771.30, 1051.28, 999.97,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(3055, 1768.55, 1055.00, 999.97,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(3055, 1765.21, 1051.29, 999.97,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(14573, 1768.67, 1051.19, 1000.26,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(14575, 1771.26, 1048.61, 1001.46,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(14574, 1767.96, 1054.82, 999.15,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(1264, 1767.83, 1053.27, 998.32,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(1264, 1768.80, 1053.93, 998.92,   0.00, 0.00, -84.00, 50, 50);
	CreateDynamicObject(929, 1767.17, 1054.14, 998.79,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(1778, 1767.07, 1048.84, 997.88,   0.00, 0.00, 18.00, 50, 50);
	CreateDynamicObject(2994, 1770.05, 1048.37, 998.38,   0.00, 0.00, 40.00, 50, 50);
	CreateDynamicObject(2994, 1768.89, 1048.81, 998.38,   0.00, 0.00, 91.00, 50, 50);
	CreateDynamicObject(2994, 1769.85, 1049.74, 998.38,   0.00, 0.00, -47.00, 50, 50);
	CreateDynamicObject(1428, 1770.22, 1052.88, 999.32,   0.00, 0.00, 0.00, 50, 50);
	CreateObject(16647, -613.69, 2423.20, 992.58,   0.00, 0.00, 180.00);
	CreateDynamicObject(16642, -615.44, 2416.22, 1000.33,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(16662, -621.01, 2431.09, 996.10,   0.00, 0.00, -25.00, 50, 50);
	CreateDynamicObject(16662, -610.90, 2421.70, 996.31,   0.00, 0.00, 307.00, 50, 50);
	CreateDynamicObject(16642, -614.46, 2410.26, 1000.34,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(18980, -616.68, 2424.49, 996.51,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(3117, -615.36, 2424.31, 995.69,   45.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(2607, -615.86, 2423.30, 995.63,   0.00, 0.00, 180.00, 50, 50);
	CreateDynamicObject(3386, -613.55, 2420.23, 995.25,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(16092, -616.89, 2425.74, 995.00,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(11631, -618.23, 2423.32, 996.50,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(16532, -616.80, 2427.12, 994.79,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(14782, -613.44, 2419.04, 996.19,   0.00, 0.00, 270.00, 50, 50);
	CreateDynamicObject(1999, -614.49, 2423.41, 995.24,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(1806, -618.27, 2421.99, 995.28,   0.00, 0.00, -33.00, 50, 50);
	CreateDynamicObject(1806, -613.75, 2422.06, 995.28,   0.00, 0.00, 25.00, 50, 50);
	CreateDynamicObject(1806, -615.82, 2421.87, 995.28,   0.00, 0.00, -11.00, 50, 50);
	CreateDynamicObject(1806, -622.78, 2420.66, 995.28,   0.00, 0.00, -69.00, 50, 50);
	CreateDynamicObject(1806, -620.70, 2420.08, 995.28,   0.00, 0.00, 11.00, 50, 50);
	CreateDynamicObject(3109, -615.94, 2419.65, 996.51,   0.00, 0.00, 270.00, 50, 50);
	CreateObject(16642, 125.02, 1621.15, 1000.75,   0.00, 0.00, 0.00);
	CreateDynamicObject(3396, 118.20, 1617.56, 998.24,   0.00, 0.00, 270.00, 50, 50);
	CreateDynamicObject(3386, 120.38, 1624.42, 998.10,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(3395, 118.23, 1624.28, 998.24,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(16642, 112.66, 1610.25, 999.05,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(10632, 116.35, 1625.53, 1000.02,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(16339, 128.81, 1616.79, 998.55,   0.00, 0.00, 270.00, 50, 50);
	CreateDynamicObject(18608, 118.94, 1628.32, 1002.98,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(1616, 113.65, 1623.93, 1001.00,   0.00, 0.00, 180.00, 50, 50);
	CreateDynamicObject(1616, 113.67, 1610.90, 1001.00,   0.00, 0.00, 180.00, 50, 50);
	CreateDynamicObject(10632, 116.35, 1632.13, 1000.02,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(14464, 96.04, 1618.78, 1001.50,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(2343, 119.38, 1620.85, 998.82,   0.00, 0.00, 180.00, 50, 50);
	CreateDynamicObject(3384, 121.06, 1621.52, 999.57,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(11353, 143.67, 1616.41, 998.29,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(11353, 121.74, 1589.90, 997.63,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(11353, 121.84, 1584.78, 997.49,   0.00, 0.00, 0.00, 50, 50);
	CreateObject(18038, 128.58, 1615.57, 1000.48,   0.00, 0.00, 0.00);
	CreateDynamicObject(18038, 134.14, 1619.26, 1000.47,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(3389, 121.51, 1622.58, 998.10,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(11353, 121.87, 1643.49, 998.29,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(11353, 121.84, 1638.99, 998.29,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(18608, 107.00, 1620.80, 1003.88,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(18608, 107.00, 1608.92, 1003.88,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(3109, 121.36, 1609.40, 999.50,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(11353, 119.20, 1603.48, 997.63,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(11353, 88.93, 1628.55, 998.29,   0.00, 0.00, -90.00, 50, 50);
	CreateDynamicObject(11353, 143.49, 1625.80, 998.29,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(11353, 146.66, 1625.77, 998.29,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(3109, 118.52, 1630.87, 999.50,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(1516, 118.59, 1628.44, 998.43,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(2310, 119.20, 1626.83, 998.74,   0.00, 0.00, 302.00, 50, 50);
	CreateDynamicObject(2310, 119.82, 1629.84, 998.74,   0.00, 0.00, 76.00, 50, 50);
	CreateDynamicObject(2310, 118.64, 1630.05, 998.74,   0.00, 0.00, 98.00, 50, 50);
	CreateDynamicObject(1616, 117.01, 1630.40, 1001.20,   0.00, 0.00, 180.00, 50, 50);
	CreateDynamicObject(3109, 115.53, 1628.05, 999.36,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(3109, 113.74, 1603.99, 999.36,   0.00, 0.00, 270.00, 50, 50);
	CreateDynamicObject(2412, 115.98, 1604.71, 998.30,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(2412, 113.82, 1604.70, 998.30,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(2412, 113.99, 1627.57, 998.30,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(2412, 115.93, 1627.56, 998.30,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(1722, 114.86, 1619.55, 998.30,   0.00, 0.00, 270.00, 50, 50);
	CreateDynamicObject(1722, 114.90, 1621.06, 998.30,   0.00, 0.00, 270.00, 50, 50);
	CreateDynamicObject(1722, 114.91, 1622.50, 998.30,   0.00, 0.00, 270.00, 50, 50);
	CreateDynamicObject(1722, 114.83, 1609.55, 998.30,   0.00, 0.00, 270.00, 50, 50);
	CreateDynamicObject(1722, 114.82, 1608.23, 998.30,   0.00, 0.00, 270.00, 50, 50);
	CreateDynamicObject(1722, 114.81, 1606.84, 998.30,   0.00, 0.00, 270.00, 50, 50);
	CreateDynamicObject(1722, 115.14, 1605.10, 998.30,   0.00, 0.00, 302.00, 50, 50);
	CreateDynamicObject(19313, 113.24, 1616.54, 1004.10,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(1499, 113.25, 1616.52, 998.28,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(19313, 121.78, 1616.56, 997.41,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(1810, 117.61, 1609.72, 998.25,   0.00, 0.00, -69.00, 50, 50);
	CreateDynamicObject(1810, 117.68, 1608.15, 998.25,   0.00, 0.00, -95.00, 50, 50);
	CreateDynamicObject(1810, 117.72, 1606.70, 998.25,   0.00, 0.00, -84.00, 50, 50);
	CreateDynamicObject(1810, 118.20, 1605.34, 998.25,   0.00, 90.00, -114.00, 50, 50);
	CreateDynamicObject(11353, 146.85, 1616.38, 998.29,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(18980, 116.54, 1626.38, 999.18,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(18980, 103.61, 1616.77, 1002.18,   90.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(19313, 113.24, 1616.54, 1004.95,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(18980, 116.34, 1610.96, 999.18,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(18980, 116.34, 1603.79, 999.18,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(2608, 113.47, 1620.80, 998.90,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(3109, 121.37, 1619.07, 999.46,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(3386, 120.67, 1617.46, 998.10,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(10632, 116.35, 1632.13, 1000.02,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(10632, 116.35, 1625.53, 1000.02,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(10632, 116.36, 1625.53, 1000.02,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(10632, 116.36, 1632.13, 1000.02,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(10632, 116.36, 1625.53, 1000.02,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(10632, 116.36, 1632.13, 1000.02,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(10632, 116.35, 1632.13, 1000.02,   0.00, 0.00, 180.00, 50, 50);
	CreateDynamicObject(10632, 116.35, 1625.53, 1000.02,   0.00, 0.00, 180.00, 50, 50);
	CreateDynamicObject(1808, 115.84, 1616.08, 998.20,   0.00, 0.00, 270.00, 50, 50);
	CreateDynamicObject(18066, 115.99, 1609.44, 999.09,   90.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(18066, 115.99, 1608.02, 999.09,   90.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(18066, 115.99, 1606.60, 999.09,   90.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(18066, 115.99, 1605.18, 999.09,   90.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(18066, 116.43, 1604.99, 999.09,   90.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(18066, 115.99, 1603.76, 999.09,   90.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(18066, 116.43, 1606.41, 999.09,   90.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(18066, 116.43, 1607.82, 999.09,   90.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(18066, 116.43, 1609.24, 999.09,   90.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(18066, 116.43, 1610.66, 999.09,   90.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(2894, 118.65, 1628.63, 998.96,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(18980, 121.46, 1626.70, 999.18,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(16101, 115.92, 1609.71, 999.01,   0.00, 90.00, 270.00, 50, 50);
	CreateDynamicObject(16101, 115.93, 1609.65, 999.11,   0.00, 180.00, 254.00, 50, 50);
	CreateDynamicObject(16101, 116.50, 1610.52, 999.01,   0.00, 90.00, 270.00, 50, 50);
	CreateDynamicObject(16101, 116.50, 1605.62, 999.01,   0.00, 90.00, 270.00, 50, 50);
	CreateObject(10781, 160.50, 1528.78, 992.01,   0.00, 0.00, 0.00);
	CreateDynamicObject(10781, 241.12, 1486.00, 992.01,   0.00, 0.00, 270.00);
	CreateDynamicObject(3095, 191.57, 1502.55, 997.60,   90.00, 0.00, 90.00);
	CreateDynamicObject(16775, 191.85, 1501.76, 992.00,   0.00, 0.00, 90.00);
	CreateDynamicObject(16775, 145.89, 1486.33, 992.00,   0.00, 0.00, 0.00);
	CreateDynamicObject(3095, 144.12, 1486.66, 997.60,   90.00, 0.00, 0.00);
	CreateDynamicObject(18038, -72.33, 1536.04, 1000.30,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(14438, -88.84, 1531.54, 1004.01,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(2448, -88.59, 1524.70, 998.13,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(2446, -89.57, 1524.73, 998.13,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(2446, -90.57, 1524.73, 998.13,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(2446, -91.57, 1524.73, 998.13,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(2446, -92.56, 1524.73, 998.13,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(2446, -93.56, 1524.73, 998.13,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(2805, -89.58, 1517.49, 1000.00,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(2803, -89.96, 1517.92, 998.72,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(2543, -93.16, 1519.51, 998.00,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(2539, -92.88, 1518.53, 997.08,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(1989, -89.74, 1519.45, 997.88,   0.00, 0.00, 270.00, 50, 50);
	CreateDynamicObject(2418, -92.59, 1522.92, 998.20,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(2451, -87.03, 1521.43, 998.20,   0.00, 0.00, 180.00, 50, 50);
	CreateDynamicObject(2415, -88.94, 1521.53, 998.21,   0.00, 0.00, 180.00, 50, 50);
	CreateDynamicObject(2417, -92.82, 1521.95, 998.21,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(2718, -88.22, 1520.97, 1000.56,   0.00, 0.00, 180.00, 50, 50);
	CreateDynamicObject(2446, -86.31, 1521.30, 998.13,   0.00, 0.00, 90.00, 50, 50);
	CreateObject(18038, -105.78, 1527.26, 1000.47,   0.00, 0.00, 180.00);
	CreateDynamicObject(11353, -82.41, 1542.97, 997.29,   0.00, 0.00, -90.00, 50, 50);
	CreateDynamicObject(11353, -118.17, 1543.01, 995.89,   0.00, 0.00, -90.00, 50, 50);
	CreateDynamicObject(3109, -84.84, 1527.33, 999.48,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(3084, -93.16, 1535.76, 1002.54,   0.00, 180.00, 270.00, 50, 50);
	CreateDynamicObject(2762, -92.63, 1533.66, 998.61,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(2762, -88.52, 1533.29, 998.61,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(18057, -88.30, 1542.23, 998.61,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(2310, -90.11, 1534.55, 998.73,   0.00, 0.00, 142.00, 50, 50);
	CreateDynamicObject(2310, -88.86, 1531.96, 998.73,   0.00, 0.00, 258.00, 50, 50);
	CreateDynamicObject(2310, -86.50, 1534.17, 998.73,   0.00, 0.00, 91.00, 50, 50);
	CreateDynamicObject(2310, -92.67, 1535.97, 998.73,   0.00, 0.00, 91.00, 50, 50);
	CreateDynamicObject(2310, -91.35, 1533.26, 998.73,   0.00, 0.00, -33.00, 50, 50);
	CreateDynamicObject(2310, -89.88, 1541.31, 998.73,   0.00, 0.00, -33.00, 50, 50);
	CreateDynamicObject(2310, -90.26, 1538.76, 998.73,   0.00, 0.00, 55.00, 50, 50);
	CreateDynamicObject(2310, -88.94, 1537.15, 998.73,   0.00, 0.00, -11.00, 50, 50);
	CreateDynamicObject(2310, -92.74, 1537.54, 998.73,   0.00, 0.00, -171.00, 50, 50);
	CreateDynamicObject(2310, -86.04, 1535.85, 998.73,   0.00, 0.00, 18.00, 50, 50);
	CreateDynamicObject(2310, -86.77, 1541.83, 998.73,   0.00, 0.00, 4.00, 50, 50);
	CreateDynamicObject(2310, -88.95, 1539.57, 998.51,   90.00, 0.00, 33.00, 50, 50);
	CreateDynamicObject(19313, -93.70, 1524.84, 1003.50,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(19313, -79.63, 1524.82, 1004.10,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(19302, -85.09, 1524.01, 999.50,   0.00, 0.00, -100.00, 50, 50);
	CreateDynamicObject(16656, -80.16, 1994.94, 1000.37,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(3395, -82.39, 1999.06, 997.35,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(3397, -91.49, 2000.68, 997.35,   0.00, 0.00, 180.00, 50, 50);
	CreateObject(16656, -92.40, 1996.40, 1000.38,   0.00, 0.00, 0.00);
	CreateDynamicObject(3383, -91.35, 1995.16, 997.15,   0.00, 0.00, 270.00, 50, 50);
	CreateDynamicObject(3389, -91.46, 1998.36, 997.35,   0.00, 0.00, 180.00, 50, 50);
	CreateDynamicObject(3384, -86.22, 1996.57, 998.75,   0.00, 0.00, 180.00, 50, 50);
	CreateDynamicObject(3384, -87.71, 1996.43, 998.75,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(3384, -87.71, 1995.39, 998.75,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(3384, -86.22, 1995.53, 998.75,   0.00, 0.00, 180.00, 50, 50);
	CreateDynamicObject(4724, -76.17, 2003.36, 998.11,   0.00, 0.00, 180.00, 50, 50);
	CreateDynamicObject(4724, -82.73, 2010.69, 998.11,   0.00, 0.00, -90.00, 50, 50);
	CreateDynamicObject(2994, -85.62, 1996.97, 997.86,   0.00, 0.00, 25.00, 50, 50);
	CreateDynamicObject(1997, -83.31, 2003.99, 997.36,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(1997, -86.13, 2003.86, 997.36,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(1185, -85.55, 2005.16, 997.90,   0.00, 90.00, 270.00, 50, 50);
	CreateDynamicObject(1185, -83.89, 2005.14, 997.90,   0.00, 90.00, 270.00, 50, 50);
	CreateDynamicObject(1178, -84.20, 2005.09, 998.40,   0.00, 90.00, 270.00, 50, 50);
	CreateDynamicObject(1178, -85.87, 2005.11, 998.40,   0.00, 90.00, 270.00, 50, 50);
	CreateDynamicObject(1008, -85.50, 2004.99, 998.73,   0.00, 90.00, 270.00, 50, 50);
	CreateDynamicObject(1008, -83.80, 2004.99, 998.73,   0.00, 90.00, 270.00, 50, 50);
	CreateDynamicObject(14693, -84.24, 2003.44, 997.78,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(1806, -84.60, 2003.90, 997.35,   0.00, 0.00, 113.00, 50, 50);
	CreateDynamicObject(3109, -81.80, 1994.24, 998.61,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(2146, -89.42, 2004.10, 997.82,   0.00, 0.00, 110.00, 50, 50);
	CreateDynamicObject(9958, 2747.46, -2586.63, 800.09,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(9958, 2748.17, -2593.06, 800.09,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(9958, 2747.45, -2580.26, 800.09,   0.00, 0.00, 90.00, 50, 50);
	CreateObject(5156, 2767.75, -2579.09, 793.69,   0.00, 0.00, 0.00);
	CreateDynamicObject(9819, 2732.59, -2584.70, 794.63,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(9822, 2733.14, -2585.39, 794.38,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(9583, 2742.12, -2589.14, 793.57,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(9583, 2741.93, -2584.08, 793.57,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(9583, 2734.51, -2589.15, 793.57,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(9583, 2728.76, -2589.15, 793.57,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(9583, 2728.60, -2586.50, 793.57,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(3675, 2743.48, -2588.43, 797.50,   180.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(14578, 2740.78, -2585.50, 797.92,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(3753, 2718.01, -2593.39, 800.94,   0.00, 0.00, 270.00, 50, 50);
	CreateDynamicObject(3753, 2762.13, -2597.25, 800.94,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(2634, 2747.49, -2586.66, 798.34,   270.00, 180.00, 0.00, 50, 50);
	CreateDynamicObject(1437, 2747.44, -2586.59, 795.00,   20.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(2634, 2727.67, -2587.79, 795.28,   0.00, 0.00, 270.00, 50, 50);
	CreateDynamicObject(2634, 2752.47, -2585.77, 795.28,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(2960, 2737.79, -2586.68, 797.29,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(2960, 2731.99, -2586.55, 797.29,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(2960, 2745.15, -2586.69, 797.29,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(2606, 2736.25, -2584.24, 796.28,   20.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(2606, 2734.25, -2584.24, 796.28,   20.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(9822, 2733.68, -2592.37, 794.38,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(9822, 2736.19, -2592.36, 794.38,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(9583, 2752.25, -2584.11, 793.57,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(9583, 2752.31, -2587.28, 793.57,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(9583, 2752.23, -2589.22, 793.57,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(16662, 2739.33, -2577.66, 794.83,   0.00, 0.00, -25.00, 50, 50);
	CreateDynamicObject(16782, 2727.83, -2585.38, 796.21,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(2986, 2732.18, -2589.28, 795.85,   46.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(2986, 2737.77, -2589.31, 795.85,   46.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(2986, 2741.49, -2589.32, 795.85,   46.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(3787, 2749.99, -2588.84, 794.25,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(964, 2747.37, -2588.50, 793.70,   0.00, 0.00, 30.00, 50, 50);
	CreateDynamicObject(9822, 2739.35, -2592.41, 794.38,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(1671, 2741.83, -2585.04, 794.13,   0.00, 0.00, -60.00, 50, 50);
	CreateDynamicObject(1671, 2741.84, -2586.46, 794.13,   0.00, 0.00, -98.00, 50, 50);
	CreateDynamicObject(1671, 2736.11, -2587.11, 794.13,   0.00, 0.00, -229.00, 50, 50);
	CreateDynamicObject(14798, 58.67, 2633.13, 1000.97,   0.00, 0.00, 0.00, 50, 50);
	CreateObject(8418, 50.98, 2621.20, 1001.27,   0.00, 0.00, 0.00);
	CreateDynamicObject(14782, 59.12, 2636.18, 1001.69,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(18062, 59.23, 2637.08, 1003.94,   0.00, 0.00, 270.00, 50, 50);
	CreateDynamicObject(18109, 64.35, 2632.80, 1006.94,   0.00, 0.00, 0.00, 50, 50);
	CreateObject(8418, 72.30, 2622.26, 1001.27,   0.00, 0.00, 0.00);
	CreateDynamicObject(18064, 54.58, 2638.16, 1001.73,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(2358, 62.19, 2635.61, 1001.85,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(2358, 62.99, 2635.62, 1001.85,   0.00, 0.00, 180.00, 50, 50);
	CreateDynamicObject(2358, 62.61, 2635.61, 1002.07,   0.00, 0.00, 190.00, 50, 50);
	CreateDynamicObject(14782, 62.36, 2633.23, 1001.69,   0.00, 0.00, 180.00, 50, 50);
	CreateDynamicObject(14798, 64.85, 2639.86, 1000.95,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(14798, 62.24, 2639.02, 1000.94,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(16101, 116.17, 1605.22, 1000.17,   0.00, 90.00, 90.00, 50, 50);
	CreateDynamicObject(16101, 116.16, 1605.24, 1000.17,   0.00, 90.00, 270.00, 50, 50);
	CreateDynamicObject(2949, 2748.36, -2480.45, 1298.85,   0.00, 0.00, 270.00, 50, 50);
	CreateDynamicObject(1989, 2747.31, -2486.87, 1298.84,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(2543, 2748.35, -2486.92, 1298.83,   0.00, 0.00, 0.00, 50, 50);
	CreateDynamicObject(2539, 2746.54, -2487.77, 1297.84,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(2539, 2746.54, -2488.79, 1297.84,   0.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(2803, 2748.61, -2490.29, 1299.25,   0.00, 0.00, -142.00, 50, 50);
	CreateDynamicObject(3055, 1768.01, 1051.10, 1002.97,   90.00, 0.00, 90.00, 50, 50);
	CreateDynamicObject(2949, 1765.35, 1049.51, 997.90,   0.00, 0.00, 180.00, 50, 50);
	//New prison exterior, DeMorgan

	CreateDynamicObject(5174, 216.37, 1929.74, 20.59,   0.00, 0.00, 180.00);
	CreateObject(10610, 206.95, 1936.81, 19.94,   0.00, 0.00, 180.00);
	CreateDynamicObject(8247, 275.67, 1953.40, 20.40,   0.00, 0.00, 0.00);
	CreateDynamicObject(4199, 198.43, 1928.83, 15.62,   0.00, 0.00, 270.00);
	CreateDynamicObject(4199, 209.00, 1928.86, 15.61,   0.00, 0.00, 270.00);
	CreateDynamicObject(16093, 201.30, 1944.84, 30.43,   0.00, 0.00, 180.00);
	CreateDynamicObject(16638, 201.23, 1945.81, 28.69,   0.00, 0.00, 180.00);
	CreateDynamicObject(16095, 216.20, 1946.54, 30.42,   0.00, 0.00, 0.00);
	CreateDynamicObject(4199, 210.78, 1949.06, 15.62,   0.00, 0.00, 270.00);
	CreateDynamicObject(4199, 191.74, 1949.03, 15.61,   0.00, 0.00, 270.00);
	CreateDynamicObject(5174, 195.06, 1947.84, 20.60,   0.00, 0.00, 0.00);
	CreateDynamicObject(5174, 195.82, 1942.37, 13.00,   0.00, 0.00, 0.00);
	CreateDynamicObject(5174, 207.75, 1935.62, 13.60,   0.00, 0.00, 180.00);
	CreateDynamicObject(986, 215.78, 1950.35, 26.13,   0.00, 0.00, 0.00);
	CreateDynamicObject(986, 207.75, 1950.35, 26.13,   0.00, 0.00, 0.00);
	CreateDynamicObject(986, 199.72, 1950.35, 26.13,   0.00, 0.00, 0.00);
	CreateDynamicObject(986, 191.69, 1950.35, 26.13,   0.00, 0.00, 0.00);
	CreateDynamicObject(986, 187.66, 1950.35, 26.13,   0.00, 0.00, 0.00);
	CreateDynamicObject(986, 183.65, 1946.32, 26.13,   0.00, 0.00, 90.00);
	CreateDynamicObject(986, 183.65, 1938.29, 26.13,   0.00, 0.00, 90.00);
	CreateDynamicObject(986, 183.66, 1931.47, 26.13,   0.00, 0.00, 90.00);
	CreateDynamicObject(986, 187.68, 1927.47, 26.13,   0.00, 0.00, 0.00);
	CreateDynamicObject(986, 195.71, 1927.47, 26.13,   0.00, 0.00, 0.00);
	CreateDynamicObject(986, 203.74, 1927.47, 26.13,   0.00, 0.00, 0.00);
	CreateDynamicObject(986, 211.76, 1927.47, 26.13,   0.00, 0.00, 0.00);
	CreateDynamicObject(986, 215.78, 1927.46, 26.13,   0.00, 0.00, 0.00);
	CreateDynamicObject(986, 219.80, 1931.47, 26.13,   0.00, 0.00, 90.00);
	CreateDynamicObject(986, 219.80, 1939.50, 26.13,   0.00, 0.00, 90.00);
	CreateDynamicObject(986, 219.81, 1946.31, 26.13,   0.00, 0.00, 90.00);
	CreateDynamicObject(18762, 224.99, 1922.95, 16.61,   0.00, 90.00, 0.00);
	CreateDynamicObject(19312, 191.20, 1869.81, 21.53,   0.00, 0.00, 0.00);
	CreateDynamicObject(1278, 182.91, 1952.41, 29.61,   0.00, 0.00, 135.00);
	CreateDynamicObject(1278, 213.47, 1978.08, 25.61,   0.00, 0.00, 45.00);
	CreateDynamicObject(17513, 199.63, 1991.87, 8.69,   0.00, 0.00, 0.00);
	CreateDynamicObject(745, 212.74, 1973.71, 16.63,   0.00, 0.00, 76.00);
	CreateDynamicObject(3819, 223.82, 1957.66, 17.62,   0.00, 0.00, 270.00);
	CreateDynamicObject(1226, 224.11, 1996.33, 20.45,   0.00, 0.00, 280.00);
	CreateDynamicObject(1368, 213.55, 1988.83, 17.36,   0.00, 0.00, 270.00);
	CreateDynamicObject(1368, 206.14, 1980.58, 16.86,   136.00, 0.00, 290.00);
	CreateDynamicObject(1368, 209.66, 1966.12, 17.36,   0.00, 0.00, 0.00);
	CreateDynamicObject(1368, 195.94, 1966.53, 17.36,   0.00, 0.00, 10.00);
	CreateDynamicObject(1368, 209.29, 1967.97, 17.36,   0.00, 0.00, 193.00);
	CreateDynamicObject(1368, 195.79, 1967.96, 17.36,   0.00, 0.00, 178.00);
	CreateDynamicObject(984, 220.52, 1995.84, 18.31,   0.00, 0.00, 0.00);
	CreateDynamicObject(11472, 222.11, 2005.41, 14.64,   0.00, 0.00, 90.00);
	CreateDynamicObject(11472, 227.11, 1987.83, 14.44,   0.00, 0.00, 270.00);
	CreateDynamicObject(18766, 229.15, 2000.86, 15.09,   0.00, 0.00, 90.00);
	CreateDynamicObject(18766, 229.14, 1993.44, 15.08,   0.00, 0.00, 90.00);
	CreateDynamicObject(18766, 220.14, 1992.74, 15.08,   0.00, 0.00, 90.00);
	CreateDynamicObject(18766, 220.15, 2000.26, 15.09,   0.00, 0.00, 90.00);
	CreateDynamicObject(1446, 211.49, 1967.09, 17.40,   0.00, 0.00, -1.00);
	CreateDynamicObject(8856, 203.52, 1966.70, 16.40,   0.00, -5.00, 89.00);
	CreateDynamicObject(8856, 199.46, 1966.75, 16.39,   0.00, -5.00, 89.00);
	CreateDynamicObject(1446, 206.82, 1967.18, 17.40,   0.00, 0.00, -1.00);
	CreateDynamicObject(1446, 191.66, 1967.41, 17.40,   0.00, 0.00, -1.00);
	CreateDynamicObject(1446, 196.40, 1967.48, 17.37,   -7.00, 0.00, -1.00);
	CreateDynamicObject(1694, 195.41, 1934.44, 39.07,   0.00, 0.00, 90.00);
	CreateDynamicObject(1411, 223.15, 1955.33, 24.03,   0.00, 0.00, 0.00);
	CreateDynamicObject(1411, 226.40, 1955.30, 24.03,   0.00, 0.00, 0.00);
	CreateDynamicObject(1411, 217.86, 1954.24, 24.03,   0.00, 0.00, 0.00);
	CreateDynamicObject(1411, 212.58, 1954.25, 24.03,   0.00, 0.00, 0.00);
	CreateDynamicObject(1411, 207.28, 1954.24, 24.03,   0.00, 0.00, 0.00);
	CreateDynamicObject(1411, 202.00, 1954.27, 24.03,   0.00, 0.00, 0.00);
	CreateDynamicObject(1411, 196.73, 1954.28, 24.03,   0.00, 0.00, 0.00);
	CreateDynamicObject(1411, 191.48, 1954.32, 24.03,   0.00, 0.00, 0.00);
	CreateDynamicObject(1411, 186.15, 1954.33, 24.03,   0.00, 0.00, 0.00);
	CreateDynamicObject(1411, 180.55, 1955.26, 24.03,   0.00, 0.00, 0.00);
	CreateDynamicObject(1411, 177.39, 1955.23, 24.03,   0.00, 0.00, 0.00);
	CreateDynamicObject(1411, 174.53, 1952.39, 24.03,   0.00, 0.00, 90.00);
	CreateDynamicObject(1411, 174.52, 1949.34, 24.03,   0.00, 0.00, 90.00);
	CreateDynamicObject(1411, 175.40, 1943.79, 24.03,   0.00, 0.00, 90.00);
	CreateDynamicObject(1411, 175.39, 1938.53, 24.03,   0.00, 0.00, 90.00);
	CreateDynamicObject(1411, 229.14, 1952.44, 24.03,   0.00, 0.00, 270.00);
	CreateDynamicObject(1411, 229.13, 1949.14, 24.03,   0.00, 0.00, 270.00);
	CreateDynamicObject(1411, 228.24, 1943.84, 24.03,   0.00, 0.00, 270.00);
	CreateDynamicObject(1411, 228.24, 1938.60, 24.03,   0.00, 0.00, 270.00);
	CreateDynamicObject(1369, 195.24, 1989.76, 17.26,   0.00, 0.00, -273.00);
	CreateDynamicObject(5069, 211.09, 1999.60, 17.10,   0.00, 0.00, 180.00);
	CreateDynamicObject(14840, 219.60, 2010.06, 18.37,   0.00, 0.00, 270.00);
	CreateDynamicObject(984, 209.99, 1967.19, 17.27,   0.00, 0.00, 89.00);
	CreateDynamicObject(863, 213.79, 1968.07, 16.65,   0.00, 0.00, 0.00);
	CreateDynamicObject(863, 198.58, 1967.01, 16.65,   0.00, 0.00, 0.00);
	CreateDynamicObject(863, 203.88, 1966.90, 16.65,   0.00, 0.00, -84.00);
	CreateDynamicObject(862, 203.99, 1966.87, 16.63,   0.00, 0.00, 0.00);
	CreateDynamicObject(862, 211.73, 1966.24, 16.63,   0.00, 0.00, 0.00);
	CreateDynamicObject(863, 190.08, 1990.89, 16.65,   0.00, 0.00, 0.00);
	CreateDynamicObject(849, 198.47, 1966.45, 16.66,   0.00, 0.00, 0.00);
	CreateDynamicObject(849, 226.67, 1992.67, 16.77,   0.00, 0.00, 0.00);
	CreateDynamicObject(851, 225.50, 1993.35, 16.65,   0.00, 0.00, 0.00);
	CreateDynamicObject(1442, 223.89, 1995.00, 17.20,   0.00, 0.00, 0.00);
	CreateDynamicObject(1442, 209.25, 1984.15, 17.24,   0.00, 0.00, 0.00);
	CreateDynamicObject(850, 223.62, 1999.18, 16.75,   0.00, 0.00, 0.00);
	CreateDynamicObject(2631, 236.85, 1997.30, 17.64,   0.00, 0.00, 10.00);
	CreateDynamicObject(2628, 241.00, 2006.80, 17.64,   0.00, 0.00, 270.00);
	CreateDynamicObject(2629, 237.05, 2000.81, 17.64,   0.00, 0.00, -55.00);
	CreateDynamicObject(2629, 232.18, 1997.96, 17.64,   0.00, 0.00, 55.00);
	CreateDynamicObject(3071, 234.40, 1994.67, 17.85,   0.00, 90.00, 0.00);
	CreateDynamicObject(3071, 235.15, 1994.67, 17.85,   0.00, 90.00, -62.00);
	CreateDynamicObject(3071, 237.47, 2000.16, 17.85,   0.00, 90.00, -120.00);
	CreateDynamicObject(745, 239.59, 1963.76, 16.63,   0.00, 0.00, 127.00);
	CreateDynamicObject(16319, 236.12, 1968.44, 15.92,   6.00, 0.00, 180.00);
	CreateDynamicObject(3286, 231.09, 1943.62, 21.32,   0.00, 0.00, 0.00);
	CreateDynamicObject(16305, 230.52, 1947.92, 18.63,   0.00, 0.00, 0.00);
	CreateDynamicObject(16317, 231.33, 1939.25, 15.41,   0.00, 0.00, -193.00);
	CreateDynamicObject(2237, 236.72, 1944.47, 18.27,   0.00, 10.00, 0.00);
	CreateDynamicObject(2237, 237.35, 1943.85, 18.27,   0.00, 10.00, 98.00);
	CreateDynamicObject(2237, 235.46, 1944.26, 18.97,   0.00, 5.00, 98.00);
	CreateDynamicObject(2936, 234.31, 1946.60, 17.68,   0.00, 0.00, 0.00);
	CreateDynamicObject(2936, 233.14, 1946.57, 18.00,   0.00, 0.00, -62.00);
	CreateDynamicObject(2936, 237.49, 1944.99, 17.00,   0.00, 0.00, -120.00);
	CreateDynamicObject(946, 201.32, 1975.56, 18.82,   0.00, 0.00, 0.00);
	CreateDynamicObject(946, 201.41, 2003.24, 18.82,   0.00, 0.00, 180.00);
	CreateDynamicObject(12926, 215.59, 1988.24, 16.07,   0.00, 0.00, 270.00);
	CreateDynamicObject(1432, 223.37, 1969.27, 16.71,   0.00, 0.00, 0.00);
	CreateDynamicObject(1432, 229.02, 1967.03, 16.71,   0.00, 0.00, 47.00);
	CreateDynamicObject(1432, 236.93, 1973.17, 16.71,   0.00, 0.00, 47.00);
	CreateDynamicObject(1432, 234.28, 1989.60, 17.71,   0.00, 0.00, 47.00);
	CreateDynamicObject(1368, 229.81, 1994.73, 18.33,   0.00, 0.00, 91.00);
	CreateDynamicObject(1368, 216.64, 1995.85, 18.33,   0.00, 0.00, 70.00);
	CreateDynamicObject(1368, 224.37, 2007.99, 18.33,   0.00, 0.00, -4.00);
	CreateDynamicObject(3035, 201.16, 1922.28, 17.39,   0.00, 0.00, 0.00);
	CreateDynamicObject(3035, 191.91, 1922.32, 17.39,   0.00, 0.00, 0.00);
	CreateDynamicObject(1439, 198.29, 1922.48, 16.64,   0.00, 0.00, 0.00);
	CreateDynamicObject(1439, 171.83, 1927.61, 17.24,   0.00, 0.00, 270.00);
	CreateDynamicObject(1635, 191.47, 1922.69, 20.34,   0.00, 0.00, 90.00);
	CreateDynamicObject(8879, 244.38, 2016.16, 22.60,   0.00, 0.00, 156.00);
	CreateDynamicObject(8879, 192.11, 2015.00, 22.60,   0.00, 0.00, 222.00);
	CreateDynamicObject(8879, 255.34, 1952.84, 22.60,   0.00, 0.00, 91.00);
	CreateDynamicObject(8878, 241.48, 2010.27, 23.37,   0.00, 0.00, 18.00);
	CreateDynamicObject(8878, 196.56, 2009.98, 23.37,   0.00, 0.00, 86.00);
	CreateDynamicObject(8878, 248.68, 1952.75, 23.37,   0.00, 0.00, -45.00);
	CreateDynamicObject(8151, 221.31, 1970.93, 19.71,   0.00, 0.00, 0.00);
	CreateDynamicObject(1358, 250.49, 2006.61, 17.83,   0.00, 0.00, 84.00);
	CreateDynamicObject(746, 244.49, 1991.76, 16.63,   0.00, 0.00, 0.00);
	CreateDynamicObject(747, 251.98, 1987.67, 16.63,   0.00, 0.00, 0.00);
	CreateDynamicObject(1358, 245.75, 2006.64, 17.76,   0.00, 0.00, 113.00);
	CreateDynamicObject(1440, 245.51, 2002.99, 17.10,   0.00, 0.00, 0.00);
	CreateDynamicObject(1508, 209.24, 1923.42, 18.96,   0.00, 0.00, 90.00);
	CreateDynamicObject(3109, 206.02, 1954.20, 19.08,   0.00, 0.00, 270.00);
	CreateDynamicObject(3279, 194.81, 2023.05, 16.60,   0.00, 0.00, 0.00);
	CreateDynamicObject(3279, 257.43, 1972.78, 16.60,   0.00, 0.00, 90.00);
	CreateDynamicObject(11472, 173.02, 1929.26, 15.04,   0.00, 0.00, 0.00);
	CreateDynamicObject(11472, 174.50, 1929.27, 15.03,   0.00, 0.00, 0.00);
	CreateDynamicObject(11472, 175.9998, 1929.2739, 15.0300,   0.00, 0.00, 0.00);
	CreateDynamicObject(3109, 174.98, 1926.08, 19.20,   0.00, 0.00, 0.00);
	CreateDynamicObject(11472, 173.98, 1923.26, 14.31,   0.00, 0.00, 270.00);
	CreateDynamicObject(11472, 173.61, 1924.76, 14.31,   0.00, 0.00, 270.00);
	CreateDynamicObject(8674, 172.33, 1929.97, 17.54,   0.00, 0.00, 90.00);
	CreateDynamicObject(8674, 177.49, 1935.15, 17.54,   0.00, 0.00, 0.00);
	CreateDynamicObject(19385, 174.99, 1926.80, 19.16,   0.00, 0.00, 0.00);
	CreateDynamicObject(4199, 210.55, 1852.36, 14.20,   0.00, 0.00, 90.00);
	CreateDynamicObject(2792, 286.59, 1981.04, 22.71,   0.00, 0.00, 270.00);
	CreateDynamicObject(2793, 286.39, 2015.19, 22.71,   0.00, 0.00, 270.00);
	CreateDynamicObject(16770, 369.69, 2579.46, 17.00,   0.00, 0.00, 120.00);
	CreateDynamicObject(3866, 355.56, 2614.49, 15.25,   0.00, 0.00, 0.00);
	CreateDynamicObject(11443, 354.72, 2616.80, 15.47,   0.00, 0.00, 0.00);
	CreateDynamicObject(16317, 347.35, 2625.93, 15.47,   0.00, 0.00, 16.00);
	CreateDynamicObject(4100, 369.16, 2573.75, 16.43,   0.00, 0.00, -5.00);
	CreateDynamicObject(4100, 380.43, 2581.60, 16.43,   0.00, 0.00, -5.00);
	CreateDynamicObject(16317, 345.06, 2606.56, 14.00,   0.00, 0.00, 16.00);
	CreateDynamicObject(3025, 356.14, 2607.69, 18.48,   0.00, 0.00, 25.00);
	CreateDynamicObject(1588, 356.14, 2607.68, 16.91,   0.00, 0.00, 15.00);
	CreateDynamicObject(1589, 356.14, 2607.68, 16.91,   0.00, 0.00, 15.00);
	CreateDynamicObject(1590, 356.14, 2607.68, 16.91,   0.00, 0.00, 15.00);
	CreateDynamicObject(1591, 356.14, 2607.68, 16.91,   0.00, 0.00, 15.00);
	CreateDynamicObject(1592, 356.14, 2607.68, 16.91,   0.00, 0.00, 15.00);
	CreateDynamicObject(3025, 359.22, 2611.44, 18.48,   0.00, 0.00, 25.00);
	CreateDynamicObject(1588, 359.20, 2611.44, 16.91,   0.00, 0.00, 15.00);
	CreateDynamicObject(1589, 359.20, 2611.44, 16.91,   0.00, 0.00, 15.00);
	CreateDynamicObject(1590, 359.20, 2611.44, 16.91,   0.00, 0.00, 15.00);
	CreateDynamicObject(1591, 359.20, 2611.44, 16.91,   0.00, 0.00, 15.00);
	CreateDynamicObject(1592, 359.20, 2611.44, 16.91,   0.00, 0.00, 15.00);
	CreateDynamicObject(3025, 353.65, 2619.95, 19.98,   0.00, 0.00, 25.00);
	CreateDynamicObject(1588, 353.63, 2619.99, 18.41,   0.00, 0.00, 15.00);
	CreateDynamicObject(1589, 353.63, 2619.99, 18.41,   0.00, 0.00, 15.00);
	CreateDynamicObject(1590, 353.63, 2619.99, 18.41,   0.00, 0.00, 15.00);
	CreateDynamicObject(1591, 353.63, 2619.99, 18.41,   0.00, 0.00, 15.00);
	CreateDynamicObject(1592, 353.63, 2619.99, 18.41,   0.00, 0.00, 15.00);
	CreateDynamicObject(3025, 348.06, 2616.96, 19.98,   0.00, 0.00, 25.00);
	CreateDynamicObject(1588, 348.03, 2617.00, 18.41,   0.00, 0.00, 15.00);
	CreateDynamicObject(1589, 348.03, 2617.00, 18.41,   0.00, 0.00, 15.00);
	CreateDynamicObject(1590, 348.03, 2617.00, 18.41,   0.00, 0.00, 15.00);
	CreateDynamicObject(1591, 348.03, 2617.00, 18.41,   0.00, 0.00, 15.00);
	CreateDynamicObject(1592, 348.03, 2617.00, 18.41,   0.00, 0.00, 15.00);
	CreateDynamicObject(3025, 349.39, 2605.29, 19.48,   0.00, 0.00, 0.00);
	CreateDynamicObject(1588, 349.39, 2605.29, 17.91,   0.00, 0.00, 0.00);
	CreateDynamicObject(1589, 349.39, 2605.29, 17.91,   0.00, 0.00, 0.00);
	CreateDynamicObject(1590, 349.39, 2605.29, 17.91,   0.00, 0.00, 0.00);
	CreateDynamicObject(1591, 349.39, 2605.29, 17.91,   0.00, 0.00, 0.00);
	CreateDynamicObject(1592, 349.39, 2605.29, 17.91,   0.00, 0.00, 0.00);
	CreateDynamicObject(1585, 349.24, 2605.47, 17.07,   0.00, 0.00, 180.00);
	CreateDynamicObject(3108, 355.18, 2502.16, 15.56,   0.00, 0.00, 0.00);
	CreateDynamicObject(5174, 215.61, 1929.75, 20.60,   0.00, 0.00, 180.00);
	CreateDynamicObject(18553, 226.70, 1872.51, 13.74,   0.00, 0.00, 0.00);
	CreateDynamicObject(3109, 263.76, 1859.02, 9.00,   0.00, 0.00, 180.00);
	CreateDynamicObject(3109, 268.09, 1852.29, 9.00,   0.00, 0.00, 270.00);
	CreateDynamicObject(3550, 191.97, 2010.70, 19.17,   0.00, 0.00, 90.00);
	CreateDynamicObject(1278, 252.57, 1930.78, 13.61,   0.00, 0.00, 135.00);
	CreateDynamicObject(8210, 188.62, 1982.34, 18.10,   0.00, 0.00, 90.00);
	CreateDynamicObject(1278, 188.86, 2010.16, 25.61,   0.00, 0.00, -76.00);
	CreateDynamicObject(18762, 228.59, 1925.87, 16.61,   0.00, 90.00, 90.00);
	CreateDynamicObject(18762, 175.13, 1951.18, 16.99,   0.00, 90.00, 90.00);
	CreateDynamicObject(2921, 190.84, 1950.74, 28.51,   0.00, 0.00, 270.00);
	CreateDynamicObject(2921, 213.41, 1978.12, 28.51,   0.00, 0.00, 98.00);
	CreateDynamicObject(2921, 255.85, 1974.27, 28.51,   0.00, 0.00, 62.00);
	CreateDynamicObject(2921, 220.56, 1922.62, 23.51,   0.00, 0.00, 62.00);
	CreateDynamicObject(2921, 226.04, 1873.89, 15.51,   0.00, 0.00, 76.00);
	CreateDynamicObject(2921, 160.44, 1934.49, 31.51,   0.00, 0.00, 4.00);
	CreateDynamicObject(2921, 265.65, 1893.90, 31.51,   0.00, 0.00, 76.00);
	CreateDynamicObject(2921, 263.61, 1809.10, 30.11,   0.00, 0.00, 229.00);

	return 1;
}
stock loadInteriorObjects()
{
	//SF Naval Submarines
	CreateDynamicObject(9958, -1396.73792, 426.79895, 4.48616,   0.00000, 0.00000, -269.28030); //submarine
	CreateDynamicObject(9958, -1397.58215, 390.58801, 4.48616,   0.00000, 0.00000, -270.00034); //submarine
	//Hitman HQ (June 2014, Calvin Catt)
	CreateObject(5679, 1410.17517, -1333.37390, 900.03601,   0.00000, 0.00000, 0.00000);
	CreateObject(4601, 1463.03137, -1406.39197, 785.34991,   0.00000, 0.00000, 0.00000);
	CreateObject(4601, 1463.03137, -1366.40405, 785.32990,   0.00000, 0.00000, 0.00000);
	CreateObject(4601, 1463.03137, -1326.41797, 785.32990,   0.00000, 0.00000, 0.00000);
	CreateObject(4601, 1463.03137, -1286.20203, 785.32990,   0.11800, 0.00000, 0.00000);
	CreateObject(4601, 1463.30884, -1239.21960, 785.55988,   5.64400, 0.00000, 0.00000);
	CreateObject(4601, 1463.02930, -1446.30994, 785.34991,   0.04400, 0.00000, 0.00000);
	CreateObject(4601, 1463.02930, -1486.29785, 785.34991,   0.04400, 0.00000, 0.00000);
	CreateObject(4601, 1460.22888, -1588.32471, 917.84735,   -90.00000, 0.00000, 358.76950);
	CreateObject(4601, 1464.92493, -1118.77466, 895.34418,   90.00000, 0.00000, 358.76950);
	CreateObject(5679, 1411.77417, -1502.42029, 900.03400,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(3294, 1410.87817, -1476.92041, 898.34210,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3294, 1409.79224, -1227.91675, 900.34210,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3294, 298.18234, 1821.62866, 7.47733,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3294, 276.96243, 1821.63904, 7.47730,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3294, 246.94696, 1841.75525, 7.40570,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3294, 255.99239, 1835.57031, 3.70698,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2063, 245.18120, 1797.18970, 7.31240,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(2063, 251.68040, 1805.36133, 7.31240,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2063, 245.18040, 1805.36133, 7.31240,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2063, 241.18040, 1805.36133, 7.31240,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(358, 250.76500, 1805.29773, 8.15910,   -90.00000, 0.00000, 0.53200);
	CreateDynamicObject(358, 251.88550, 1805.32202, 8.14910,   -90.00000, 0.00000, 0.53200);
	CreateDynamicObject(358, 251.84270, 1805.28516, 7.75790,   -90.00000, 0.00000, 0.53200);
	CreateDynamicObject(358, 250.74289, 1805.27905, 7.75790,   -90.00000, 0.00000, 0.53200);
	CreateDynamicObject(358, 251.84270, 1805.28516, 7.30390,   -90.95200, 0.00000, 0.53200);
	CreateDynamicObject(358, 250.72040, 1805.24841, 6.83590,   -90.95200, 0.00000, 0.53200);
	CreateDynamicObject(358, 250.72040, 1805.24841, 7.30590,   -90.95200, 0.00000, 0.53200);
	CreateDynamicObject(358, 251.81999, 1805.21240, 6.83590,   -90.95200, 0.00000, 0.53200);
	CreateDynamicObject(356, 244.42125, 1805.32959, 8.15460,   -90.00000, 0.00000, 0.00000);
	CreateDynamicObject(356, 245.36304, 1805.31396, 8.15460,   -90.00000, 0.00000, 0.00000);
	CreateDynamicObject(356, 245.36301, 1805.31396, 7.73460,   -90.00000, 0.00000, 0.00000);
	CreateDynamicObject(356, 244.42120, 1805.32959, 7.73460,   -90.00000, 0.00000, 0.00000);
	CreateDynamicObject(356, 245.36301, 1805.31396, 7.28660,   -90.00000, 0.00000, 0.00000);
	CreateDynamicObject(356, 244.42120, 1805.32959, 7.28660,   -90.00000, 0.00000, 0.00000);
	CreateDynamicObject(356, 245.36301, 1805.31396, 6.81060,   -90.00000, 0.00000, 0.00000);
	CreateDynamicObject(356, 244.42120, 1805.32959, 6.81060,   -90.00000, 0.00000, 0.00000);
	CreateDynamicObject(351, 240.31877, 1805.27686, 8.17100,   -90.00000, 0.00000, 0.00000);
	CreateDynamicObject(351, 241.43880, 1805.27686, 8.17100,   -90.00000, 0.00000, 0.00000);
	CreateDynamicObject(351, 241.45917, 1805.31665, 7.73100,   -90.00000, 0.00000, 0.00000);
	CreateDynamicObject(351, 240.31880, 1805.27686, 7.73100,   -90.00000, 0.00000, 0.00000);
	CreateDynamicObject(351, 241.45920, 1805.31665, 7.31100,   -90.00000, 0.00000, 0.00000);
	CreateDynamicObject(351, 240.31880, 1805.27686, 7.33200,   -90.00000, 0.00000, 0.00000);
	CreateDynamicObject(351, 241.45920, 1805.31665, 6.82800,   -90.00000, 0.00000, 0.00000);
	CreateDynamicObject(351, 240.31880, 1805.27686, 6.82800,   -90.00000, 0.00000, 0.00000);
	CreateDynamicObject(2319, 247.00891, 1796.41516, 6.89586,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2319, 249.50890, 1796.41516, 6.89590,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2319, 252.00890, 1796.41516, 6.89590,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2055, 254.22211, 1798.10193, 8.08090,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(3025, 252.60657, 1787.63635, 7.85826,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3025, 250.60660, 1787.63635, 7.85830,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3025, 248.60660, 1787.63635, 7.85830,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3025, 249.60660, 1785.63635, 7.85830,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3025, 251.60660, 1785.63635, 7.85830,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3025, 254.10660, 1787.63635, 7.85830,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3025, 247.10660, 1787.63635, 7.85830,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3025, 248.10629, 1782.65637, 7.85830,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3025, 253.60660, 1782.63635, 7.85830,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3025, 250.60660, 1782.63635, 7.85830,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2049, 250.61357, 1787.73242, 7.41358,   0.00000, 0.00000, -180.00000);
	CreateDynamicObject(2049, 248.61360, 1787.73242, 7.41360,   0.00000, 0.00000, -180.00000);
	CreateDynamicObject(2049, 252.61360, 1787.73242, 7.41360,   0.00000, 0.00000, -180.00000);
	CreateDynamicObject(2049, 254.11360, 1787.73242, 7.41360,   0.00000, 0.00000, -180.00000);
	CreateDynamicObject(2051, 251.61360, 1785.73242, 7.41360,   0.00000, 0.00000, -180.00000);
	CreateDynamicObject(2051, 249.61360, 1785.73242, 7.41360,   0.00000, 0.00000, -180.00000);
	CreateDynamicObject(2051, 250.61360, 1782.73242, 7.41360,   0.00000, 0.00000, -180.00000);
	CreateDynamicObject(2051, 248.11559, 1782.77246, 7.41360,   0.00000, 0.00000, -180.00000);
	CreateDynamicObject(2051, 253.61360, 1782.73242, 7.41360,   0.00000, 0.00000, -180.00000);
	CreateDynamicObject(2049, 247.11360, 1787.73242, 7.41360,   0.00000, 0.00000, -180.00000);
	CreateDynamicObject(19424, 247.30161, 1796.60657, 7.40560,   0.00000, 0.00000, 135.92000);
	CreateDynamicObject(19423, 246.98219, 1796.65088, 7.40560,   0.00000, 0.00000, 166.88000);
	CreateDynamicObject(19424, 249.64081, 1796.57092, 7.40560,   0.00000, 0.00000, 135.98000);
	CreateDynamicObject(19422, 249.84950, 1796.69092, 7.40560,   0.00000, 0.00000, 51.20000);
	CreateDynamicObject(19422, 251.86250, 1796.56128, 7.40560,   0.00000, 0.00000, 197.53990);
	CreateDynamicObject(19421, 252.17270, 1796.72339, 7.40560,   0.00000, 0.00000, 164.35992);
	CreateDynamicObject(356, 253.56821, 1796.66516, 7.44190,   -90.00000, 0.00000, 180.00000);
	CreateDynamicObject(356, 250.97935, 1796.57983, 7.44190,   -90.00000, 0.00000, 180.00000);
	CreateDynamicObject(356, 248.45473, 1796.63220, 7.44190,   -90.00000, 0.00000, 180.00000);
	CreateDynamicObject(3014, 253.76424, 1798.68005, 6.68681,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3014, 253.44861, 1797.64075, 6.68681,   0.00000, 0.00000, -28.44000);
	CreateDynamicObject(3014, 253.86122, 1799.63806, 6.68681,   0.00000, 0.00000, -19.80000);
	CreateDynamicObject(3014, 253.32814, 1804.59875, 6.68681,   0.00000, 0.00000, 13.20000);
	CreateDynamicObject(3014, 249.58536, 1805.04224, 6.68681,   0.00000, 0.00000, 13.20000);
	CreateDynamicObject(348, 250.06180, 1796.54980, 7.42900,   -90.00000, 0.00000, 0.00000);
	CreateDynamicObject(348, 252.63057, 1796.70007, 7.42900,   -90.00000, 0.00000, -134.10004);
	CreateDynamicObject(348, 247.53537, 1796.51355, 7.42900,   -90.00000, 0.00000, -326.81998);
	CreateDynamicObject(342, 244.54919, 1797.16650, 8.08750,   90.00000, -69.23300, 0.00000);
	CreateDynamicObject(342, 245.80682, 1797.23218, 8.08750,   90.00000, -69.23300, 0.00000);
	CreateDynamicObject(342, 245.19521, 1797.21387, 8.08750,   90.00000, -69.23300, 0.00000);
	CreateDynamicObject(348, 244.34900, 1797.10779, 7.72100,   -90.00000, 0.00000, -326.82001);
	CreateDynamicObject(348, 245.04739, 1797.12292, 7.72300,   -90.00000, 0.00000, -326.82001);
	CreateDynamicObject(348, 245.81570, 1797.08240, 7.73300,   -90.00000, 0.00000, -326.82001);
	CreateDynamicObject(357, 245.37607, 1797.32458, 7.29350,   90.00000, 0.00000, 0.00000);
	CreateDynamicObject(357, 244.33325, 1797.27637, 7.29350,   90.00000, 0.00000, 0.00000);
	CreateDynamicObject(355, 244.36980, 1797.22742, 6.80370,   90.00000, 0.00000, 0.00000);
	CreateDynamicObject(355, 245.48279, 1797.25134, 6.80370,   90.00000, 0.00000, 0.00000);
	CreateDynamicObject(3015, 242.65692, 1798.46631, 6.50040,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3015, 242.78627, 1799.12744, 6.50040,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3015, 242.01219, 1798.72729, 6.50040,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3577, 240.95711, 1800.51587, 6.31690,   0.00000, 0.00000, -43.80000);
	CreateDynamicObject(3015, 243.26537, 1805.08167, 6.50040,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19515, 242.68156, 1797.67456, 6.63880,   0.00000, -90.00000, 0.00000);
	CreateDynamicObject(19515, 243.41095, 1797.27393, 6.63880,   0.00000, -90.00000, 0.00000);
	CreateDynamicObject(19515, 246.84792, 1797.18115, 6.63880,   0.00000, -90.00000, 0.00000);
	CreateDynamicObject(19515, 249.45258, 1797.20752, 6.63880,   0.00000, -90.00000, 0.00000);
	CreateDynamicObject(19515, 252.14508, 1797.16589, 6.63880,   0.00000, -90.00000, 0.00000);
	//psyche ward
	CreateDynamicObject(17946, 260.53, 1989.20, 1020.70,   0.00, 0.00, 270.00);
	CreateDynamicObject(3971, 258.54, 1985.97, 1020.28,   0.00, 0.00, 0.00);
	CreateDynamicObject(14408, 253.42, 1981.78, 1020.73,   0.00, 0.00, 0.00);
	CreateDynamicObject(14408, 253.45, 1998.27, 1020.73,   0.00, 0.00, 0.00);
	CreateDynamicObject(14445, 254.51, 1982.83, 1019.60,   0.00, 0.00, 90.00);
	CreateDynamicObject(14445, 254.51, 1984.33, 1019.60,   0.00, 0.00, 90.00);
	CreateDynamicObject(1738, 251.34, 1987.01, 1018.21,   0.00, 0.00, 0.00);
	CreateDynamicObject(2208, 240.13, 1986.51, 1017.74,   0.00, 0.00, 0.00);
	CreateDynamicObject(2199, 245.54, 1984.58, 1017.73,   0.00, 0.00, 180.00);
	CreateDynamicObject(2604, 241.46, 1989.37, 1018.53,   0.00, 0.00, 0.00);
	CreateDynamicObject(2187, 239.13, 1990.17, 1017.74,   0.00, 0.00, 90.00);
	CreateDynamicObject(1795, 258.74, 1984.28, 1017.74,   0.00, 0.00, 90.00);
	CreateDynamicObject(1808, 243.12, 1995.35, 1017.74,   0.00, 0.00, 0.00);
	CreateDynamicObject(1828, 259.50, 1992.55, 1017.74,   0.00, 0.00, 0.00);
	CreateDynamicObject(2186, 247.73, 1984.95, 1017.72,   0.00, 0.00, 180.00);
	CreateDynamicObject(14532, 259.33, 1985.02, 1018.71,   0.00, 0.00, 47.00);
	CreateDynamicObject(1705, 243.77, 1995.04, 1017.74,   0.00, 0.00, 0.00);
	CreateDynamicObject(1705, 244.93, 1995.04, 1017.74,   0.00, 0.00, 0.00);
	CreateDynamicObject(1705, 241.57, 1995.02, 1017.74,   0.00, 0.00, 0.00);
	CreateDynamicObject(1705, 240.41, 1995.02, 1017.74,   0.00, 0.00, 0.00);
	CreateDynamicObject(2184, 245.72, 1989.31, 1017.75,   0.00, 0.00, 161.00);
	CreateDynamicObject(1806, 239.09, 1987.49, 1017.74,   0.00, 0.00, 229.00);
	CreateDynamicObject(1806, 242.49, 1987.93, 1017.74,   0.00, 0.00, 331.00);
	CreateDynamicObject(1806, 240.69, 1988.86, 1017.74,   0.00, 0.00, 360.00);
	CreateDynamicObject(1806, 244.46, 1987.54, 1017.74,   0.00, 0.00, 18.00);
	CreateDynamicObject(2314, 246.55, 1995.10, 1017.75,   0.00, 0.00, 0.00);
	CreateDynamicObject(14408, 249.32, 1997.10, 1020.73,   0.00, 0.00, 90.00);
	CreateDynamicObject(14408, 251.65, 1991.09, 1020.73,   0.00, 0.00, -90.00);
	CreateDynamicObject(2723, 257.18, 1986.92, 1018.04,   0.00, 0.00, 0.00);
	CreateDynamicObject(1795, 262.41, 1991.76, 1017.74,   0.00, 0.00, 0.00);
	CreateDynamicObject(2723, 260.81, 1991.66, 1018.04,   0.00, 0.00, 0.00);
	CreateDynamicObject(14867, 240.20, 1984.34, 1019.24,   0.00, 0.00, 0.00);
	CreateDynamicObject(2777, 256.18, 1994.54, 1018.23,   0.00, 0.00, 62.00);
	CreateDynamicObject(2777, 257.03, 1992.41, 1018.23,   0.00, 0.00, -207.00);
	CreateDynamicObject(2777, 258.70, 1989.65, 1018.23,   0.00, 0.00, -287.00);
	CreateDynamicObject(2777, 258.87, 1987.76, 1018.23,   0.00, 0.00, -236.00);
	CreateDynamicObject(2166, 258.82, 1993.76, 1017.76,   0.00, 0.00, 90.00);
	CreateDynamicObject(2166, 260.49, 1988.33, 1017.76,   0.00, 0.00, 0.00);
	CreateDynamicObject(1806, 259.59, 1994.88, 1017.74,   0.00, 0.00, 118.00);
	CreateDynamicObject(1806, 262.09, 1987.87, 1017.74,   0.00, 0.00, 40.00);
	CreateDynamicObject(19465, 255.06, 1993.61, 1020.25,   0.00, 0.00, 0.00);
	CreateDynamicObject(19465, 255.05, 1987.67, 1020.25,   0.00, 0.00, 0.00);
	CreateDynamicObject(19464, 258.02, 1990.71, 1020.25,   0.00, 0.00, 90.00);
	CreateDynamicObject(19464, 263.95, 1990.72, 1020.25,   0.00, 0.00, 90.00);
	CreateDynamicObject(19464, 263.16, 1992.74, 1020.25,   0.00, 0.00, 0.00);
	CreateDynamicObject(19464, 263.16, 1986.80, 1020.25,   0.00, 0.00, 0.00);
	CreateDynamicObject(19464, 260.10, 1984.41, 1020.25,   0.00, 0.00, 90.00);
	CreateDynamicObject(19464, 254.17, 1984.41, 1020.25,   0.00, 0.00, 90.00);
	CreateDynamicObject(1502, 255.05, 1992.84, 1017.74,   0.00, 0.00, 90.00);
	CreateDynamicObject(1502, 255.07, 1986.89, 1017.74,   0.00, 0.00, 90.00);
	CreateDynamicObject(2257, 254.89, 1990.56, 1020.01,   0.00, 0.00, 270.00);
	CreateDynamicObject(2684, 263.01, 1992.88, 1019.57,   0.00, 0.00, 270.00);
	CreateDynamicObject(2684, 263.01, 1988.20, 1019.57,   0.00, 0.00, 270.00);
	CreateDynamicObject(2280, 262.55, 1994.08, 1019.41,   0.00, 0.00, 270.00);
	CreateDynamicObject(14532, 262.28, 1991.64, 1018.71,   0.00, 0.00, 47.00);
	CreateDynamicObject(2277, 262.54, 1988.88, 1019.09,   0.00, 0.00, 270.00);
	CreateDynamicObject(2066, 261.82, 1984.99, 1017.74,   0.00, 0.00, 180.00);
	CreateDynamicObject(2066, 261.24, 1984.99, 1017.74,   0.00, 0.00, 180.00);
	CreateDynamicObject(2066, 255.48, 1990.47, 1017.74,   0.00, 0.00, 180.00);
	CreateDynamicObject(2066, 248.94, 1986.55, 1017.74,   0.00, 0.00, 90.00);
	CreateDynamicObject(2066, 248.58, 1985.96, 1017.74,   0.00, 0.00, 270.00);
	CreateDynamicObject(14455, 260.84, 1990.56, 1019.28,   0.00, 0.00, 180.00);
	CreateDynamicObject(14455, 255.85, 1990.99, 1019.28,   0.00, 0.00, 0.00);
	CreateDynamicObject(3109, 237.86, 1994.44, 1018.93,   0.00, 0.00, 180.00);
	CreateDynamicObject(2894, 257.77, 1994.72, 1018.55,   0.00, 0.00, 80.00);
	CreateDynamicObject(2894, 245.10, 1989.25, 1018.52,   0.00, 0.00, 135.00);
	//mat pickup 1 water
	CreateDynamicObject(10444, 1408.88794, -1315.26917, 7.64780,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(10444, 1408.88794, -1345.62024, 7.64780,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(10444, 1408.88794, -1375.97522, 7.64780,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(10444, 1408.88794, -1406.33032, 7.64780,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(9831, 1412.32458, -1303.24463, 8.36786,   0.00000, 0.00000, 191.28003);
	CreateDynamicObject(9831, 1407.25427, -1303.55200, 8.36786,   0.00000, 0.00000, 191.28003);
	CreateDynamicObject(9833, 1410.52356, -1300.33899, 7.07312,   0.00000, -180.00000, -17.64000);
	//tiki store sign
	CreateDynamicObject(2599, 2348.74390, -1458.50610, 23.48579,   0.00000, 0.00000, -1.50001);
	//license sign
	CreateDynamicObject(2599, 1289.89697, -1844.42358, 13.02007,   0.00000, 0.00000, 233.60361);
	//taxi HQ
	CreateDynamicObject(3602, 1777.22864, -1928.42883, 5.59230,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19457, 1784.77307, -1910.11511, 16.88750,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19457, 1781.49512, -1910.11511, 16.88550,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19457, 1778.07715, -1910.11511, 16.88150,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19457, 1774.69531, -1910.11511, 16.87950,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19457, 1771.19824, -1919.74109, 16.87950,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19457, 1774.69531, -1919.74109, 16.87950,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19457, 1778.07715, -1919.74109, 16.88150,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19457, 1781.49512, -1919.74109, 16.88550,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19457, 1784.77307, -1919.74109, 16.88750,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19457, 1774.69531, -1929.36511, 16.87950,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19457, 1778.07715, -1929.36511, 16.88150,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19457, 1781.33716, -1928.81213, 16.88350,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19457, 1785.27307, -1928.81213, 16.88550,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19457, 1774.69531, -1930.63623, 16.87750,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19457, 1778.07507, -1930.63416, 16.87950,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(8615, 1770.40613, -1931.25598, 15.14350,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(19457, 1771.19824, -1910.11511, 16.88150,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19457, 1771.19824, -1910.11511, 16.87950,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19325, 1769.43787, -1921.55774, 18.43726,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19325, 1786.57886, -1921.41797, 18.67030,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1491, 1782.13220, -1926.39954, 16.92590,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(19390, 1782.15698, -1927.17920, 18.68490,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19361, 1777.93188, -1919.74097, 18.68490,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19361, 1783.73853, -1925.75366, 18.68490,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19390, 1781.26563, -1924.64307, 18.68490,   0.00000, 0.00000, 45.00000);
	CreateDynamicObject(19361, 1779.03918, -1922.41553, 18.68490,   0.00000, 0.00000, 45.00000);
	CreateDynamicObject(19361, 1777.92993, -1918.80298, 18.68490,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2207, 1782.03857, -1919.54053, 16.97430,   0.00000, 0.00000, -45.00000);
	CreateDynamicObject(1714, 1783.93237, -1918.63379, 16.97410,   0.00000, 0.00000, -32.16000);
	CreateDynamicObject(2190, 1782.17297, -1919.07434, 17.74740,   0.00000, 0.00000, 85.00000);
	CreateDynamicObject(2894, 1783.27002, -1920.32385, 17.74740,   0.00000, 0.00000, -23.48000);
	CreateDynamicObject(1671, 1782.89551, -1921.71899, 17.40990,   0.00000, 0.00000, 206.54800);
	CreateDynamicObject(2161, 1778.03259, -1920.78064, 16.97030,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2163, 1778.06689, -1919.44104, 16.96700,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(630, 1778.50635, -1917.83411, 17.95490,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1808, 1782.25305, -1925.18835, 16.97650,   0.00000, 0.00000, 134.14799);
	CreateDynamicObject(2167, 1778.95825, -1922.14978, 16.97480,   0.00000, 0.00000, 136.00000);
	CreateDynamicObject(1706, 1784.60681, -1925.16760, 16.97740,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1814, 1783.67346, -1923.73840, 16.97750,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2852, 1784.21753, -1923.20691, 17.48260,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2596, 1780.44263, -1923.26440, 19.32370,   0.00000, 0.00000, 136.00000);
	CreateDynamicObject(630, 1785.19849, -1917.85681, 17.95490,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2254, 1783.79163, -1925.63757, 18.92790,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(19361, 1782.15735, -1930.95593, 18.68490,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19361, 1782.85681, -1933.99561, 18.68490,   0.00000, 0.00000, 25.46100);
	CreateDynamicObject(19361, 1788.05322, -1935.37183, 18.68490,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2008, 1789.02124, -1928.39099, 16.97470,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1806, 1788.32043, -1927.17383, 16.97740,   0.00000, 0.00000, 153.65109);
	CreateDynamicObject(1806, 1788.71472, -1933.04846, 16.97740,   0.00000, 0.00000, 33.66597);
	CreateDynamicObject(2161, 1785.97986, -1935.26501, 16.97450,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(2162, 1782.85754, -1933.68005, 16.97520,   0.00000, 0.00000, 117.96600);
	CreateDynamicObject(2167, 1784.07996, -1935.27075, 16.97500,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(2002, 1784.85938, -1934.77515, 16.97510,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(630, 1783.67358, -1934.43384, 17.95490,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2276, 1784.94556, -1926.35706, 19.09170,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19521, 1782.61133, -1932.92688, 17.94890,   -13.08500, -90.00000, 180.00000);
	CreateDynamicObject(2737, 1782.29651, -1929.74524, 18.83150,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(630, 1785.64453, -1925.08276, 17.95490,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(630, 1782.60400, -1926.20776, 17.95490,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(630, 1777.36548, -1919.85474, 17.95490,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2161, 1772.15808, -1917.34814, 16.97120,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2165, 1779.59802, -1930.10767, 16.96770,   0.00000, 0.00000, 67.64402);
	CreateDynamicObject(2166, 1776.36194, -1917.79980, 16.96780,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1806, 1781.30420, -1929.70605, 16.97740,   0.00000, 0.00000, 101.33100);
	CreateDynamicObject(1671, 1778.20337, -1929.90869, 17.40940,   0.00000, 0.00000, -231.93999);
	CreateDynamicObject(2199, 1778.27124, -1921.90845, 16.97250,   0.00000, 0.00000, -45.50000);
	CreateDynamicObject(1703, 1776.11133, -1934.76196, 16.96680,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1703, 1770.23669, -1921.36963, 16.96680,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1703, 1779.66150, -1934.79602, 16.96680,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(630, 1770.11926, -1923.80945, 17.95490,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1819, 1769.74902, -1923.02808, 16.96600,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2855, 1770.33264, -1922.66479, 17.45920,   0.00000, 0.00000, 9.74400);
	CreateDynamicObject(948, 1776.89270, -1934.88367, 16.96601,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1491, 1780.70056, -1924.10876, 16.92590,   0.00000, 0.00000, -45.44400);
	CreateDynamicObject(2596, 1779.23499, -1923.17468, 19.50800,   0.00000, 0.00000, -45.44400);
	CreateDynamicObject(10282, 1773.46338, -1900.28772, 13.57620,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(14782, 1782.65100, -1935.03418, 13.58610,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(14826, 1771.74548, -1912.62927, 13.27720,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(3440, 1773.35156, -1914.26501, 11.58310,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3440, 1772.64343, -1913.99731, 11.13510,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3440, 1772.40454, -1910.78552, 11.49510,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3440, 1772.53906, -1911.81665, 11.13510,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1085, 1770.16333, -1915.37585, 13.08590,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1085, 1771.89087, -1912.34985, 13.08590,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1085, 1771.89087, -1915.37585, 13.08590,   0.00000, 0.00000, 10.00000);
	CreateDynamicObject(1085, 1770.16333, -1912.34985, 13.08590,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1431, 1770.91443, -1914.95569, 13.31930,   90.00000, 0.00000, 90.00000);
	CreateDynamicObject(1431, 1771.13135, -1914.32654, 13.31930,   90.00000, 0.00000, -90.00000);
	CreateDynamicObject(1431, 1771.10461, -1914.97131, 13.31930,   90.00000, 0.00000, -90.00000);
	CreateDynamicObject(1431, 1770.66724, -1909.80237, 13.08530,   0.00000, 0.00000, -87.30900);
	CreateDynamicObject(3498, 1775.36169, -1895.64368, 9.57590,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1431, 1771.10168, -1915.54749, 13.08530,   90.00000, 0.00000, 0.00000);
	CreateDynamicObject(3576, 1783.36145, -1917.65930, 12.58942,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2607, 1774.27332, -1915.06580, 12.95020,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18633, 1774.97778, -1915.12927, 13.37260,   1.79600, 90.00000, -10.00000);
	CreateDynamicObject(18635, 1773.67444, -1915.18201, 13.34520,   90.00000, 90.00000, -20.86200);
	CreateDynamicObject(18644, 1773.92700, -1914.83215, 13.36710,   -19.66000, 89.40800, 0.59200);
	CreateDynamicObject(19308, 1772.19629, -1895.28516, 13.56720,   0.00000, 0.00000, 103.22400);
	CreateDynamicObject(2922, 1785.49487, -1910.68640, 14.11670,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2922, 1785.53455, -1909.64746, 14.11670,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(13028, 1785.17236, -1921.43323, 16.20570,   0.00000, 93.00000, 0.00000);
	CreateDynamicObject(13028, 1785.13672, -1913.97375, 16.20570,   0.00000, 93.00000, 0.00000);
	CreateDynamicObject(1710, 1777.21130, -1934.92554, 12.59050,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1712, 1771.99451, -1932.43457, 12.58990,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2180, 1772.10791, -1929.63623, 12.59090,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2500, 1771.89392, -1929.52075, 13.37510,   0.00000, 0.00000, 91.96000);
	CreateDynamicObject(2149, 1772.08179, -1928.61060, 13.54500,   0.00000, 0.00000, 85.83500);
	CreateDynamicObject(2524, 1770.09192, -1906.55530, 12.58740,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1840, 1786.01013, -1925.25366, 16.14810,   0.00000, 180.00000, 180.00000);
	CreateDynamicObject(2690, 1785.44336, -1910.17383, 12.93100,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2063, 1781.16650, -1895.31042, 13.48540,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2567, 1770.64526, -1920.98450, 14.46960,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3761, 1780.89771, -1902.71826, 14.57760,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2688, 1785.50928, -1910.16663, 14.00450,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(19328, 1769.52222, -1920.70276, 14.46830,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19327, 1774.36157, -1935.38208, 15.68270,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(19310, 1781.31494, -1895.33313, 14.40140,   0.00000, 0.00000, 103.73998);
	CreateDynamicObject(2986, 1786.46106, -1925.38147, 14.95000,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(1738, 1769.71362, -1907.77771, 13.23850,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1738, 1778.59155, -1935.22351, 13.23850,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1224, 1797.51221, -1940.54443, 13.05194,   0.00000, 0.00000, 22.04000);
	CreateDynamicObject(930, 1781.79492, -1917.59949, 13.05240,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(18766, 1788.65137, -1909.87903, 11.47980,   105.00000, 0.00000, 90.00000);
	CreateDynamicObject(3035, 1792.34839, -1940.83081, 13.12570,   0.00000, 0.00000, 177.83998);
	CreateDynamicObject(966, 1810.10156, -1885.15698, 12.40630,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(983, 1810.31946, -1881.39160, 13.07216,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(983, 1811.32947, -1897.95728, 13.07216,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18285, 1779.15601, -1886.93665, 12.40062,   0.00000, 0.00000, 99.89998);
	CreateDynamicObject(18285, 1807.94116, -1913.64758, 12.41860,   0.00000, -0.20000, -63.90000);
	CreateDynamicObject(3035, 1795.21338, -1940.86633, 13.25209,   0.00000, 0.00000, -181.56015);
	CreateDynamicObject(4100, 1774.78345, -1941.99658, 14.18802,   0.00000, 0.00000, -39.06001);
	CreateDynamicObject(4100, 1758.29688, -1942.31555, 14.18800,   0.00000, 0.00000, -218.33987);
	CreateDynamicObject(19459, 1780.87134, -1917.22510, 18.70430,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2774, 1790.34448, -1935.22095, 7.44270,   0.00000, 180.00000, 0.00000);
	CreateDynamicObject(2774, 1786.86389, -1925.22583, 7.44270,   0.00000, 180.00000, 0.00000);
	CreateDynamicObject(2774, 1786.36389, -1917.72583, 7.44270,   0.00000, 180.00000, 0.00000);
	CreateDynamicObject(2774, 1786.36389, -1910.22583, 3.94270,   0.00000, 180.00000, 0.00000);
	CreateDynamicObject(2774, 1786.36389, -1902.72583, 3.94270,   0.00000, 180.00000, 0.00000);
	CreateDynamicObject(2774, 1786.36389, -1895.22583, 3.94270,   0.00000, 180.00000, 0.00000);
	CreateDynamicObject(13028, 1785.13672, -1906.47375, 16.20570,   0.00000, 93.00000, 0.00000);
	CreateDynamicObject(13028, 1785.13672, -1898.97375, 16.20570,   0.00000, 93.00000, 0.00000);
	CreateDynamicObject(18766, 1788.65137, -1900.12402, 11.48080,   105.00000, 0.00000, 90.00000);
	CreateDynamicObject(18766, 1788.65137, -1919.62402, 11.48080,   105.00000, 0.00000, 90.00000);
	CreateDynamicObject(3602, 1777.22864, -1913.42883, 5.59030,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3602, 1777.22864, -1902.92883, 5.59230,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2774, 1790.36389, -1925.22583, 7.44270,   0.00000, 180.00000, 0.00000);
	CreateDynamicObject(19462, 1774.69824, -1930.63416, 16.91350,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19462, 1778.19824, -1930.63416, 16.91350,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19462, 1781.69824, -1930.63416, 16.91350,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19462, 1785.19824, -1930.63416, 16.91350,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19462, 1788.69824, -1930.63416, 16.91350,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19462, 1771.19824, -1922.13416, 16.91150,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19462, 1774.69910, -1922.15417, 16.91150,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19462, 1778.19824, -1922.13416, 16.91150,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19462, 1781.69824, -1922.13416, 16.91150,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19462, 1785.19824, -1922.13416, 16.91150,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19361, 1785.05322, -1935.37378, 18.68290,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19361, 1781.46680, -1933.99561, 18.68490,   0.00000, 0.00000, -25.46100);
	CreateDynamicObject(19361, 1782.15527, -1930.38794, 18.68490,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19361, 1786.81848, -1925.75574, 18.68490,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19361, 1788.23853, -1925.75366, 18.68490,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2008, 1787.93787, -1931.77881, 16.97470,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19462, 1773.19617, -1930.63220, 16.91550,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(2774, 1769.36389, -1917.72583, 7.44270,   0.00000, 180.00000, 0.00000);
	CreateDynamicObject(2774, 1769.36389, -1925.22583, 7.44270,   0.00000, 180.00000, 0.00000);
	CreateDynamicObject(2774, 1769.36389, -1935.22583, 7.44270,   0.00000, 180.00000, 0.00000);
	CreateDynamicObject(2774, 1786.86389, -1935.22583, 7.44270,   0.00000, 180.00000, 0.00000);
	CreateDynamicObject(19457, 1784.77307, -1900.61511, 16.88550,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(2774, 1769.36389, -1910.22583, 3.94270,   0.00000, 180.00000, 0.00000);
	CreateDynamicObject(2774, 1769.36389, -1902.72583, 3.94270,   0.00000, 180.00000, 0.00000);
	CreateDynamicObject(2774, 1769.36389, -1895.22583, 3.94270,   0.00000, 180.00000, 0.00000);
	CreateDynamicObject(19325, 1787.17175, -1933.49512, 13.53310,   90.00000, 0.00000, 0.00000);
	CreateDynamicObject(19325, 1787.17175, -1927.06812, 13.53310,   90.00000, 0.00000, 0.00000);
	CreateDynamicObject(19435, 1788.26782, -1930.21497, 12.42280,   0.00000, 90.00000, 90.00000);
	CreateDynamicObject(19435, 1786.69580, -1930.21497, 12.42480,   0.00000, 90.00000, 90.00000);
	CreateDynamicObject(19466, 1787.18176, -1930.27319, 15.84980,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1569, 1787.21289, -1931.41162, 12.50830,   0.00000, 0.00000, -20.76000);
	CreateDynamicObject(1569, 1787.20117, -1929.10266, 12.50830,   0.00000, 0.00000, 23.16002);
	CreateDynamicObject(16101, 1787.16553, -1931.41760, 6.04500,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(16101, 1787.16553, -1929.12964, 6.04500,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19325, 1790.48718, -1931.21960, 18.80630,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19367, 1788.10950, -1935.45288, 18.55210,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19367, 1788.75269, -1925.53479, 18.62010,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19457, 1788.68945, -1930.38464, 16.88750,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19457, 1771.19824, -1922.15515, 16.87750,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19457, 1773.02930, -1930.63416, 16.87950,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19462, 1773.02222, -1930.63220, 16.91750,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19447, 1782.07568, -1894.89282, 14.08925,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19453, 1781.05444, -1917.25500, 18.68740,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19361, 1771.45459, -1917.25391, 18.68690,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19390, 1774.63867, -1917.25525, 18.68810,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19457, 1781.27307, -1900.61511, 16.88750,   0.00000, 90.00000, 180.00000);
	CreateDynamicObject(19457, 1777.77307, -1900.61511, 16.88550,   0.00000, 90.00000, 180.00000);
	CreateDynamicObject(19457, 1774.27307, -1900.61511, 16.88550,   0.00000, 90.00000, 180.00000);
	CreateDynamicObject(19457, 1771.19910, -1900.61511, 16.88750,   0.00000, 90.00000, 180.00000);
	CreateDynamicObject(19428, 1786.70203, -1918.39490, 14.95881,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19447, 1773.57568, -1894.89075, 14.08930,   0.00000, 0.00000, 90.00000);
	new yellow1 = CreateDynamicObject(18762, 1786.61121, -1896.94434, 17.10680,   90.00000, 0.00000, 0.00000);
	SetDynamicObjectMaterial(yellow1, 0, 19377, "seabed", "la_carp3", 0xFFF2F900);
	new yellow2 = CreateDynamicObject(18762, 1786.61121, -1901.94434, 17.10680,   90.00000, 0.00000, 0.00000);
	SetDynamicObjectMaterial(yellow2, 0, 19377, "seabed", "la_carp3", 0xFFF2F900);
	new yellow3 = CreateDynamicObject(18762, 1786.61121, -1906.94434, 17.10680,   90.00000, 0.00000, 0.00000);
	SetDynamicObjectMaterial(yellow3, 0, 19377, "seabed", "la_carp3", 0xFFF2F900);
	new yellow4 = CreateDynamicObject(18762, 1786.61121, -1911.94434, 17.10680,   90.00000, 0.00000, 0.00000);
	SetDynamicObjectMaterial(yellow4, 0, 19377, "seabed", "la_carp3", 0xFFF2F900);
	new yellow5 = CreateDynamicObject(18762, 1786.60925, -1916.94434, 17.10480,   90.00000, 0.00000, 0.00000);
	SetDynamicObjectMaterial(yellow5, 0, 19377, "seabed", "la_carp3", 0xFFF2F900);
	new yellow6 = CreateDynamicObject(18762, 1786.60925, -1921.94434, 17.10480,   90.00000, 0.00000, 0.00000);
	SetDynamicObjectMaterial(yellow6, 0, 19377, "seabed", "la_carp3", 0xFFF2F900);
	new yellow7 = CreateDynamicObject(18762, 1783.67004, -1894.94653, 17.10480,   90.00000, 0.00000, 90.00000);
	SetDynamicObjectMaterial(yellow7, 0, 19377, "seabed", "la_carp3", 0xFFF2F900);
	new yellow8 = CreateDynamicObject(18762, 1778.67004, -1894.94653, 17.10480,   90.00000, 0.00000, 90.00000);
	SetDynamicObjectMaterial(yellow8, 0, 19377, "seabed", "la_carp3", 0xFFF2F900);
	new yellow9 = CreateDynamicObject(18762, 1773.67004, -1894.94653, 17.10480,   90.00000, 0.00000, 90.00000);
	SetDynamicObjectMaterial(yellow9, 0, 19377, "seabed", "la_carp3", 0xFFF2F900);
	new yellow10 = CreateDynamicObject(18762, 1771.13000, -1894.94446, 17.10280,   90.00000, 0.00000, 90.00000);
	SetDynamicObjectMaterial(yellow10, 0, 19377, "seabed", "la_carp3", 0xFFF2F900);
	new yellow11 = CreateDynamicObject(18762, 1769.11121, -1896.94629, 17.10680,   90.00000, 0.00000, 0.00000);
	SetDynamicObjectMaterial(yellow11, 0, 19377, "seabed", "la_carp3", 0xFFF2F900);
	new yellow12 = CreateDynamicObject(18762, 1769.11121, -1901.94629, 17.10680,   90.00000, 0.00000, 0.00000);
	SetDynamicObjectMaterial(yellow12, 0, 19377, "seabed", "la_carp3", 0xFFF2F900);
	new yellow13 = CreateDynamicObject(18762, 1769.11121, -1906.94629, 17.10680,   90.00000, 0.00000, 0.00000);
	SetDynamicObjectMaterial(yellow13, 0, 19377, "seabed", "la_carp3", 0xFFF2F900);
	new yellow14 = CreateDynamicObject(18762, 1769.11121, -1911.94629, 17.10680,   90.00000, 0.00000, 0.00000);
	SetDynamicObjectMaterial(yellow14, 0, 19377, "seabed", "la_carp3", 0xFFF2F900);
	new yellow15 = CreateDynamicObject(18762, 1769.11316, -1915.44629, 17.10480,   90.00000, 0.00000, 0.00000);
	SetDynamicObjectMaterial(yellow15, 0, 19377, "seabed", "la_carp3", 0xFFF2F900);
	new yellow16 = CreateDynamicObject(18762, 1790.56091, -1926.96985, 20.75580,   90.00000, 0.00000, 0.00000);
	SetDynamicObjectMaterial(yellow16, 0, 19377, "seabed", "la_carp3", 0xFFF2F900);
	new yellow17 = CreateDynamicObject(18762, 1788.55981, -1924.96814, 20.75380,   90.00000, 0.00000, 90.00000);
	SetDynamicObjectMaterial(yellow17, 0, 19377, "seabed", "la_carp3", 0xFFF2F900);
	new yellow18 = CreateDynamicObject(18762, 1790.56091, -1933.46985, 20.75580,   90.00000, 0.00000, 0.00000);
	SetDynamicObjectMaterial(yellow18, 0, 19377, "seabed", "la_carp3", 0xFFF2F900);
	new yellow19 = CreateDynamicObject(18762, 1790.55896, -1930.46985, 20.75380,   90.00000, 0.00000, 0.00000);
	SetDynamicObjectMaterial(yellow19, 0, 19377, "seabed", "la_carp3", 0xFFF2F900);
	new yellow20 = CreateDynamicObject(18762, 1788.55725, -1935.45068, 20.75380,   90.00000, 0.00000, 90.00000);
	SetDynamicObjectMaterial(yellow20, 0, 19377, "seabed", "la_carp3", 0xFFF2F900);
	new yellow21 = CreateDynamicObject(18762, 1786.55933, -1921.97632, 20.75230,   90.00000, 0.00000, 0.00000);
	SetDynamicObjectMaterial(yellow21, 0, 19377, "seabed", "la_carp3", 0xFFF2F900);
	new yellow22 = CreateDynamicObject(18762, 1786.55725, -1919.41431, 20.75030,   90.00000, 0.00000, 0.00000);
	SetDynamicObjectMaterial(yellow22, 0, 19377, "seabed", "la_carp3", 0xFFF2F900);
	new yellow23 = CreateDynamicObject(18762, 1784.15601, -1917.41650, 20.75380,   90.00000, 0.00000, 90.00000);
	SetDynamicObjectMaterial(yellow23, 0, 19377, "seabed", "la_carp3", 0xFFF2F900);
	new yellow24 = CreateDynamicObject(18762, 1782.38916, -1917.41785, 20.75180,   90.00000, 0.00000, 90.00000);
	SetDynamicObjectMaterial(yellow24, 0, 19377, "seabed", "la_carp3", 0xFFF2F900);
	new yellow25 = CreateDynamicObject(18762, 1769.05261, -1933.46973, 20.74830,   90.00000, 0.00000, 0.00000);
	SetDynamicObjectMaterial(yellow25, 0, 19377, "seabed", "la_carp3", 0xFFF2F900);
	new yellow26 = CreateDynamicObject(18762, 1783.55725, -1935.45068, 20.75380,   90.00000, 0.00000, 90.00000);
	SetDynamicObjectMaterial(yellow26, 0, 19377, "seabed", "la_carp3", 0xFFF2F900);
	new yellow27 = CreateDynamicObject(18762, 1778.55725, -1935.45068, 20.75380,   90.00000, 0.00000, 90.00000);
	SetDynamicObjectMaterial(yellow27, 0, 19377, "seabed", "la_carp3", 0xFFF2F900);
	new yellow28 = CreateDynamicObject(18762, 1773.55725, -1935.45068, 20.75380,   90.00000, 0.00000, 90.00000);
	SetDynamicObjectMaterial(yellow28, 0, 19377, "seabed", "la_carp3", 0xFFF2F900);
	new yellow29 = CreateDynamicObject(18762, 1771.05530, -1935.45276, 20.75180,   90.00000, 0.00000, 90.00000);
	SetDynamicObjectMaterial(yellow29, 0, 19377, "seabed", "la_carp3", 0xFFF2F900);
	new yellow30 = CreateDynamicObject(18762, 1769.05261, -1928.46973, 20.74830,   90.00000, 0.00000, 0.00000);
	SetDynamicObjectMaterial(yellow30, 0, 19377, "seabed", "la_carp3", 0xFFF2F900);
	new yellow31 = CreateDynamicObject(18762, 1773.84888, -1917.03833, 20.75580,   90.00000, 0.00000, 90.00000);
	SetDynamicObjectMaterial(yellow31, 0, 19377, "seabed", "la_carp3", 0xFFF2F900);
	new yellow32 = CreateDynamicObject(18762, 1769.05261, -1923.46973, 20.74830,   90.00000, 0.00000, 0.00000);
	SetDynamicObjectMaterial(yellow32, 0, 19377, "seabed", "la_carp3", 0xFFF2F900);
	new yellow33 = CreateDynamicObject(18762, 1769.05066, -1919.05371, 20.75030,   90.00000, 0.00000, 0.00000);
	SetDynamicObjectMaterial(yellow33, 0, 19377, "seabed", "la_carp3", 0xFFF2F900);
	new yellow34 = CreateDynamicObject(18762, 1759.80591, -1916.49805, 19.86257,   90.00000, 0.00000, 0.00000);
	SetDynamicObjectMaterial(yellow34, 0, 19377, "seabed", "la_carp3", 0xFFF2F900);
	CreateDynamicObject(19428, 1786.69995, -1918.39294, 14.20580,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19428, 1786.70203, -1924.45886, 14.95880,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19428, 1786.69995, -1924.45691, 14.20580,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19428, 1786.70203, -1917.04895, 14.95880,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19428, 1786.69995, -1917.05090, 14.20580,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19428, 1786.70203, -1910.90405, 14.95880,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19428, 1786.69995, -1910.90295, 14.20580,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19428, 1786.70203, -1909.56006, 14.95880,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19428, 1786.70203, -1903.41211, 14.95880,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19428, 1786.70203, -1902.02209, 14.95880,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19428, 1786.70203, -1895.93213, 14.95880,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19428, 1786.69995, -1909.56702, 14.20580,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19428, 1786.69995, -1903.41101, 14.20580,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19428, 1786.69995, -1902.02600, 14.20580,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19428, 1786.69995, -1895.93201, 14.20580,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19447, 1782.07373, -1894.89478, 15.37330,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19447, 1773.57568, -1894.88867, 14.91330,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19447, 1769.48511, -1900.76685, 14.08930,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1840, 1785.55225, -1917.70996, 16.14810,   0.00000, 180.00000, 180.00000);
	CreateDynamicObject(19457, 1781.83716, -1928.81213, 16.88150,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19457, 1781.33716, -1930.69507, 16.88550,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19457, 1781.83716, -1930.69507, 16.88350,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19457, 1785.27307, -1930.69507, 16.88750,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19435, 1786.36560, -1926.71362, 12.42480,   0.00000, 90.00000, 90.00000);
	CreateDynamicObject(19435, 1786.36560, -1933.71362, 12.42480,   0.00000, 90.00000, 90.00000);
	CreateDynamicObject(19377, 1774.32690, -1900.07617, 16.96300,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19377, 1781.32690, -1900.07617, 16.96500,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19377, 1781.32690, -1909.57617, 16.96300,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19377, 1774.32690, -1909.57617, 16.96100,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19377, 1774.30713, -1912.52051, 16.95900,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19377, 1781.32690, -1912.51721, 16.95700,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19447, 1769.48315, -1910.26685, 14.08930,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19447, 1769.48523, -1919.76685, 14.08930,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19447, 1769.48315, -1929.76685, 14.08930,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19325, 1769.46411, -1899.16370, 15.33652,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19325, 1769.44226, -1906.43689, 15.33652,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19325, 1769.43762, -1913.96008, 15.33652,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19447, 1769.47717, -1929.76880, 17.56900,   0.00000, 180.00000, 0.00000);
	CreateDynamicObject(19377, 1774.67163, -1921.38928, 20.46320,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19447, 1769.47925, -1921.76685, 15.24880,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19447, 1769.46118, -1929.77075, 18.87740,   180.00000, 0.00000, 0.00000);
	CreateDynamicObject(19377, 1774.70898, -1930.75452, 20.46520,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19377, 1781.31201, -1922.02747, 20.46720,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19377, 1785.18604, -1930.75452, 20.46320,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19377, 1785.18604, -1929.94653, 20.46120,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19457, 1784.77307, -1900.11511, 16.88750,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19457, 1781.27307, -1900.11511, 16.88950,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19457, 1777.77307, -1900.11511, 16.88950,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19457, 1774.27307, -1900.11511, 16.88950,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19457, 1771.27307, -1900.11511, 16.89150,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19325, 1790.48523, -1929.21960, 18.80630,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19457, 1788.68945, -1930.66455, 16.88950,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19395, 1774.63940, -1917.22571, 18.70500,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19367, 1771.43884, -1917.22632, 18.70290,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19459, 1781.31714, -1935.66882, 18.70430,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19459, 1781.31909, -1935.67078, 15.45650,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19325, 1776.22644, -1935.58582, 18.39439,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19361, 1779.12988, -1935.49756, 18.68490,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19361, 1778.10291, -1935.49963, 18.68490,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19459, 1781.31909, -1935.67078, 11.95810,   180.00000, 0.00000, 90.00000);
	CreateDynamicObject(19459, 1774.32104, -1935.67285, 15.45650,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19459, 1774.32214, -1935.67285, 11.95810,   180.00000, 0.00000, 90.00000);
	CreateDynamicObject(19367, 1771.60950, -1935.67090, 18.72766,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19361, 1771.61084, -1935.49756, 18.61490,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3928, 1778.52747, -1904.32190, 17.05030,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1498, 1773.83765, -1917.19519, 16.94594,   0.00000, 0.00000, 117.30000);
	CreateDynamicObject(8580, 1757.82739, -1923.14246, 20.82530,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(8572, 1781.13745, -1916.02295, 19.31480,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(8597, 1751.86047, -1916.53015, 21.09350,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(8580, 1757.68542, -1904.67908, 20.81930,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(16101, 1769.39734, -1913.40332, 14.29180,   0.00000, -60.00000, 10.00000);
	CreateDynamicObject(16101, 1769.35168, -1919.71167, 14.29180,   0.00000, -60.00000, -10.00000);
	CreateDynamicObject(16101, 1750.22803, -1914.09216, 14.29180,   0.00000, -60.00000, -185.00000);
	CreateDynamicObject(16101, 1750.13696, -1918.91077, 14.29180,   0.00000, -60.00000, -175.00000);
	CreateDynamicObject(1569, 1751.16699, -1917.94116, 20.56838,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1569, 1751.15955, -1915.02124, 20.56840,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1432, 1761.50256, -1913.87976, 12.67390,   0.00000, 0.00000, 49.02002);
	CreateDynamicObject(1432, 1761.38611, -1918.35803, 12.67390,   0.00000, 0.00000, 7.32002);
	CreateDynamicObject(1432, 1761.38977, -1926.94250, 12.67390,   0.00000, 0.00000, 7.32002);
	CreateDynamicObject(1432, 1761.43628, -1922.42883, 12.67390,   0.00000, 0.00000, 49.02002);
	CreateDynamicObject(1432, 1763.89050, -1924.63818, 12.67390,   0.00000, 0.00000, -30.77998);
	CreateDynamicObject(1432, 1764.06079, -1916.08667, 12.67390,   0.00000, 0.00000, -30.77998);
	CreateDynamicObject(8990, 1767.66772, -1927.26294, 13.17137,   0.00000, 0.00000, -89.45995);
	CreateDynamicObject(8990, 1767.60071, -1915.04211, 13.17137,   0.00000, 0.00000, -89.45995);
	CreateDynamicObject(967, 1810.75000, -1893.52747, 12.40369,   0.00000, 0.00000, 0.00000);
	new taxisign1 = CreateDynamicObject(19329, 1787.11743, -1895.75610, 17.05610,   0.00000, 0.00000, 90.00000);
	SetDynamicObjectMaterialText(taxisign1, 0, "Y", 50, "Gill Sans", 30, 1, 0xFFF00000, 0, 1);
	new taxisign2 = CreateDynamicObject(19329, 1787.11743, -1896.75610, 17.05610,   0.00000, 0.00000, 90.00000);
	SetDynamicObjectMaterialText(taxisign2, 0, "N", 50, "Gill Sans", 30, 1, 0xFFF00000, 0, 1);
	new taxisign3 = CreateDynamicObject(19329, 1787.11743, -1897.75610, 17.05610,   0.00000, 0.00000, 90.00000);
	SetDynamicObjectMaterialText(taxisign3, 0, "A", 50, "Gill Sans", 30, 1, 0xFFF00000, 0, 1);
	new taxisign4 = CreateDynamicObject(19329, 1787.11743, -1898.75610, 17.05610,   0.00000, 0.00000, 90.00000);
	SetDynamicObjectMaterialText(taxisign4, 0, "P", 50, "Gill Sans", 30, 1, 0xFFF00000, 0, 1);
	new taxisign5 = CreateDynamicObject(19329, 1787.11743, -1899.75610, 17.05610,   0.00000, 0.00000, 90.00000);
	SetDynamicObjectMaterialText(taxisign5, 0, "M", 50, "Gill Sans", 30, 1, 0xFFF00000, 0, 1);
	new taxisign6 = CreateDynamicObject(19329, 1787.11743, -1900.75610, 17.05610,   0.00000, 0.00000, 90.00000);
	SetDynamicObjectMaterialText(taxisign6, 0, "O", 50, "Gill Sans", 30, 1, 0xFFF00000, 0, 1);
	new taxisign7 = CreateDynamicObject(19329, 1787.11743, -1901.75610, 17.05610,   0.00000, 0.00000, 90.00000);
	SetDynamicObjectMaterialText(taxisign7, 0, "C", 50, "Gill Sans", 30, 1, 0xFFF00000, 0, 1);
	new taxisign8 = CreateDynamicObject(19329, 1787.11743, -1905.25610, 17.05610,   0.00000, 0.00000, 90.00000);
	SetDynamicObjectMaterialText(taxisign8, 0, "I", 50, "Gill Sans", 30, 1, 0xFFF00000, 0, 1);
	new taxisign9 = CreateDynamicObject(19329, 1787.11743, -1906.25610, 17.05610,   0.00000, 0.00000, 90.00000);
	SetDynamicObjectMaterialText(taxisign9, 0, "X", 50, "Gill Sans", 30, 1, 0xFFF00000, 0, 1);
	new taxisign10 = CreateDynamicObject(19329, 1787.11743, -1907.25610, 17.05610,   0.00000, 0.00000, 90.00000);
	SetDynamicObjectMaterialText(taxisign10, 0, "A", 50, "Gill Sans", 30, 1, 0xFFF00000, 0, 1);
	new taxisign11 = CreateDynamicObject(19329, 1787.11743, -1908.25610, 17.05610,   0.00000, 0.00000, 90.00000);
	SetDynamicObjectMaterialText(taxisign11, 0, "T", 50, "Gill Sans", 30, 1, 0xFFF00000, 0, 1);
	CreateObject(19377, 1778.60229, -1904.18823, 16.95700,   0.00000, 90.00000, 0.00000); // Helicopter base - so it won't fall trough
	//sky platform
	CreateDynamicObject(18809, 1543.47144, -1355.86145, 4542.74365,   0.00000, 0.00000, 0.00000);
	CreateObject(18881, 1543.39929, -1355.84094, 4467.02295,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18809, 1543.47144, -1355.86145, 4493.03809,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18809, 1543.47144, -1355.86145, 4443.07715,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18809, 1543.47144, -1355.86145, 4393.21338,   0.00000, 0.00000, 0.00000);
	//courthouse
	CreateDynamicObject(2204, 212.98170, 168.54379, 1000.66962,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(2048, 209.75410, 168.90700, 1004.97693,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2206, 212.34261, 168.48380, 1001.53241,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(2204, 212.56670, 165.91840, 1000.66760,   0.00000, 0.00000, -180.00000);
	CreateDynamicObject(2206, 212.34261, 171.33681, 1001.53241,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(2204, 212.97771, 171.49680, 1000.66962,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(2204, 210.04480, 171.91499, 1000.66962,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2206, 211.35159, 171.33681, 1001.53241,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(2206, 210.36360, 171.33681, 1001.53241,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(2206, 211.35460, 168.48579, 1001.53241,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(2206, 210.36360, 168.48680, 1001.53241,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(2204, 212.08670, 165.91640, 1000.66559,   0.00000, 0.00000, -180.00000);
	CreateDynamicObject(2206, 209.37160, 168.48680, 1001.53241,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(2206, 209.37360, 171.33681, 1001.53241,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(3657, 221.86830, 163.99170, 1002.52081,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(3657, 223.27760, 163.99170, 1002.52081,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(2204, 212.05544, 167.30965, 1000.53009,   0.00000, 0.00000, -180.00000);
	CreateDynamicObject(2204, 209.55260, 172.17509, 1000.53009,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2204, 209.55060, 172.43750, 1000.39191,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2001, 216.78439, 176.63490, 1002.02332,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2001, 216.78439, 160.70889, 1002.02332,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1714, 210.47740, 168.86819, 1002.44531,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1886, 210.24135, 176.39240, 1005.80585,   0.00000, 0.00000, 46.20002);
	CreateDynamicObject(1886, 210.24323, 160.78305, 1005.80579,   0.00000, 0.00000, 132.06001);
	CreateDynamicObject(2412, 213.15553, 177.19862, 1002.04590,   0.00000, 0.00000, 179.99995);
	CreateDynamicObject(2412, 215.60451, 177.19859, 1002.04590,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(2173, 217.62053, 172.33624, 1002.03479,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2205, 211.97290, 169.51460, 1002.41571,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(970, 212.95239, 169.83650, 1002.14032,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(970, 212.95239, 167.98570, 1002.14032,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(970, 210.87207, 165.90637, 1002.14032,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2204, 211.52460, 165.63921, 1000.73798,   0.00000, 0.00000, -180.00000);
	CreateDynamicObject(1715, 218.84669, 173.37430, 1001.98981,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1715, 218.84669, 172.29530, 1001.98981,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(2372, 216.96426, 161.79689, 1002.02393,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2372, 217.00520, 164.10960, 1002.02393,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3657, 220.45830, 163.99170, 1002.52081,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(2372, 217.00520, 174.49561, 1002.02393,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2372, 217.00520, 172.15260, 1002.02393,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2173, 217.62050, 164.21320, 1002.03479,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1715, 218.84669, 164.19540, 1001.98981,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1715, 218.84669, 165.17540, 1001.98981,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(3657, 220.45830, 173.44070, 1002.52081,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(3657, 221.86830, 173.44070, 1002.52081,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(3657, 223.27760, 173.44070, 1002.52081,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(14532, 213.11891, 176.61356, 1002.99133,   0.00000, 0.00000, -181.07994);
	CreateDynamicObject(1210, 212.03600, 170.10890, 1002.61639,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18756, 197.61659, 168.35960, 1003.91663,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18757, 197.61659, 168.35159, 1003.91663,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2412, 213.15550, 159.75360, 1002.04590,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(2412, 215.60451, 159.75160, 1002.04590,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(2001, 196.25090, 171.20360, 1002.02332,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2001, 196.25090, 165.35870, 1002.02332,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2206, 210.21674, 160.81532, 1001.29657,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1715, 210.10512, 160.55653, 1002.19879,   0.00000, 0.00000, -180.00000);
	CreateDynamicObject(1715, 211.04111, 160.55650, 1002.19879,   0.00000, 0.00000, -180.00000);
	CreateDynamicObject(1715, 211.97710, 160.55650, 1002.19879,   0.00000, 0.00000, -180.00000);
	CreateDynamicObject(1715, 212.91310, 160.55650, 1002.19879,   0.00000, 0.00000, -180.00000);
	CreateDynamicObject(970, 211.44440, 161.76720, 1001.90582,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2204, 211.11571, 161.78870, 1000.44202,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2206, 211.21570, 160.81531, 1001.29462,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2204, 211.27240, 161.69550, 1000.35168,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2204, 211.11369, 161.26401, 1000.41559,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2204, 211.11369, 160.72099, 1000.41559,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2204, 211.27240, 161.17050, 1000.35168,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2204, 210.21370, 161.78670, 1000.44000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2616, 209.79973, 174.89075, 1003.69281,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1808, 223.55620, 169.97610, 1002.04688,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(2491, 217.60471, 169.13699, 1001.14893,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1549, 208.61920, 160.34090, 1001.99731,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2841, 218.41721, 168.39140, 1002.01971,   0.00000, 0.00000, 89.00000);
	CreateDynamicObject(1549, 208.59940, 177.03951, 1001.99731,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1886, 204.05963, 180.79108, 1005.80585,   0.00000, 0.00000, -24.17996);
	CreateDynamicObject(1886, 204.07491, 156.62923, 1005.80579,   0.00000, 0.00000, 204.71983);
	CreateDynamicObject(2166, 203.17790, 169.62350, 1002.02173,   0.00000, 0.00000, 0.48000);
	CreateDynamicObject(2165, 202.96609, 167.63721, 1002.02173,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2166, 203.96140, 165.66217, 1002.02173,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1808, 208.55656, 176.44411, 1002.04688,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(2202, 208.26891, 162.15590, 1002.01453,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(2611, 204.30640, 166.85010, 1003.73187,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1808, 213.67870, 152.18230, 1002.04688,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2612, 204.30721, 169.60350, 1003.74103,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1714, 221.04950, 150.28130, 1001.99213,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1715, 222.25864, 146.52663, 1001.98981,   0.00000, 0.00000, -158.16016);
	CreateDynamicObject(1715, 219.70795, 146.46851, 1001.98981,   0.00000, 0.00000, -201.12035);
	CreateDynamicObject(1714, 210.89700, 150.61220, 1001.99213,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1715, 210.87230, 147.54781, 1001.98981,   0.00000, 0.00000, -180.00000);
	CreateDynamicObject(14819, 228.10820, 151.21960, 1003.18091,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(14819, 228.38820, 161.24760, 1003.18091,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(14819, 228.11020, 161.24060, 1003.18091,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(14819, 228.38820, 151.21860, 1003.18091,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(14819, 231.46860, 169.99200, 1003.18091,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(14819, 231.46291, 169.71400, 1003.18091,   0.00000, 0.00000, -180.00000);
	CreateDynamicObject(17566, 228.24640, 161.03680, 1002.96619,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(17566, 228.24670, 151.07919, 1002.96619,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(17566, 231.43680, 169.87050, 1002.96619,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19304, 209.02980, 179.13361, 1005.14258,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(19303, 209.02980, 180.01030, 1003.26581,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19304, 209.02980, 158.23560, 1005.14258,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(19303, 209.02980, 159.11230, 1003.26581,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19304, 189.57941, 177.10480, 1005.14258,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(19302, 188.70290, 177.06081, 1003.26581,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19304, 193.82040, 160.25380, 1005.14258,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(19302, 192.94290, 177.06081, 1003.26581,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19302, 197.18089, 177.06081, 1003.26581,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19304, 198.06140, 177.10480, 1005.14258,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(19304, 189.57941, 160.25380, 1005.14258,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(19302, 188.70290, 160.25380, 1003.26581,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19304, 193.82040, 177.10480, 1005.14258,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(19302, 192.94290, 160.25380, 1003.26581,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19304, 198.06140, 160.25380, 1005.14258,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(19302, 197.18089, 160.25380, 1003.26581,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2180, 216.24080, 148.89420, 1002.00421,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(2180, 215.27620, 147.91679, 1002.00421,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2001, 217.94525, 151.93765, 1002.02332,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1722, 217.69254, 148.90927, 1002.03131,   3.14160, 0.00000, 90.00000);
	CreateDynamicObject(1722, 217.67229, 147.95029, 1002.03125,   3.14159, 0.00000, 89.65080);
	CreateDynamicObject(1722, 213.84393, 147.94577, 1002.03131,   3.14160, 0.00000, -90.00000);
	CreateDynamicObject(1722, 213.82397, 148.94597, 1002.03131,   3.14160, 0.00000, -90.00000);
	CreateDynamicObject(1722, 215.75009, 146.35727, 1002.03131,   3.14160, 0.00000, 0.00000);
	CreateDynamicObject(1722, 215.76068, 150.43794, 1002.03131,   3.14160, 0.00000, 180.00000);
	//fix for cell collisions
	CreateDynamicObject(2957, 189.67110, 175.43919, 1001.94910,   90.00000, 0.00000, 0.00000);
	CreateDynamicObject(2957, 189.66811, 172.79550, 1001.94910,   90.00000, 0.00000, 0.00000);
	CreateDynamicObject(2957, 189.62660, 172.45860, 1004.12292,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2957, 189.73750, 161.82359, 1001.95001,   90.00000, 0.00000, 0.00000);
	CreateDynamicObject(2957, 189.72530, 163.53101, 1001.94800,   90.00000, 0.00000, 0.00000);
	CreateDynamicObject(2957, 189.56979, 163.99690, 1004.13922,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2957, 187.74832, 162.14841, 1004.13922,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2957, 191.41679, 162.47354, 1004.13922,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2957, 195.66521, 162.47200, 1004.13922,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2957, 192.01030, 162.47211, 1004.13922,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2957, 193.87160, 164.01076, 1004.13922,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2957, 193.36960, 161.93570, 1001.94800,   90.00000, 0.00000, 0.00000);
	CreateDynamicObject(2957, 193.36710, 164.40289, 1001.95001,   90.00000, 0.00000, 0.00000);
	CreateDynamicObject(2957, 191.99660, 174.84979, 1004.12292,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2957, 191.41660, 174.85130, 1004.12292,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2957, 191.71280, 174.86060, 1004.12292,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2957, 187.74609, 174.80251, 1004.12292,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2957, 195.96983, 174.84273, 1004.12292,   0.00000, 0.00000, 90.00000);
	//Submarine
	CreateDynamicObject(9958, 3354.59009, -7724.20996, 4.27784,   0.00000, 0.00000, 97.38000);
	//NG Boat
	/*
	CreateObject(10771, 3311.17090, -2829.03027, 5.44530,   0.00000, 0.00000, 0.00000, 1000.0);
	CreateObject(10772, 3312.51465, -2829.20996, 17.27340,   0.00000, 0.00000, 0.00000, 1000.0);
	CreateObject(10770, 3314.39746, -2836.57715, 38.67960,   0.00000, 0.00000, 0.00000, 1000.0);
	CreateObject(11237, 3314.44434, -2836.57715, 38.67960,   0.00000, 0.00000, 0.00000, 1000.0);
	CreateObject(11146, 3302.17871, -2828.47559, 12.28900,   0.00000, 0.00000, 0.00000, 1000.0);
	CreateObject(11145, 3248.28809, -2829.03027, 4.25780,   0.00000, 0.00000, 0.00000, 1000.0);
	CreateObject(11149, 3305.09277, -2834.23340, 11.98430,   0.00000, 0.00000, 0.00000, 1000.0);
	CreateObject(3115, 3212.15894, -2829.03345, 16.93580,   0.00000, 0.00000, 0.00000);
	CreateObject(3114, 3254.42407, -2813.86743, 16.63930,   0.00000, 0.00000, 0.00000, 1000.0);
	//CreateObject(3113, 3203.04517, -2829.10010, 1.19886,   0.00000, 0.00000, 0.00000); //boat block
	CreateDynamicObject(3885, 3344.53809, -2836.51465, 21.01560,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3884, 3344.53809, -2836.51465, 21.05460,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3885, 3274.06152, -2836.92871, 18.00780,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3884, 3274.06152, -2836.92871, 18.04680,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3796, 3332.89746, -2830.39746, 10.20310,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3791, 3334.57715, -2832.71777, 10.67180,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3791, 3335.81152, -2834.32715, 10.67180,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3787, 3339.43652, -2830.72559, 10.77340,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3787, 3340.47559, -2832.38965, 10.77340,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3798, 3340.26465, -2834.28027, 10.20310,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3791, 3378.88965, -2835.55371, 10.67180,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3791, 3378.36621, -2833.88965, 10.67180,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3787, 3378.55371, -2832.36621, 10.77340,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3787, 3378.60059, -2830.36621, 10.77340,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3795, 3374.74902, -2830.99121, 10.54680,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3792, 3376.30591, -2833.18530, 10.71590,   0.00000, 0.00000, 89.58001);
	CreateDynamicObject(3795, 3378.46777, -2826.85840, 10.54680,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3792, 3378.84570, -2826.00269, 10.75000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3794, 3374.24902, -2828.99902, 10.71870,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3798, 3371.12402, -2828.70996, 10.20310,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3800, 3370.65527, -2827.16309, 10.20310,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3787, 3368.22559, -2826.28809, 10.77340,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3788, 3374.85059, -2821.10840, 10.71870,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3793, 3374.85059, -2820.17090, 10.82030,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3798, 3375.63184, -2817.87402, 10.20310,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3789, 3367.28027, -2819.21777, 10.54680,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3792, 3367.28027, -2818.35840, 10.75000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3794, 3363.53027, -2819.13184, 10.71870,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3793, 3363.57715, -2818.17871, 10.82030,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3799, 3339.07715, -2817.92871, 10.09370,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3798, 3340.38184, -2820.85059, 10.20310,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3798, 3340.57715, -2827.22559, 10.20310,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3785, 3360.28809, -2841.71777, 13.85930,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3785, 3360.29468, -2816.34277, 13.85930,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(3785, 3339.14282, -2816.34277, 13.85930,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(3785, 3318.02246, -2816.34277, 13.85930,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(3785, 3339.15308, -2828.72559, 13.85930,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3785, 3318.02026, -2828.72559, 13.85930,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3785, 3296.89746, -2828.72559, 13.85930,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3785, 3296.89746, -2816.34277, 13.85930,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(3799, 3326.26465, -2827.52246, 10.09370,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3798, 3328.78027, -2827.78027, 10.20310,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3800, 3328.31152, -2826.23340, 10.20310,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3798, 3306.33496, -2824.57715, 10.20310,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3799, 3303.26465, -2827.53809, 10.09370,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3800, 3304.74902, -2825.49121, 10.20310,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3785, 3275.76465, -2816.34277, 13.85930,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(3796, 3270.66968, -2827.52173, 10.20310,   0.00000, 0.00000, 61.68000);
	CreateDynamicObject(3798, 3267.91113, -2831.52173, 10.20310,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3798, 3266.04565, -2833.84863, 10.20310,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3792, 3268.50586, -2825.37549, 11.15735,   40.00000, 45.00000, 113.16000);
	CreateDynamicObject(3793, 3264.19141, -2829.49561, 10.82030,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3789, 3264.14160, -2827.11206, 10.54680,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3794, 3264.03809, -2830.44434, 10.71870,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3795, 3263.64600, -2835.73193, 10.54680,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3788, 3269.64355, -2835.94189, 10.71870,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3785, 3275.75903, -2841.71777, 13.82030,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3785, 3254.19434, -2841.71777, 13.85930,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3785, 3233.05371, -2841.71777, 13.85930,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3785, 3243.61621, -2829.03809, 15.27340,   0.00000, 90.00000, 90.00000);
	CreateDynamicObject(3785, 3233.05371, -2816.34277, 13.85930,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(3785, 3265.20215, -2829.03809, 15.27340,   0.00000, 90.00000, 90.00000);
	CreateDynamicObject(11148, 3302.17871, -2829.03027, 12.88280,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3798, 3327.15527, -2836.35059, 10.20310,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3800, 3327.56934, -2836.59277, 12.14840,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3800, 3327.63184, -2840.12402, 11.25000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3800, 3327.31152, -2840.13965, 10.18750,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3800, 3326.12402, -2840.13965, 10.18750,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(11334, 3321.96777, -2837.53027, 10.96090,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(3800, 3318.86621, -2839.67090, 11.25000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3800, 3319.04590, -2839.67090, 10.18750,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(955, 3318.74902, -2838.03809, 10.58590,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(956, 3318.74902, -2836.46777, 10.58590,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3800, 3318.88965, -2834.49902, 10.18750,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3785, 3320.58496, -2829.20996, 13.26560,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3785, 3309.03809, -2829.20996, 13.26560,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(3785, 3298.12402, -2829.20996, 13.26560,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(3785, 3302.49121, -2840.26465, 13.21090,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(11374, 3305.09277, -2834.23340, 11.98430,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3785, 3287.25684, -2829.61621, 5.26560,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(3785, 3278.66309, -2842.09277, 5.86710,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3798, 3272.24902, -2839.20215, 4.26560,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(3798, 3272.24902, -2841.20215, 4.26560,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3799, 3271.78809, -2840.73340, 1.92180,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3799, 3271.78809, -2837.80371, 1.92180,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3800, 3273.78809, -2835.56934, 2.03900,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3800, 3273.78809, -2836.64746, 2.03900,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(3800, 3273.78809, -2837.72559, 2.03900,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3799, 3271.78809, -2834.87402, 1.92180,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3798, 3272.24902, -2834.41309, 4.26560,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3798, 3272.24902, -2832.41309, 2.03900,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3799, 3268.85840, -2834.87402, 1.92180,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3800, 3268.52393, -2834.04932, 4.26560,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3798, 3270.24902, -2834.41309, 4.26560,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3799, 3268.85840, -2837.80371, 1.92180,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3799, 3265.92871, -2837.80371, 1.92180,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3798, 3266.38965, -2837.34277, 4.26560,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3798, 3264.38965, -2837.34277, 4.26560,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3799, 3262.99902, -2837.80371, 1.92180,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3799, 3260.06934, -2837.80371, 1.92180,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3798, 3259.60840, -2837.34277, 4.26560,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3800, 3261.24121, -2837.04590, 4.26560,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3800, 3258.06934, -2839.64746, 2.03900,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3798, 3257.61621, -2841.18652, 2.03900,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3800, 3256.06934, -2841.64746, 2.03900,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3799, 3260.06934, -2840.73340, 1.92180,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3799, 3262.99902, -2840.73340, 1.92180,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3799, 3265.92871, -2840.73340, 1.92180,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3799, 3268.85840, -2840.73340, 1.92180,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3785, 3267.20215, -2842.09277, 5.86710,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3785, 3255.74121, -2842.09277, 5.86710,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(11147, 3250.45215, -2829.03027, 5.07810,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(11401, 3219.56934, -2822.52246, 4.71870,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3785, 3209.29590, -2842.09277, 5.86710,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3785, 3220.74902, -2842.09277, 5.86710,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3785, 3232.20996, -2842.09277, 5.86710,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3785, 3243.67090, -2842.09277, 5.86710,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3785, 3243.67090, -2815.97559, 5.86710,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(3785, 3232.20996, -2815.97559, 5.86710,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(3785, 3220.74902, -2815.97559, 5.86710,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(3785, 3209.29590, -2815.97559, 5.86710,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(3800, 3254.34277, -2825.38184, 2.03900,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3798, 3254.80371, -2823.84277, 2.03900,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3785, 3255.74902, -2815.97559, 5.86710,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(3798, 3260.43652, -2823.84277, 2.03900,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3799, 3268.60840, -2817.49121, 1.92180,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3799, 3271.53809, -2817.49121, 1.92180,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3785, 3267.20215, -2815.97559, 5.86710,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(11406, 3272.60059, -2825.81934, 5.36710,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3785, 3278.66309, -2815.97559, 5.86710,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(3800, 3280.79590, -2820.99902, 4.03900,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3798, 3281.25684, -2820.67090, 2.03900,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3799, 3281.40527, -2823.13965, 1.92180,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3798, 3281.25684, -2825.60840, 2.03900,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3800, 3279.71777, -2825.14746, 2.03900,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3785, 3318.75684, -2831.14746, 20.29680,   0.00000, 0.00000, 270.00000);*/
	//mont drug factory
	CreateDynamicObject(1460, 1316.33057, 335.00461, 20.57820,   0.00000, 0.00000, 65.00000);
	CreateDynamicObject(1456, 1331.11304, 262.33276, 21.71249,   0.00000, 0.00000, 65.57999);
	CreateDynamicObject(11081, 1307.51685, 404.94745, 25.01694,   0.00000, 0.00000, 65.39996);
	CreateDynamicObject(1438, 1311.44177, 396.49350, 18.53125,   3.14159, 0.00000, -17.29640);
	CreateDynamicObject(3035, 1322.71753, 391.19656, 19.31250,   0.00000, 0.00000, -204.78000);
	CreateDynamicObject(10149, 1318.63623, 392.10980, 20.05762,   0.00000, 0.00000, -23.88000);
	CreateDynamicObject(1418, 1321.84766, 390.68140, 22.91660,   0.00000, 0.00000, 155.82001);
	CreateDynamicObject(785, 1322.00781, 437.59375, 17.39844,   0.00000, 0.00000, 0.00000);
	//dillimore materials factory
	CreateDynamicObject(3577, 630.63171, -493.43753, 16.09024,   0.00000, 0.00000, 181.01996);
	CreateDynamicObject(1438, 633.48352, -493.68246, 15.30469,   356.85840, 0.00000, 88.59285);
	CreateDynamicObject(1438, 610.64111, -502.38477, 15.30469,   356.85840, 0.00000, 263.91272);
	//blueberry junkyard
	CreateDynamicObject(14826, 121.71442, -313.37253, 1.30801,   0.00000, 0.00000, 93.36015);
	CreateDynamicObject(13590, 91.99857, -317.73602, 1.60264,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(13590, 142.50661, -227.66306, 1.64755,   0.00000, 0.00000, 94.37998);
	CreateDynamicObject(11295, 154.79079, -314.85004, 6.10295,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(13591, 120.88313, -246.37372, 0.84570,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(18451, 109.42739, -239.30969, 1.04671,   0.00000, 0.00000, -117.24002);
	CreateDynamicObject(13591, 142.78673, -245.99065, 0.84570,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1327, 144.71957, -234.74603, 0.55206,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(1327, 144.68636, -234.65506, 1.14995,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(1327, 114.73024, -248.71948, 0.49339,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(13591, 131.66992, -246.21898, 0.84570,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(18451, 121.59119, -252.63443, 1.09117,   0.00000, 0.00000, 0.77999);
	CreateDynamicObject(18862, 113.97775, -234.16034, 2.02703,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18862, 83.78752, -285.02060, 4.99370,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(13591, 79.02399, -267.71082, 0.93967,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(18451, 87.50941, -269.11197, 0.99720,   0.00000, 0.00000, 90.00002);
	CreateDynamicObject(18248, 134.94351, -253.54341, 8.41779,   0.00000, 0.00000, -74.82000);
	CreateDynamicObject(18862, 160.03024, -240.90678, 5.26769,   0.00000, 0.00000, -15.84000);
	CreateDynamicObject(18862, 79.18471, -294.66849, 3.49252,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18862, 86.96989, -330.50720, 4.99370,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(13591, 72.86577, -307.51871, 0.78000,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(13591, 98.23887, -317.39084, 0.77524,   0.00000, 0.00000, 265.86005);
	CreateDynamicObject(1327, 97.89985, -289.42926, 0.49339,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(18451, 98.53678, -310.01035, 1.11222,   0.00000, 0.00000, 177.60002);
	CreateDynamicObject(3594, 127.38802, -252.07446, 0.99855,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18255, 63.28960, -312.82571, 4.61601,   0.00000, 0.00000, 181.37999);
	CreateDynamicObject(18862, 54.08578, -331.37363, 4.99370,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(13590, 56.29060, -312.11606, 1.82879,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(13591, 70.25915, -276.87927, 0.84570,   0.00000, 0.00000, 85.31998);
	CreateDynamicObject(18862, 44.44950, -332.06265, 5.89868,   0.00000, 0.00000, 67.86000);
	CreateDynamicObject(18862, 98.97285, -334.18198, 3.72683,   0.00000, 0.00000, 137.82001);
	CreateDynamicObject(18862, 38.81325, -319.38007, 4.54817,   0.00000, 0.00000, 137.82001);
	CreateDynamicObject(13591, 25.32752, -285.72092, 1.58703,   0.00000, 0.00000, 182.39996);
	CreateDynamicObject(13591, 38.84433, -287.95792, 1.53574,   0.00000, 0.00000, 360.41986);
	CreateDynamicObject(18451, 56.99697, -279.70966, 1.02609,   0.00000, 0.00000, 179.16003);
	CreateDynamicObject(1327, 44.50930, -297.07291, 0.94282,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(1462, 123.26427, -287.28619, 0.51033,   0.00000, 0.00000, -90.12003);
	CreateDynamicObject(18862, 62.18981, -333.31409, 3.75834,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(13591, 71.20995, -317.82010, 0.84570,   0.00000, 0.00000, 267.11975);
	CreateDynamicObject(13591, 68.13902, -293.69168, 0.84570,   0.00000, 0.00000, 266.75995);
	CreateDynamicObject(1450, 59.09229, -278.28983, 1.09079,   0.00000, 0.00000, 183.54001);
	CreateDynamicObject(3285, 23.38010, -244.46170, 3.01260,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1415, 110.94776, -223.19234, 0.73730,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1327, 144.63219, -234.54077, 1.90443,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(1327, 44.08215, -282.32916, 0.92635,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(10984, 63.57236, -303.54114, 0.62611,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3593, 66.86237, -283.51846, 1.02048,   0.00000, 0.00000, 67.85999);
	CreateDynamicObject(10984, 64.39139, -321.22745, 0.62611,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1412, 49.99691, -220.02695, 1.96576,   0.00000, 0.00000, -2.76000);
	CreateDynamicObject(1447, 55.27568, -220.34085, 1.93064,   0.00000, 0.00000, 357.12021);
	CreateDynamicObject(1412, 60.55730, -220.54723, 1.96576,   0.00000, 0.00000, -2.76000);
	CreateDynamicObject(1447, 65.83027, -220.79614, 1.93064,   0.00000, 0.00000, 358.50015);
	CreateDynamicObject(1447, 71.13935, -220.99631, 1.93064,   0.00000, 0.00000, 358.44016);
	CreateDynamicObject(1412, 76.45221, -221.13795, 1.93320,   0.00000, 0.00000, -1.86000);
	CreateDynamicObject(1412, 81.73866, -221.19334, 1.96576,   0.00000, 0.00000, -0.90000);
	CreateDynamicObject(1447, 87.04079, -221.33693, 1.93064,   0.00000, 0.00000, 358.74014);
	CreateDynamicObject(1447, 92.37111, -221.52919, 1.93064,   0.00000, 0.00000, 358.92014);
	CreateDynamicObject(1412, 97.67082, -221.55774, 1.96576,   0.00000, 0.00000, -0.90000);
	CreateDynamicObject(1447, 102.94072, -221.70645, 1.93064,   0.00000, 0.00000, 358.74014);
	CreateDynamicObject(1412, 108.26695, -221.89337, 1.96576,   0.00000, 0.00000, -3.12000);
	CreateDynamicObject(11011, 42.10962, -229.05014, 4.67768,   0.00000, 0.00000, 87.78003);
	CreateDynamicObject(12957, 64.03915, -275.61526, 1.25743,   0.00000, 0.00000, 153.36008);
	CreateDynamicObject(13591, 38.44873, -241.86606, 1.52836,   0.00000, 0.00000, 360.41986);
	CreateDynamicObject(12957, 149.30051, -239.57829, 1.59458,   -3.90000, 8.51999, 153.36008);
	CreateDynamicObject(18862, 29.52451, -332.76889, 5.89868,   0.00000, 0.00000, 143.52000);
	CreateDynamicObject(18862, 158.55325, -255.49666, 3.91292,   0.00000, 0.00000, 55.19999);
	CreateDynamicObject(18862, 156.02287, -231.21359, 4.23734,   0.00000, 0.00000, -84.00003);
	CreateDynamicObject(3594, 160.47163, -267.06848, 1.37529,   4.68000, -7.38000, -44.16000);
	CreateDynamicObject(3594, 150.18367, -247.40047, 1.53555,   4.02000, -23.82000, -2.58000);
	CreateDynamicObject(3594, 75.16159, -280.95120, 1.53555,   4.02000, -23.82000, -2.58000);
	CreateDynamicObject(3594, 34.16108, -314.13025, 1.84334,   4.02000, -23.82000, -32.64000);
	CreateDynamicObject(3594, 53.20551, -322.81998, 2.14443,   4.02000, -23.82000, -99.77997);
	CreateDynamicObject(18862, 27.95287, -300.59549, 5.23467,   0.00000, 0.00000, 182.16002);
	CreateDynamicObject(18862, 27.47335, -317.78244, 3.20211,   0.00000, 0.00000, 182.16002);
	CreateDynamicObject(1327, 39.26133, -305.43304, 1.08354,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(3593, 52.61234, -290.65305, 1.02048,   0.00000, 0.00000, 26.81998);
	CreateDynamicObject(12957, 92.90897, -330.64340, 3.57480,   22.86000, 28.02000, 93.00010);
	CreateDynamicObject(1415, 123.26126, -290.23331, 0.73730,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(3594, 162.59509, -227.22523, 2.09255,   3.06000, 24.84001, 33.60001);
	CreateDynamicObject(1327, 130.82283, -251.00015, 0.57111,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(3594, 153.31842, -259.51453, 1.37531,   -0.06000, 23.40000, -138.42006);
	CreateDynamicObject(18862, 159.07332, -247.08943, 2.47496,   0.00000, 0.00000, -15.84000);
	CreateDynamicObject(13591, 144.01517, -327.09286, 0.77524,   0.00000, 0.00000, 358.07999);
	CreateDynamicObject(1450, 149.63510, -300.67917, 1.16476,   0.00000, 0.00000, 91.49998);
	CreateDynamicObject(12859, 174.69788, -336.72083, 0.58683,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1327, 89.00789, -299.01801, 0.49339,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(18451, 72.42484, -329.80118, 1.02609,   0.00000, 0.00000, 91.26007);
	CreateDynamicObject(1447, 130.47607, -332.02985, 1.80164,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1412, 130.50803, -326.81491, 1.78796,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1412, 130.59045, -337.27042, 1.78796,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1412, 130.62067, -342.59045, 1.78796,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1358, 134.67398, -326.05130, 1.75972,   0.00000, 0.00000, 179.03999);
	CreateDynamicObject(18451, 84.99048, -233.76617, 1.13747,   0.00000, 0.00000, 50.16000);
	CreateDynamicObject(1327, 26.32944, -245.04230, 1.22382,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(3285, 168.60751, -275.75943, 2.85776,   0.00000, 0.00000, 362.03979);
	CreateDynamicObject(10984, 168.52364, -269.71210, 0.18948,   0.00000, 0.00000, 16.38000);
	CreateDynamicObject(10984, 166.72093, -280.40353, 0.04404,   0.00000, 0.00000, 239.81999);
	CreateDynamicObject(1327, 173.36163, -281.64999, 1.04532,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(10984, 163.37637, -274.21042, 0.04404,   0.00000, 0.00000, 239.81999);
	CreateDynamicObject(10984, 171.06375, -282.56293, 0.04404,   0.00000, 0.00000, 291.30005);
	CreateDynamicObject(10984, 78.57516, -229.02408, 1.09163,   0.00000, 0.00000, 262.25992);
	CreateDynamicObject(10984, 66.43155, -267.19949, 1.04305,   0.00000, 0.00000, 332.27982);
	CreateDynamicObject(13591, 66.76287, -263.46060, 0.84570,   0.00000, 0.00000, 85.31998);
	CreateDynamicObject(1327, 86.93980, -227.64188, 0.55889,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(10984, 102.40306, -276.15463, 1.02579,   0.00000, 0.00000, 234.11983);
	CreateDynamicObject(10984, 114.26314, -277.38651, 0.94540,   0.00000, 0.00000, 300.77982);
	CreateDynamicObject(10984, 107.72650, -287.15524, 0.61954,   0.00000, 0.00000, 300.77982);
	CreateDynamicObject(10984, 99.47320, -247.84113, 0.50701,   0.00000, 0.00000, 285.96054);
	CreateDynamicObject(10984, 92.33707, -247.45688, 0.68611,   0.00000, 0.00000, 234.11983);
	CreateDynamicObject(13591, 109.58795, -273.63367, 1.71934,   8.94000, -0.84000, 180.00000);
	CreateDynamicObject(1327, 119.35803, -274.11880, 0.97322,   -13.49999, 99.11996, 0.00000);
	CreateDynamicObject(1327, 108.13795, -284.42166, 1.19314,   -13.49999, 99.11996, 34.32000);
	CreateDynamicObject(12957, 113.72353, -284.35263, 1.59737,   4.92000, -21.78000, 142.92012);
	CreateDynamicObject(10984, 29.95983, -269.50165, 1.59371,   0.00000, 0.00000, 332.27982);
	CreateDynamicObject(10984, 41.47903, -262.13654, 1.15012,   0.00000, 0.00000, 332.27982);
	CreateDynamicObject(10984, 32.04888, -261.83987, 1.21131,   0.00000, 0.00000, 604.01965);
	CreateDynamicObject(10984, 33.96684, -271.02432, 1.21131,   0.00000, 0.00000, 604.01965);
	CreateDynamicObject(13591, 42.37484, -262.40704, 1.53574,   12.60000, 11.51999, 360.41986);
	CreateDynamicObject(1327, 44.05844, -256.95056, 0.95841,   -15.78000, 89.99999, 0.00000);
	CreateDynamicObject(12957, 41.47539, -269.50098, 1.91183,   -1.98000, -22.02000, 153.36008);
	CreateDynamicObject(3593, 29.43554, -258.68585, 2.17847,   -7.86000, -20.76001, -31.02002);
	CreateDynamicObject(10984, 97.46203, -241.41855, -0.00576,   0.00000, 0.00000, 504.41937);
	CreateDynamicObject(18451, 100.23851, -247.24278, 2.05580,   -3.06000, -7.68000, -117.24002);
	CreateDynamicObject(1327, 105.02185, -247.43800, 0.89226,   -3.84000, 114.30004, 23.34000);
	CreateDynamicObject(10984, 162.72690, -268.56625, 0.16429,   0.00000, 0.00000, 532.20050);
	CreateDynamicObject(3594, 108.23575, -279.57233, 1.94380,   5.70000, 16.92000, 0.00000);
	CreateDynamicObject(13591, 90.77998, -246.64662, 0.84570,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(10984, 72.80901, -258.61087, 0.63848,   0.00000, 0.00000, 332.27982);
	CreateDynamicObject(10984, 73.80191, -249.98099, 1.20469,   0.00000, 0.00000, 259.61993);
	CreateDynamicObject(10984, 66.04353, -255.89890, 0.63848,   0.00000, 0.00000, 270.35986);
	CreateDynamicObject(18451, 78.26743, -249.32695, 2.22898,   15.78002, -3.24000, -269.40009);
	CreateDynamicObject(12957, 74.94872, -252.63837, 2.73506,   9.96000, 10.98000, 260.34003);
	CreateDynamicObject(13591, 68.43003, -248.28244, 1.66787,   15.53997, -5.22000, 257.87997);
	CreateDynamicObject(3593, 76.25503, -260.62491, 1.41440,   1.68000, 26.52000, -45.18002);
	CreateDynamicObject(1327, 105.60347, -269.02100, 0.49339,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(1327, 77.57378, -233.56680, 1.12439,   10.86000, 78.48000, 0.00000);
	CreateDynamicObject(12957, 74.00652, -225.99815, 1.92676,   22.38000, 24.12000, 153.36008);
	CreateDynamicObject(18862, 59.95076, -258.64548, 3.54673,   0.00000, 0.00000, 0.00000);
/*	//prison interior
	CreateDynamicObject(14408, -2389.97290, 2071.99121, 1000.00000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3113, -2395.86963, 2060.90894, 996.83472,   90.00000, 16.00000, 178.98000);
	CreateDynamicObject(3113, -2390.96655, 2086.21631, 994.69836,   0.00000, 17.00000, -90.00000);
	CreateDynamicObject(3113, -2413.34229, 2086.21729, 994.69781,   0.00000, 17.00000, -90.00000);
	CreateDynamicObject(7191, -2397.48071, 2070.98218, 996.90997,   0.00000, -90.00000, 0.00000);
	CreateDynamicObject(7191, -2414.46484, 2071.68359, 996.90887,   0.00000, -90.00000, 180.00000);
	CreateDynamicObject(7191, -2402.23755, 2083.66724, 996.91089,   0.00000, -90.00000, -90.00000);
	CreateDynamicObject(7191, -2402.08276, 2079.80225, 996.91290,   0.00000, 90.00000, -90.00000);
	CreateDynamicObject(7191, -2402.11938, 2060.04785, 996.91290,   0.00000, -90.00000, -90.00000);
	CreateDynamicObject(7191, -2402.50073, 2063.82031, 996.91492,   0.00000, -90.00000, -90.00000);
	CreateDynamicObject(3113, -2395.86182, 2080.09912, 996.83472,   90.00000, 16.00000, 178.98000);
	CreateDynamicObject(14437, -2414.41138, 2063.78125, 992.62433,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(7191, -2402.08276, 2081.54810, 994.73889,   0.00000, 90.00000, -90.00000);
	CreateDynamicObject(7191, -2394.22681, 2062.25659, 994.73889,   0.00000, 90.00000, 90.00000);
	CreateDynamicObject(7191, -2394.11938, 2060.04785, 994.73688,   0.00000, 90.00000, 90.00000);
	CreateDynamicObject(7191, -2402.23755, 2083.66724, 994.73492,   0.00000, -90.00000, -90.00000);
	CreateDynamicObject(14437, -2410.41138, 2063.78125, 992.62433,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(14437, -2406.43115, 2063.77808, 992.62433,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(14437, -2402.41138, 2063.78125, 992.62433,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(14437, -2398.41138, 2063.78125, 992.62433,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3113, -2391.50903, 2069.61646, 996.83472,   90.00000, 16.00000, 178.98000);
	CreateDynamicObject(3113, -2392.48560, 2067.73291, 996.83472,   90.00000, 16.00000, 88.00000);
	CreateDynamicObject(7191, -2393.93237, 2071.12402, 996.91199,   0.00000, -90.00000, 0.00000);
	CreateDynamicObject(3113, -2389.02197, 2076.04297, 996.83472,   90.00000, 16.00000, -88.00000);
	CreateDynamicObject(14437, -2398.41138, 2063.78125, 998.98132,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(14437, -2402.41138, 2063.78125, 998.98132,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(14437, -2410.41138, 2063.78125, 998.98132,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(14437, -2414.41138, 2063.78125, 998.98132,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(12985, -2399.95850, 2070.20508, 994.41852,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(7191, -2402.50073, 2062.22119, 1001.05890,   0.00000, -90.00000, -90.00000);
	CreateDynamicObject(7191, -2402.11938, 2060.04785, 1001.05688,   0.00000, -90.00000, -90.00000);
	CreateDynamicObject(7191, -2402.23755, 2083.66724, 1001.05487,   0.00000, -90.00000, -90.00000);
	CreateDynamicObject(7191, -2402.08276, 2081.52417, 1001.05688,   0.00000, 90.00000, -90.00000);
	CreateDynamicObject(19377, -2412.20996, 2059.25806, 995.76093,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19377, -2408.20996, 2059.25806, 995.76093,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19377, -2404.20996, 2059.25806, 995.76093,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19377, -2400.20996, 2059.25806, 995.76093,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19377, -2412.20996, 2084.75806, 995.76093,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19377, -2408.20996, 2084.75806, 995.76093,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19377, -2404.20996, 2084.75806, 995.76093,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19377, -2400.20996, 2084.75806, 995.76093,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19377, -2412.21924, 2059.24023, 995.76093,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19377, -2390.33472, 2071.68066, 995.76093,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19377, -2395.08374, 2072.43311, 995.76093,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(7191, -2393.44043, 2071.12402, 1001.07098,   0.00000, -90.00000, 0.00000);
	CreateDynamicObject(14437, -2416.42773, 2071.55347, 992.54681,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2949, -2395.20874, 2074.08740, 997.01141,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2949, -2395.20874, 2074.08740, 990.59204,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2949, -2395.20874, 2070.58740, 990.59198,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2949, -2395.20874, 2070.58740, 997.01141,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2949, -2395.01465, 2074.08740, 997.01141,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2949, -2395.01465, 2070.58740, 997.01141,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2949, -2395.01465, 2070.58740, 990.59198,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2949, -2395.01465, 2074.08740, 990.59198,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, -2399.36133, 2071.61035, 997.50763,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(970, -2399.36133, 2075.75439, 997.50763,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(970, -2399.36133, 2069.52051, 997.50763,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(970, -2401.44019, 2077.86987, 997.50763,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, -2405.94019, 2077.86987, 997.50763,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, -2410.44019, 2077.86987, 997.50763,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, -2410.44019, 2065.72290, 997.50763,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, -2405.94019, 2065.72290, 997.50763,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, -2401.44019, 2065.72290, 997.50763,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, -2412.52124, 2075.75439, 997.50763,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(970, -2412.52124, 2071.75439, 997.50763,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(970, -2412.52124, 2067.75439, 997.50763,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1800, -2397.34961, 2081.88208, 990.60004,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1800, -2401.21533, 2081.93555, 990.59998,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1800, -2407.49292, 2081.86719, 990.59998,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1800, -2409.19141, 2081.85522, 990.59998,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1800, -2413.17358, 2081.87109, 990.59998,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1800, -2413.19629, 2057.34937, 990.59998,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1800, -2411.53516, 2057.39136, 990.59998,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1800, -2405.17261, 2057.38477, 990.59998,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1800, -2403.53955, 2057.39014, 990.59998,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1800, -2399.57422, 2057.38647, 990.59998,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1800, -2399.63062, 2057.33716, 996.97223,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1800, -2403.57446, 2057.36035, 996.97223,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1800, -2405.13403, 2057.38696, 996.97223,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1800, -2411.52051, 2057.37183, 996.97223,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1800, -2415.58032, 2057.30444, 996.97223,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1800, -2415.63428, 2081.86646, 996.97223,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1800, -2411.63428, 2081.86646, 996.97223,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1800, -2407.63428, 2081.86646, 996.97223,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1800, -2401.13428, 2081.86646, 996.97223,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1800, -2397.63428, 2081.86646, 996.97223,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1886, -2393.16675, 2069.00146, 1002.92920,   15.12000, 0.24000, -107.04001);
	CreateDynamicObject(1886, -2414.94434, 2064.00293, 1002.92920,   15.12000, 0.24000, -227.33989);
	CreateDynamicObject(1886, -2415.76904, 2080.15503, 1002.92920,   15.12000, 0.24000, -319.67987);
	CreateDynamicObject(1886, -2415.76904, 2080.15503, 996.88861,   15.12000, 0.24000, -319.67987);
	CreateDynamicObject(1886, -2415.11353, 2062.91284, 996.88861,   15.12000, 0.24000, -220.49995);
	CreateDynamicObject(1810, -2413.02881, 2062.35645, 990.65045,   0.00000, 0.00000, -53.28000);
	CreateDynamicObject(1810, -2399.27954, 2062.40112, 990.65051,   0.00000, 0.00000, 123.12000);
	CreateDynamicObject(1810, -2405.06616, 2062.05298, 990.65051,   0.00000, 0.00000, -91.56002);
	CreateDynamicObject(1810, -2413.02881, 2062.35645, 990.65045,   0.00000, 0.00000, -53.28000);
	CreateDynamicObject(1810, -2401.15088, 2081.53442, 990.65051,   0.00000, 0.00000, -53.28000);
	CreateDynamicObject(14437, -2406.41138, 2063.78125, 998.98132,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1810, -2404.89282, 2084.93750, 990.65051,   0.00000, 0.00000, -53.28000);
	CreateDynamicObject(1810, -2413.39185, 2080.77490, 990.65051,   0.00000, 0.00000, -125.39998);
	CreateDynamicObject(1810, -2409.30103, 2080.61035, 996.96967,   0.00000, 0.00000, -125.39998);
	CreateDynamicObject(1810, -2404.78198, 2084.31079, 996.96967,   0.00000, 0.00000, -43.49998);
	CreateDynamicObject(1810, -2400.85742, 2062.62549, 996.96967,   0.00000, 0.00000, -43.49998);
	CreateDynamicObject(1810, -2407.51099, 2059.51392, 996.96967,   0.00000, 0.00000, 112.38002);
	CreateDynamicObject(1810, -2415.54321, 2061.67944, 996.96967,   0.00000, 0.00000, 112.38002);
	CreateDynamicObject(1432, -2410.10474, 2070.31128, 990.74280,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1432, -2406.22095, 2073.52515, 990.74280,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1432, -2403.39819, 2069.77344, 990.74280,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1492, -2420.52393, 2073.93213, 990.65070,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1810, -2417.46118, 2076.57593, 990.65051,   0.00000, 0.00000, -16.31999);
	CreateDynamicObject(2185, -2418.71289, 2074.76807, 990.65057,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(14501, -2417.88623, 2074.47852, 994.10547,   0.00000, -90.00000, 0.00000);
	CreateDynamicObject(14501, -2417.72290, 2073.30737, 994.10553,   0.00000, -90.00000, 180.00000);
	CreateDynamicObject(3859, -2418.90112, 2073.88013, 996.20453,   0.00000, 0.00000, -73.08000);
	CreateDynamicObject(1496, -2422.71606, 2067.01172, 990.65143,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1496, -2422.72095, 2055.01025, 990.65143,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19377, -2407.89600, 2044.89685, 995.30011,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2949, -2408.02051, 2047.94604, 990.64996,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1886, -2409.59326, 2043.91650, 996.75214,   18.84000, 0.90000, -129.00000);
	CreateDynamicObject(1886, -2420.47705, 2050.21948, 996.75214,   18.84000, 0.90000, -194.81989);
	CreateDynamicObject(1886, -2420.31592, 2073.05762, 996.75214,   18.84000, 0.90000, 38.46009);
	CreateDynamicObject(1498, -2420.31885, 2043.25220, 990.65088,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1498, -2417.33667, 2043.27576, 990.65088,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(14437, -2418.76733, 2049.35522, 992.65082,   0.00000, 0.00000, 0.00000);
	*/
	//newbie spawn
	CreateDynamicObject(2949, 1807.98682, -1366.62183, 14.10950,   0.00000, 0.00000, 180.00000, 600);
	CreateDynamicObject(17564, 1808.16174, -1366.09277, 15.23540,   0.00000, 0.00000, -90.00000, 600);
	//auto export
	CreateDynamicObject(3626, 2606.50244, -2241.35889, 13.91160,   0.00000, 0.00000, 180.00000, 600);
	CreateDynamicObject(19303, 266.29291, 78.45760, 1001.31042,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19303, 266.30090, 82.97160, 1001.31042,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19303, 266.30090, 87.46460, 1001.31042,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2342, 250.65157, 65.63711, 1003.99518,   0.00000, 0.00000, 0.00000); //donuts
	//dillimore PD
	CreateDynamicObject(19303, 320.81851, 313.11490, 999.52289,   0.00000, 0.00000, 90.00000);
	//CreateObject(19302, 320.87250, 311.36371, 999.52100,   0.00000, 0.00000, -90.00000); //jail cell door 1 (in main script)
	CreateDynamicObject(19304, 320.81851, 312.23581, 1001.39117,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19304, 320.81851, 316.26779, 1001.39117,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19303, 320.81851, 317.06290, 999.52289,   0.00000, 0.00000, 90.00000);
	//CreateObject(19302, 320.87250, 315.38971, 999.52100,   0.00000, 0.00000, -90.00000); //jail cell door 2 (in main script)
	CreateDynamicObject(1522, 321.43567, 301.90292, 998.13031,   0.00000, 0.00000, 0.00000);
	//bed collisions
	new jailbedcol1 = CreateDynamicObject(1801, 320.06299, 315.20615, 998.05029,   0.00000, 0.00000, 90.00000);
	new jailbedcol2 = CreateDynamicObject(1801, 320.04630, 311.36929, 998.03583,   0.00000, 0.00000, 90.00000);
	SetDynamicObjectMaterial(jailbedcol1, 0, -1, "none", "none", 0x00FFFFFF);
	SetDynamicObjectMaterial(jailbedcol1, 1, -1, "none", "none", 0x00FFFFFF);
	SetDynamicObjectMaterial(jailbedcol1, 2, -1, "none", "none", 0x00FFFFFF);
	SetDynamicObjectMaterial(jailbedcol2, 0, -1, "none", "none", 0x00FFFFFF);
	SetDynamicObjectMaterial(jailbedcol2, 1, -1, "none", "none", 0x00FFFFFF);
	SetDynamicObjectMaterial(jailbedcol2, 2, -1, "none", "none", 0x00FFFFFF);
	//prison locker
	CreateDynamicObject(10148, 2731.16431, -2480.88623, 1089.85437,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2957, 2730.40796, -2473.63452, 1089.47205,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19302, 2734.57617, -2477.31006, 1089.12756,   -7.43999, -1.32001, -91.38004);
	CreateDynamicObject(1999, 2729.26855, -2486.53320, 1087.79626,   0.00000, 0.00000, 178.86000);
	CreateDynamicObject(2611, 2727.57129, -2484.35620, 1089.51367,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2607, 2733.06396, -2484.54077, 1088.24133,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2609, 2730.08936, -2486.75562, 1088.56641,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(2609, 2733.16650, -2486.37915, 1088.56641,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(2356, 2732.61304, -2484.52734, 1087.82288,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(2356, 2728.31885, -2485.85498, 1087.82288,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(2611, 2731.88818, -2487.06885, 1089.51367,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(18042, 2720.49585, -2478.84863, 1088.31165,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18042, 2740.57690, -2483.48511, 1088.31165,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(358, 2730.36816, -2480.97583, 1088.36633,   -5.70000, -82.92000, 180.00000);
	CreateDynamicObject(358, 2730.36816, -2480.77856, 1088.36633,   -5.70000, -82.92000, 180.00000);
	CreateDynamicObject(358, 2730.36816, -2480.61401, 1088.36633,   -5.70000, -82.92000, 180.00000);
	CreateDynamicObject(3014, 2730.42065, -2478.56519, 1088.05835,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(342, 2730.37646, -2478.73926, 1088.34265,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(342, 2730.59229, -2478.73730, 1088.29675,   -0.96000, -57.72000, 0.00000);
	CreateDynamicObject(342, 2730.44629, -2478.53784, 1088.31995,   -43.79997, -82.62002, 0.00000);
	CreateDynamicObject(2043, 2730.41602, -2479.32886, 1088.13525,   0.00000, 0.00000, 181.31989);
	CreateDynamicObject(356, 2730.36816, -2480.30835, 1088.30139,   -5.70000, -82.92000, 180.00000);
	CreateDynamicObject(356, 2730.36816, -2480.12720, 1088.30139,   -5.70000, -82.92000, 180.00000);
	CreateDynamicObject(358, 2730.36816, -2481.33789, 1088.36633,   -5.70000, -82.92000, 180.00000);
	CreateDynamicObject(355, 2730.36816, -2481.51880, 1088.36633,   -5.70000, -82.92000, 180.00000);
	CreateDynamicObject(355, 2730.36816, -2481.69971, 1088.36633,   -5.70000, -82.92000, 180.00000);
	CreateDynamicObject(335, 2730.09448, -2479.77759, 1088.08875,   -74.40002, -51.17999, 0.00000);
	CreateDynamicObject(360, 2730.39917, -2482.83301, 1088.21790,   -190.00000, 0.00000, 270.24005);
	CreateDynamicObject(358, 2730.76392, -2481.39966, 1088.36633,   -5.70000, -82.92000, 0.00000);
	CreateDynamicObject(2043, 2731.11694, -2481.75854, 1088.13525,   0.00000, 0.00000, 181.31989);
	CreateDynamicObject(335, 2730.99365, -2483.26392, 1088.08875,   -74.40002, -51.17999, 0.00000);
	CreateDynamicObject(356, 2730.76392, -2481.55762, 1088.29089,   -5.70000, -82.92000, 0.00000);
	CreateDynamicObject(356, 2730.76392, -2481.71558, 1088.29089,   -5.70000, -82.92000, 0.00000);
	CreateDynamicObject(351, 2730.76392, -2481.87354, 1088.02380,   -5.70000, -82.92000, 0.00000);
	CreateDynamicObject(351, 2730.76392, -2482.03149, 1088.02380,   -5.70000, -82.92000, 0.00000);
	CreateDynamicObject(356, 2730.76392, -2481.00464, 1088.29089,   -5.70000, -82.92000, 0.00000);
	CreateDynamicObject(356, 2730.76392, -2480.84668, 1088.29089,   -5.70000, -82.92000, 0.00000);
	CreateDynamicObject(358, 2730.76392, -2480.68872, 1088.36633,   -5.70000, -82.92000, 0.00000);
	CreateDynamicObject(351, 2730.76392, -2480.53052, 1088.02380,   -5.70000, -82.92000, 0.00000);
	CreateDynamicObject(342, 2730.94189, -2479.06494, 1088.04517,   -0.96000, -57.72000, 0.00000);
	CreateDynamicObject(2043, 2730.71387, -2479.30981, 1088.13525,   0.00000, 0.00000, 181.31989);
	CreateDynamicObject(342, 2730.84790, -2479.17114, 1088.04517,   -0.96000, -57.72000, 0.00000);
	CreateDynamicObject(355, 2730.76392, -2480.29346, 1088.34338,   -5.70000, -82.92000, 0.00000);
	CreateDynamicObject(2037, 2730.68188, -2479.88647, 1088.10364,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(356, 2730.36816, -2479.89014, 1088.30139,   -5.70000, -82.92000, 180.00000);
	CreateDynamicObject(355, 2730.76392, -2480.05640, 1088.34338,   -5.70000, -82.92000, 0.00000);
	CreateDynamicObject(358, 2730.76392, -2482.18970, 1088.36633,   -5.70000, -82.92000, 0.00000);
	CreateDynamicObject(356, 2730.76392, -2482.34766, 1088.29089,   -5.70000, -82.92000, 0.00000);
	CreateDynamicObject(358, 2730.36816, -2481.89087, 1088.36633,   -5.70000, -82.92000, 180.00000);
	CreateDynamicObject(2043, 2730.11377, -2481.64673, 1088.13525,   0.00000, 0.00000, 181.31989);
	CreateDynamicObject(342, 2731.03516, -2480.90601, 1088.04517,   -0.96000, -57.72000, 0.00000);
	//GARAGES
	CreateDynamicObject(14783, 2569.19, -832.68, 67.70,   0.00, 0.00, 0.00, -1); //type 1
	CreateDynamicObject(14798, 2569.45, -845.57, 66.87,   0.00, 0.00, 0.00, -1); //type 1 block
	CreateDynamicObject(7657, 2561.87, -829.55, 67.54,   0.00, 0.00, 90.00, -1); //type 2
	CreateDynamicObject(7657, 2562.28, -849.07, 67.54,   0.00, 0.00, 90.00, -1); //type 2 block
	//Bank (Jacob Malcom)
	CreateDynamicObject(14789, 1424.69, -1004.07, 1643.03,   0.00, 0.00, 90.00);
	CreateDynamicObject(1886, 1448.76, -1003.49, 1646.92,   19.77, 0.00, 189.61);
	CreateDynamicObject(1886, 1414.76, -980.55, 1646.91,   19.77, 0.00, 43.36);
	CreateDynamicObject(626, 1427.55, -997.32, 1640.77,   0.00, 0.00, 135.00);
	CreateDynamicObject(2773, 1427.76, -995.78, 1639.31,   0.00, 0.00, 0.00);
	CreateDynamicObject(2773, 1427.69, -992.84, 1639.31,   0.00, 0.00, 0.00);
	CreateDynamicObject(2773, 1427.72, -989.95, 1639.30,   0.00, 0.00, 0.00);
	CreateDynamicObject(2773, 1429.86, -982.95, 1639.31,   0.00, 0.00, 90.00);
	CreateDynamicObject(626, 1415.42, -984.28, 1640.81,   0.00, 0.00, 11.25);
	CreateDynamicObject(2773, 1432.33, -982.97, 1639.31,   0.00, 0.00, 90.00);
	CreateDynamicObject(2773, 1437.39, -982.98, 1639.31,   0.00, 0.00, 90.00);
	CreateDynamicObject(2773, 1439.99, -983.01, 1639.31,   0.00, 0.00, 90.00);
	CreateDynamicObject(3462, 1415.30, -981.05, 1640.30,   0.00, 0.00, 135.00);
	CreateDynamicObject(626, 1441.87, -997.46, 1640.83,   0.00, 0.00, 146.25);
	CreateDynamicObject(2773, 1432.34, -995.21, 1639.30,   0.00, 0.00, 90.00);
	CreateDynamicObject(2773, 1434.73, -995.23, 1639.30,   0.00, 0.00, 90.00);
	CreateDynamicObject(2773, 1438.90, -996.64, 1639.30,   0.00, 0.00, 0.00);
	CreateDynamicObject(2773, 1432.02, -992.77, 1639.30,   0.00, 0.00, 90.00);
	CreateDynamicObject(1723, 1426.28, -994.86, 1638.71,   0.00, 0.00, 270.00);
	CreateDynamicObject(1723, 1426.24, -991.15, 1638.73,   0.00, 0.00, 270.00);
	CreateDynamicObject(1723, 1422.28, -996.94, 1638.68,   0.00, 0.00, 90.00);
	CreateDynamicObject(1723, 1422.28, -993.21, 1638.66,   0.00, 0.00, 90.00);
	CreateDynamicObject(2637, 1424.23, -992.17, 1638.84,   0.00, 0.00, 270.00);
	CreateDynamicObject(2637, 1424.23, -995.70, 1638.84,   0.00, 0.00, 270.00);
	CreateDynamicObject(3657, 1432.63, -987.74, 1639.20,   0.00, 0.00, 0.00);
	CreateDynamicObject(3657, 1432.63, -986.98, 1639.20,   0.00, 0.00, 180.00);
	CreateDynamicObject(3657, 1438.11, -986.98, 1639.20,   0.00, 0.00, 180.00);
	CreateDynamicObject(3657, 1438.09, -987.73, 1639.23,   0.00, 0.00, 0.00);
	CreateDynamicObject(2946, 1414.29, -988.35, 1638.76,   0.00, 0.00, 0.00);
	CreateDynamicObject(2946, 1414.31, -985.22, 1638.76,   0.00, 0.00, 180.00);
	CreateDynamicObject(1886, 1414.68, -998.72, 1646.98,   17.19, 0.00, 135.00);
	CreateDynamicObject(2773, 1429.58, -992.76, 1639.30,   0.00, 0.00, 90.00);
	CreateDynamicObject(2773, 1437.16, -995.22, 1639.30,   0.00, 0.00, 90.00);
	CreateDynamicObject(1216, 1442.94, -984.48, 1639.48,   0.00, 0.00, 270.00);
	CreateDynamicObject(2824, 1424.30, -992.05, 1639.25,   0.00, 0.00, 78.75);
	CreateDynamicObject(3499, 1414.18, -988.86, 1644.28,   0.00, 0.00, 0.00);
	CreateDynamicObject(3499, 1414.20, -984.71, 1644.28,   0.00, 0.00, 0.00);
	CreateDynamicObject(3499, 1414.19, -983.81, 1644.28,   0.00, 0.00, 0.00);
	CreateDynamicObject(3499, 1414.18, -989.79, 1644.28,   0.00, 0.00, 0.00);
	CreateDynamicObject(3499, 1413.73, -987.93, 1644.28,   0.00, 0.00, 0.00);
	CreateDynamicObject(3499, 1413.72, -987.50, 1644.28,   0.00, 0.00, 0.00);
	CreateDynamicObject(3499, 1413.73, -987.07, 1644.28,   0.00, 0.00, 0.00);
	CreateDynamicObject(3499, 1413.72, -986.65, 1644.28,   0.00, 0.00, 0.00);
	CreateDynamicObject(3499, 1413.73, -986.25, 1644.28,   0.00, 0.00, 0.00);
	CreateDynamicObject(3499, 1413.74, -985.90, 1644.28,   0.00, 0.00, 0.00);
	CreateDynamicObject(3499, 1413.73, -985.49, 1644.28,   0.00, 0.00, 0.00);
	CreateDynamicObject(3462, 1441.39, -981.52, 1640.30,   0.00, 0.00, 45.00);
	CreateDynamicObject(18092, 1430.82, -999.20, 1639.28,   0.00, 0.00, 0.00);
	CreateDynamicObject(18092, 1435.58, -999.20, 1639.28,   0.00, 0.00, 0.00);
	CreateDynamicObject(3499, 1443.79, -998.90, 1644.28,   0.00, 0.00, 213.75);
	CreateDynamicObject(2369, 1432.13, -999.16, 1639.78,   0.00, 0.00, 150.00);
	CreateDynamicObject(1216, 1442.93, -985.67, 1639.48,   0.00, 0.00, 270.00);
	CreateDynamicObject(1216, 1442.93, -986.80, 1639.48,   0.00, 0.00, 270.00);
	CreateDynamicObject(2773, 1427.70, -987.08, 1639.30,   0.00, 0.00, 0.00);
	CreateDynamicObject(3499, 1427.83, -998.69, 1644.28,   0.00, 0.00, 213.75);
	CreateDynamicObject(3499, 1433.24, -1003.83, 1644.28,   0.00, 0.00, 213.75);
	CreateDynamicObject(3499, 1432.56, -1003.81, 1644.28,   0.00, 0.00, 213.75);
	CreateDynamicObject(3499, 1429.20, -1003.92, 1644.28,   0.00, 0.00, 213.75);
	CreateDynamicObject(3499, 1428.16, -1003.89, 1644.28,   0.00, 0.00, 213.75);
	CreateDynamicObject(2200, 1440.46, -1005.36, 1638.79,   0.00, 0.00, 180.00);
	CreateDynamicObject(2200, 1437.92, -1005.36, 1638.78,   0.00, 0.00, 180.00);
	CreateDynamicObject(2200, 1426.59, -1005.32, 1638.78,   0.00, 0.00, 180.00);
	CreateDynamicObject(2200, 1424.15, -1005.32, 1638.78,   0.00, 0.00, 180.00);
	CreateDynamicObject(1808, 1419.53, -980.30, 1638.78,   0.00, 0.00, 0.00);
	CreateDynamicObject(2773, 1434.84, -982.97, 1639.30,   0.00, 0.00, 90.00);
	CreateDynamicObject(626, 1435.11, -987.55, 1640.83,   0.00, 0.00, 236.25);
	CreateDynamicObject(2369, 1437.28, -999.16, 1639.78,   0.00, 0.00, 150.00);
	CreateDynamicObject(3462, 1415.83, -997.08, 1640.30,   0.00, 0.00, 225.00);
	CreateDynamicObject(8680, 1378.06, -948.68, 1640.21,   0.00, 180.00, 180.00);
	CreateDynamicObject(8680, 1378.06, -948.68, 1641.18,   0.00, 180.00, 180.00);
	CreateDynamicObject(8653, 1412.97, -998.50, 1639.78,   0.00, 0.00, 90.00);
	CreateDynamicObject(8653, 1443.53, -984.67, 1639.78,   0.00, 0.00, 180.00);
	CreateDynamicObject(8680, 1393.75, -938.23, 1641.21,   0.00, 0.00, 270.00);
	CreateDynamicObject(626, 1415.31, -989.32, 1640.81,   0.00, 0.00, 11.25);
	CreateDynamicObject(626, 1427.64, -982.90, 1640.78,   0.00, 0.00, 146.25);
	CreateDynamicObject(1723, 1421.23, -991.18, 1638.73,   0.00, 0.00, 270.00);
	CreateDynamicObject(1723, 1421.16, -994.87, 1638.73,   0.00, 0.00, 270.00);
	CreateDynamicObject(2637, 1419.08, -992.24, 1638.84,   0.00, 0.00, 270.00);
	CreateDynamicObject(2637, 1419.01, -995.85, 1638.84,   0.00, 0.00, 270.00);
	CreateDynamicObject(1723, 1417.23, -996.70, 1638.68,   0.00, 0.00, 90.00);
	CreateDynamicObject(1723, 1417.25, -993.29, 1638.68,   0.00, 0.00, 90.00);
	CreateDynamicObject(2942, 1425.95, -980.50, 1639.40,   0.00, 0.00, 0.00);
	CreateDynamicObject(2942, 1424.14, -980.50, 1639.40,   0.00, 0.00, 0.00);
	CreateDynamicObject(2942, 1422.31, -980.55, 1639.40,   0.00, 0.00, 0.00);
	CreateDynamicObject(14576, 1434.33, -988.04, 1634.38,   0.00, 0.00, 90.00);
	CreateDynamicObject(14577, 1453.27, -927.43, 1639.51,   0.00, 0.00, -90.00);
	CreateDynamicObject(3940, 1435.95, -974.53, 1629.30,   0.00, 0.00, 90.00);
	CreateDynamicObject(19447, 1443.75, -973.13, 1635.56,   0.00, 0.00, 0.00);
	CreateDynamicObject(19447, 1443.75, -973.13, 1639.06,   0.00, 0.00, 0.00);
	CreateDynamicObject(1998, 1449.91, -964.84, 1632.58,   0.00, 0.00, 180.00);
	CreateDynamicObject(1998, 1446.67, -969.37, 1632.58,   0.00, 0.00, 90.00);
	CreateDynamicObject(1998, 1452.96, -965.91, 1632.58,   0.00, 0.00, 0.00);
	CreateDynamicObject(1998, 1445.70, -960.37, 1632.58,   0.00, 0.00, 0.00);
	CreateDynamicObject(1998, 1456.40, -971.11, 1632.58,   0.00, 0.00, 90.00);
	CreateDynamicObject(2008, 1448.91, -966.87, 1632.58,   0.00, 0.00, 0.00);
	CreateDynamicObject(2008, 1456.44, -967.25, 1632.58,   0.00, 0.00, 90.00);
	CreateDynamicObject(2008, 1451.92, -963.88, 1632.58,   0.00, 0.00, 180.00);
	CreateDynamicObject(2008, 1455.82, -960.44, 1632.58,   0.00, 0.00, 90.00);
	CreateDynamicObject(2008, 1450.91, -959.39, 1632.58,   0.00, 0.00, 0.00);
	CreateDynamicObject(2001, 1450.83, -966.77, 1632.58,   0.00, 0.00, 0.00);
	CreateDynamicObject(2001, 1449.24, -971.18, 1632.58,   0.00, 0.00, 0.00);
	CreateDynamicObject(2001, 1457.58, -971.23, 1632.58,   0.00, 0.00, 0.00);
	CreateDynamicObject(2001, 1456.30, -965.29, 1632.58,   0.00, 0.00, 0.00);
	CreateDynamicObject(2001, 1453.16, -959.32, 1632.58,   0.00, 0.00, 0.00);
	CreateDynamicObject(2001, 1452.98, -963.97, 1632.58,   0.00, 0.00, 18.00);
	CreateDynamicObject(2001, 1445.57, -961.43, 1632.58,   0.00, 0.00, 18.00);
	CreateDynamicObject(2002, 1453.42, -971.14, 1632.59,   0.00, 0.00, 180.00);
	CreateDynamicObject(2163, 1445.19, -967.17, 1632.58,   0.00, 0.00, 90.00);
	CreateDynamicObject(2163, 1445.20, -964.81, 1632.58,   0.00, 0.00, 90.00);
	CreateDynamicObject(2163, 1446.45, -971.62, 1632.58,   0.00, 0.00, 180.00);
	CreateDynamicObject(2167, 1447.40, -971.62, 1632.58,   0.00, 0.00, 180.00);
	CreateDynamicObject(1715, 1446.94, -968.23, 1632.56,   0.00, 0.00, -76.00);
	CreateDynamicObject(1715, 1446.65, -960.50, 1632.56,   0.00, 0.00, -171.00);
	CreateDynamicObject(1715, 1451.70, -959.75, 1632.56,   0.00, 0.00, -185.00);
	CreateDynamicObject(1715, 1454.25, -965.68, 1632.56,   0.00, 0.00, -33.00);
	CreateDynamicObject(1715, 1456.95, -969.88, 1632.56,   0.00, 0.00, -69.00);
	CreateDynamicObject(1806, 1449.35, -964.61, 1632.58,   0.00, 0.00, 140.00);
	CreateDynamicObject(1806, 1451.05, -963.47, 1632.58,   0.00, 0.00, 193.00);
	CreateDynamicObject(14635, 1440.95, -980.42, 1635.58,   0.00, 0.00, -90.00);
	CreateDynamicObject(14578, 1440.20, -989.70, 1637.97,   0.00, 0.00, -90.00);
	CreateDynamicObject(19313, 1447.04, -995.52, 1626.18,   0.00, 0.00, 90.00);
	CreateDynamicObject(19303, 1446.13, -986.84, 1627.48,   0.00, 0.00, 4.00);
	CreateDynamicObject(2922, 1447.17, -989.39, 1627.14,   0.00, 0.00, 270.00);
	CreateDynamicObject(2922, 1426.91, -986.61, 1627.60,   0.00, 0.00, 270.00);
	CreateDynamicObject(2634, 1426.71, -988.03, 1627.88,   0.00, 0.00, 270.00);
	CreateDynamicObject(2994, 1411.25, -990.06, 1626.68,   0.00, 0.00, 10.00);
	CreateDynamicObject(1550, 1411.30, -989.99, 1627.29,   270.00, 0.00, 0.00);
	CreateDynamicObject(1550, 1410.96, -989.28, 1626.59,   20.00, 0.00, 0.00);
	CreateDynamicObject(1550, 1410.87, -988.72, 1626.59,   20.00, 0.00, -120.00);
	CreateDynamicObject(2369, 1433.91, -999.36, 1639.78,   0.00, 0.00, 230.00);
	CreateDynamicObject(2369, 1428.92, -999.69, 1639.78,   0.00, 0.00, 230.00);
	CreateDynamicObject(2190, 1436.56, -998.74, 1639.78,   0.00, 0.00, 0.00);
	CreateDynamicObject(2190, 1434.81, -998.56, 1639.78,   0.00, 0.00, 0.00);
	CreateDynamicObject(2190, 1431.43, -998.68, 1639.78,   0.00, 0.00, 0.00);
	CreateDynamicObject(2190, 1429.88, -998.78, 1639.78,   0.00, 0.00, 0.00);
	CreateDynamicObject(1806, 1430.11, -1000.60, 1638.78,   0.00, 0.00, 0.00);
	CreateDynamicObject(1806, 1431.34, -1000.70, 1638.78,   0.00, 0.00, -18.00);
	CreateDynamicObject(1806, 1434.67, -1000.47, 1638.78,   0.00, 0.00, 11.00);
	CreateDynamicObject(1806, 1436.01, -1000.40, 1638.78,   0.00, 0.00, -25.00);
	CreateDynamicObject(3499, 1438.64, -998.84, 1644.28,   0.00, 0.00, 213.75);
	CreateDynamicObject(2202, 1442.84, -1003.60, 1638.78,   0.00, 0.00, 180.00);
	CreateDynamicObject(3499, 1449.22, -993.18, 1644.28,   0.00, 0.00, 213.75);
	CreateDynamicObject(3499, 1448.89, -982.61, 1644.28,   0.00, 0.00, 213.75);
	CreateDynamicObject(19388, 1440.13, -998.71, 1640.44,   0.00, 0.00, 90.00);
	CreateDynamicObject(19431, 1442.54, -998.71, 1640.44,   0.00, 0.00, 90.00);
	CreateDynamicObject(1502, 1439.34, -998.71, 1638.69,   0.00, 0.00, 0.00);
	CreateDynamicObject(19003, 1439.66, -1009.58, 1638.70,   180.00, 0.00, 0.00);
	CreateDynamicObject(19003, 1419.88, -1008.77, 1638.70,   180.00, 0.00, 0.00);
	CreateDynamicObject(19003, 1419.16, -988.59, 1638.70,   180.00, 0.00, 0.00);
	CreateDynamicObject(6959, 1431.59, -984.34, 1638.79,   0.00, 0.00, 0.00);
	CreateDynamicObject(10402, 1433.45, -977.37, 1629.97,   0.00, 0.00, 0.00);
	CreateDynamicObject(19450, 1433.22, -998.76, 1638.00,   0.00, 180.00, 90.00);
	//FISHING STORE
	CreateDynamicObject(11497, 371.640442, -2077.564453, 6.906926, 0.0000, 0.0000, 0.0000);
	CreateDynamicObject(1497, 375.137970, -2077.647217, 7.327770, 0.0000, 0.0000, 90.0000);
	CreateObject(18045, 364.316498, -2068.405273, 980.796143, 0.0000, 0.0000, 0.0000);
	CreateDynamicObject(1497, 370.827423, -2072.880127, 978.791992, 0.0000, 0.0000, 180.0000);
	CreateDynamicObject(1497, 356.854767, -2067.211670, 978.791992, 0.0000, 0.0000, 270.0000);
	CreateDynamicObject(2626, 370.035065, -2065.742188, 979.296631, 0.0000, 0.0000, 270.0000);
	CreateDynamicObject(2593, 357.426392, -2066.781006, 979.655884, 0.0000, 0.0000, 90.0000);
	CreateDynamicObject(2537, 362.171112, -2063.615479, 978.802673, 0.0000, 0.0000, 0.0000);
	CreateDynamicObject(2536, 361.188812, -2063.614502, 978.802673, 0.0000, 0.0000, 0.0000);
	CreateDynamicObject(902, 362.139801, -2067.224365, 978.311279, 0.0000, 0.0000, 0.0000);
	CreateDynamicObject(953, 357.464142, -2063.672119, 979.105225, 0.0000, 0.0000, 56.2500);
	CreateDynamicObject(1461, 371.360901, -2068.686523, 979.605164, 0.0000, 0.0000, 270.0000);
	CreateDynamicObject(1461, 361.164856, -2073.281250, 979.605164, 0.0000, 0.0000, 180.0000);
	CreateDynamicObject(1599, 362.123932, -2063.474121, 979.379211, 0.0000, 107.4295, 90.0000);
	CreateDynamicObject(1603, 357.070526, -2070.773438, 980.038696, 0.0000, 0.0000, 0.0000);
	CreateDynamicObject(1602, 357.185211, -2069.466309, 979.991821, 0.0000, 0.0000, 0.0000);
	CreateDynamicObject(1609, 367.104858, -2072.719482, 978.657104, 0.0000, 0.0000, 90.0000);
	CreateDynamicObject(1641, 364.584015, -2063.166016, 981.135071, 90.2408, 0.0000, 0.0000);
	CreateDynamicObject(1643, 366.041565, -2063.146973, 981.181824, 89.3814, 0.0000, 0.0000);
	CreateDynamicObject(2404, 371.576508, -2072.586426, 980.054199, 0.0000, 0.0000, 225.0000);
	CreateDynamicObject(2782, 358.317047, -2063.685791, 979.104553, 0.0000, 0.0000, 0.0000);
	CreateDynamicObject(902, 366.969971, -2067.597656, 978.311279, 0.0000, 0.0000, 0.0000);
	CreateDynamicObject(902, 360.024658, -2070.883301, 978.311279, 0.0000, 0.0000, 0.0000);
	CreateDynamicObject(902, 365.891632, -2065.538818, 978.336304, 0.0000, 0.0000, 0.0000);
	CreateDynamicObject(18632, 371.64, -2063.7, 980.30, 0.0000, 180.0000, 90.0000);
	CreateDynamicObject(18632, 371.64, -2064.7, 980.30, 0.0000, 180.0000, 90.0000);
	CreateDynamicObject(18632, 371.64, -2065.7, 980.30, 0.0000, 180.0000, 90.0000);
	CreateDynamicObject(18632, 371.64, -2066.7, 980.30, 0.0000, 180.0000, 90.0000);
	CreateDynamicObject(18632, 371.64, -2067.7, 980.30, 0.0000, 180.0000, 90.0000);
	//TIKI STORE
	CreateDynamicObject(18092, 2368.60669, -1456.83643, 921.30634,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2593, 2361.92310, -1460.85986, 921.65881,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2495, 2368.54639, -1454.84436, 921.93622,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1885, 2365.45459, -1469.05493, 920.80542,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1886, 2359.26929, -1451.85791, 924.89423,   18.04820, 0.00000, 32.26310);
	CreateDynamicObject(2362, 2368.92822, -1455.92773, 921.80591,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(2369, 2363.62012, -1453.68176, 921.90509,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3461, 2368.34937, -1469.09424, 921.40594,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(14672, 2359.59814, -1460.34656, 922.80688,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3461, 2366.06494, -1468.98535, 921.38824,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18092, 2368.60034, -1461.81567, 921.30634,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2495, 2368.56958, -1456.45740, 921.93622,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(2362, 2368.95410, -1457.56421, 921.80591,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1704, 2360.33911, -1468.68054, 920.80377,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1703, 2363.16650, -1468.63708, 920.80377,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1704, 2364.78125, -1468.65393, 920.80377,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(2593, 2361.92310, -1459.30981, 921.65881,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(2593, 2365.56836, -1459.39551, 921.65881,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(2593, 2365.57104, -1460.85962, 921.65881,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(2593, 2366.36182, -1460.01489, 921.65881,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(2593, 2364.75952, -1460.15381, 921.65881,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(2593, 2362.77319, -1460.10547, 921.65881,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(2593, 2361.10864, -1460.09912, 921.65881,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1505, 2352.83740, -1454.31165, 920.80103,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1505, 2352.84912, -1457.57520, 920.80103,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1533, 2367.96729, -1469.58533, 920.80139,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(2773, 2362.33862, -1455.67395, 921.33612,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3461, 2362.36865, -1456.64832, 921.00208,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2773, 2364.30981, -1455.66992, 921.33612,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3461, 2364.32080, -1456.64673, 921.00208,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1704, 2363.05151, -1452.29041, 920.80615,   0.00000, 0.00000, 0.00000);
	//CHURCH
	CreateDynamicObject(6959, -1269.798096, 61.014786, 990.969116, 0.0000, 0.0000, 0.0000);
	CreateDynamicObject(2894, -1268.897949, 39.037510, 993.868713, 0.0000, 0.0000, 0.0000);
	CreateDynamicObject(9931, -1226.648071, 64.336517, 1007.459229, 0.0000, 0.0000, 0.2803);
	CreateDynamicObject(11489, -1258.692017, 25.302620, 992.535400, 0.0000, 0.0000, 180.0000);
	CreateDynamicObject(8675, -1260.602173, 12.042114, 991.605042, 0.0000, 0.0000, 270.0000);
	CreateDynamicObject(5426, -1302.512695, -7.271667, 978.601013, 0.0000, 0.0000, 359.9996);
	CreateDynamicObject(2631, -1268.816650, 32.994812, 992.584595, 0.0000, 0.0000, 89.9994);
	CreateDynamicObject(14629, -1260.814941, 33.690956, 1005.193298, 0.0000, 0.0000, 270.0000);
	CreateDynamicObject(14394, -1269.385742, 42.079704, 991.741211, 0.0000, 0.0000, 269.9993);
	CreateDynamicObject(3462, -1265.720337, 23.939594, 994.052002, 0.0000, 0.0000, 269.9994);
	CreateDynamicObject(2491, -1268.624268, 39.266262, 991.981323, 0.0000, 0.0000, 0.0000);
	CreateDynamicObject(6959, -1269.766479, 21.047943, 992.569519, 0.0000, 0.0000, 0.0000);
	CreateDynamicObject(14394, -1261.447876, 42.070145, 991.741211, 0.0000, 0.0000, 269.9993);
	CreateDynamicObject(14394, -1277.157593, 42.077320, 991.741211, 0.0000, 0.0000, 269.9993);
	CreateDynamicObject(14394, -1253.466187, 42.077168, 991.741211, 0.0000, 0.0000, 269.9993);
	CreateDynamicObject(14394, -1285.114258, 42.068722, 991.741211, 0.0000, 0.0000, 269.9993);
	CreateDynamicObject(9931, -1226.510742, 31.304241, 1007.483154, 0.0000, 0.0000, 0.2803);
	CreateDynamicObject(9931, -1243.049805, 6.948307, 1007.458130, 0.0000, 0.0000, 0.2802);
	CreateDynamicObject(9931, -1263.211914, 6.842917, 1007.468872, 0.0000, 0.0000, 0.2802);
	CreateDynamicObject(9931, -1310.725830, 63.999893, 1007.483643, 0.0000, 0.0000, 180.2801);
	CreateDynamicObject(3462, -1284.395996, 47.595222, 992.451599, 0.0000, 0.0000, 179.9993);
	CreateDynamicObject(2869, -1267.020630, 24.050537, 992.538269, 0.0000, 0.0000, 141.0155);
	CreateDynamicObject(9931, -1310.571899, 30.938040, 1007.483887, 0.0000, 0.0000, 180.2801);
	CreateDynamicObject(6959, -1252.495117, 60.062286, 1000.491760, 146.9638, 0.0000, 270.0000);
	CreateDynamicObject(6959, -1252.475830, 18.812710, 1000.467407, 146.9638, 0.0000, 270.0000);
	CreateDynamicObject(6959, -1283.346924, 59.983360, 1001.541199, 146.9638, 0.0000, 90.0000);
	CreateDynamicObject(6959, -1284.428101, 18.758923, 1000.834839, 146.9638, 0.0000, 90.0000);
	CreateDynamicObject(6959, -1275.307861, 23.250977, 1000.808716, 90.2408, 0.0000, 180.0000);
	CreateDynamicObject(3462, -1271.945190, 23.955713, 994.052002, 0.0000, 0.0000, 269.9994);
	CreateDynamicObject(3462, -1252.848389, 47.714340, 992.451599, 0.0000, 0.0000, 359.9993);
	CreateDynamicObject(14629, -1260.838135, 56.001854, 1005.323303, 0.0000, 0.0000, 270.0000);
	CreateDynamicObject(9310, -1273.187012, 15.477688, 994.223877, 0.0000, 0.0000, 180.0000);
	CreateDynamicObject(8675, -1280.886841, 12.025467, 991.629578, 0.0000, 0.0000, 270.0000);
	CreateDynamicObject(11489, -1278.911499, 25.316626, 992.535400, 0.0000, 0.0000, 180.0000);
	CreateDynamicObject(2631, -1268.815796, 25.282019, 992.584595, 0.0000, 0.0000, 89.9994);
	CreateDynamicObject(2631, -1268.811890, 29.137302, 992.584595, 0.0000, 0.0000, 89.9994);
	CreateDynamicObject(2631, -1268.824707, 36.806702, 992.584595, 0.0000, 0.0000, 89.9994);
	CreateDynamicObject(3657, -1278.306519, 48.710224, 991.456055, 0.0000, 0.0000, 359.9938);
	CreateDynamicObject(3657, -1278.306030, 51.160862, 991.456055, 0.0000, 0.0000, 359.9938);
	CreateDynamicObject(3657, -1278.325073, 53.448265, 991.456055, 0.0000, 0.0000, 359.9938);
	CreateDynamicObject(3657, -1278.282104, 55.846535, 991.456055, 0.0000, 0.0000, 359.9938);
	CreateDynamicObject(3657, -1278.246582, 58.246803, 991.456055, 0.0000, 0.0000, 359.9938);
	CreateDynamicObject(3657, -1278.231323, 60.671745, 991.456055, 0.0000, 0.0000, 359.9938);
	CreateDynamicObject(3657, -1259.453735, 48.686584, 991.456055, 0.0000, 0.0000, 359.9938);
	CreateDynamicObject(3657, -1259.453125, 51.064392, 991.456055, 0.0000, 0.0000, 359.9938);
	CreateDynamicObject(3657, -1259.474609, 60.644825, 991.456055, 0.0000, 0.0000, 359.9938);
	CreateDynamicObject(3657, -1259.465820, 55.847565, 991.456055, 0.0000, 0.0000, 359.9938);
	CreateDynamicObject(3657, -1259.465332, 58.253082, 991.456055, 0.0000, 0.0000, 359.9938);
	CreateDynamicObject(3657, -1259.465332, 53.453094, 991.456055, 0.0000, 0.0000, 359.9938);
	CreateDynamicObject(3657, -1268.860474, 48.708618, 991.456055, 0.0000, 0.0000, 359.9938);
	CreateDynamicObject(3657, -1268.865723, 58.255974, 991.456055, 0.0000, 0.0000, 359.9938);
	CreateDynamicObject(3657, -1268.835083, 60.603638, 991.456055, 0.0000, 0.0000, 359.9938);
	CreateDynamicObject(3657, -1268.857910, 51.071983, 991.456055, 0.0000, 0.0000, 359.9938);
	CreateDynamicObject(3657, -1268.861694, 55.883762, 991.456055, 0.0000, 0.0000, 359.9938);
	CreateDynamicObject(3657, -1268.856445, 53.472572, 991.456055, 0.0000, 0.0000, 359.9938);
	CreateDynamicObject(2631, -1273.757813, 60.560432, 990.984192, 0.0000, 0.0000, 89.9994);
	CreateDynamicObject(2631, -1273.756714, 45.093994, 990.984192, 0.0000, 0.0000, 89.9994);
	CreateDynamicObject(2631, -1273.757080, 48.929184, 990.984192, 0.0000, 0.0000, 89.9994);
	CreateDynamicObject(2631, -1273.750244, 52.779720, 990.984192, 0.0000, 0.0000, 89.9994);
	CreateDynamicObject(2631, -1273.752319, 56.678581, 990.984192, 0.0000, 0.0000, 89.9994);
	CreateDynamicObject(2631, -1273.755737, 64.432190, 990.984192, 0.0000, 0.0000, 89.9994);
	CreateDynamicObject(2631, -1264.422485, 45.129677, 990.984192, 0.0000, 0.0000, 89.9994);
	CreateDynamicObject(2631, -1264.440308, 48.982594, 990.984192, 0.0000, 0.0000, 269.9993);
	CreateDynamicObject(2631, -1264.448608, 52.881546, 990.984192, 0.0000, 0.0000, 269.9993);
	CreateDynamicObject(2631, -1264.452271, 56.818733, 990.984192, 0.0000, 0.0000, 269.9993);
	CreateDynamicObject(2631, -1264.449341, 60.700542, 990.984192, 0.0000, 0.0000, 269.9993);
	CreateDynamicObject(2631, -1264.456909, 64.401794, 990.984192, 0.0000, 0.0000, 269.9993);
	CreateDynamicObject(2631, -1265.598022, 67.038857, 990.934143, 0.0000, 0.0000, 314.9993);
	CreateDynamicObject(2631, -1268.286133, 69.724098, 990.984192, 0.0000, 0.0000, 314.9993);
	CreateDynamicObject(2631, -1272.692505, 67.144173, 990.959167, 0.0000, 0.0000, 224.9993);
	CreateDynamicObject(2631, -1270.009399, 69.826210, 990.934143, 0.0000, 0.0000, 224.9993);
	CreateDynamicObject(2631, -1269.090576, 72.936592, 990.984192, 0.0000, 0.0000, 269.9993);
	CreateDynamicObject(2631, -1269.081177, 76.718849, 990.984192, 0.0000, 0.0000, 269.9993);
	CreateDynamicObject(640, -1284.843384, 52.080120, 991.634888, 0.0000, 0.0000, 0.0000);
	CreateDynamicObject(640, -1284.854614, 57.542603, 991.634888, 0.0000, 0.0000, 0.0000);
	CreateDynamicObject(640, -1284.859375, 63.007648, 991.634888, 0.0000, 0.0000, 0.0000);
	CreateDynamicObject(640, -1252.367920, 52.167294, 991.634888, 0.0000, 0.0000, 180.0000);
	CreateDynamicObject(640, -1252.386108, 57.722496, 991.634888, 0.0000, 0.0000, 180.0000);
	CreateDynamicObject(640, -1252.355103, 63.192646, 991.634888, 0.0000, 0.0000, 180.0000);
	CreateDynamicObject(640, -1252.281982, 38.280861, 993.235291, 0.0000, 0.0000, 180.0000);
	CreateDynamicObject(640, -1252.259766, 32.770782, 993.235291, 0.0000, 0.0000, 180.0000);
	CreateDynamicObject(640, -1284.922852, 38.228271, 993.235291, 0.0000, 0.0000, 0.0000);
	CreateDynamicObject(640, -1284.935791, 32.689613, 993.235291, 0.0000, 0.0000, 0.0000);
	CreateDynamicObject(640, -1284.888672, 68.504333, 991.634888, 0.0000, 0.0000, 0.0000);
	CreateDynamicObject(640, -1284.916992, 73.970154, 991.634888, 0.0000, 0.0000, 0.0000);
	CreateDynamicObject(640, -1252.345947, 68.646187, 991.634888, 0.0000, 0.0000, 180.0000);
	CreateDynamicObject(640, -1252.393311, 74.148811, 991.634888, 0.0000, 0.0000, 180.0000);
	CreateDynamicObject(869, -1258.693604, 28.688025, 992.988098, 0.0000, 0.0000, 0.0000);
	CreateDynamicObject(869, -1279.180298, 28.854671, 992.988098, 0.0000, 0.0000, 0.0000);
	CreateDynamicObject(2869, -1270.626831, 24.042725, 992.538269, 0.0000, 0.0000, 141.0155);
	CreateDynamicObject(6959, -1268.710083, 63.640335, 1009.901855, 146.9638, 0.0000, 0.0000);
	CreateDynamicObject(9931, -1251.179688, 104.122688, 1007.440796, 0.0000, 0.0000, 90.2803);
	CreateDynamicObject(9931, -1287.250732, 103.995872, 1007.459229, 0.0000, 0.0000, 90.2803);
	CreateDynamicObject(6959, -1266.597046, 79.032768, 1013.351868, 91.9597, 0.0000, 0.0000);
	CreateDynamicObject(1557, -1270.587769, 79.775429, 990.944580, 0.0000, 0.0000, 0.0000);
	CreateDynamicObject(1557, -1267.594482, 79.782951, 990.944580, 0.0000, 0.0000, 180.0000);
	CreateDynamicObject(3802, -1271.537964, 77.702072, 996.464355, 0.0000, 0.0000, 270.0000);
	CreateDynamicObject(3802, -1266.522949, 77.702583, 996.429810, 0.0000, 0.0000, 270.0000);
	CreateDynamicObject(3802, -1252.222656, 64.667465, 996.471680, 0.0000, 0.0000, 180.0000);
	CreateDynamicObject(3802, -1285.139526, 64.632408, 996.480652, 0.0000, 0.0000, 0.0000);
	CreateDynamicObject(3802, -1285.136719, 58.411289, 996.481140, 0.0000, 0.0000, 0.0000);
	CreateDynamicObject(3802, -1252.186523, 58.394234, 996.459717, 0.0000, 0.0000, 180.0000);
	CreateDynamicObject(3802, -1266.970581, 24.023315, 998.756348, 0.0000, 0.0000, 90.0000);
	CreateDynamicObject(3802, -1270.654297, 23.975155, 998.773254, 0.0000, 0.0000, 90.0000);
	CreateDynamicObject(2253, -1268.439575, 39.064476, 992.818665, 0.0000, 0.0000, 0.0000);
	CreateDynamicObject(2253, -1269.302246, 39.072876, 992.818665, 0.0000, 0.0000, 180.0000);
	CreateDynamicObject(1557, 2233.411377, -1334.981323, 22.988770, 0.0000, 0.0000, 90.0000);
	CreateDynamicObject(1557, 2233.407227, -1331.968750, 22.987949, 0.0000, 0.0000, 269.9999);
	CreateDynamicObject(16501, 2233.456543, -1334.099365, 23.632397, 0.0000, 0.0000, 0.0000);
	//CreateDynamicObject(1280, 2228.33594, -1714.88562, 12.98414,   0.00000, 0.00000, 0.00000); //bench
	CreateDynamicObject(1280, 2241.21948, -1722.68115, 12.98410,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(970, 2228.47290, -1727.08459, 13.04961,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 2232.65845, -1727.07239, 13.04961,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 2236.86011, -1727.06445, 13.04961,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 2224.51660, -1726.20728, 13.04961,   0.00000, 0.00000, -24.89999);
	CreateDynamicObject(970, 2222.05615, -1723.32678, 13.04961,   0.00000, 0.00000, -73.67999);
	CreateDynamicObject(970, 2221.71240, -1719.25830, 13.04961,   0.00000, 0.00000, -96.59998);
	CreateDynamicObject(970, 2222.18677, -1715.13562, 13.04961,   0.00000, 0.00000, -96.59998);
	CreateDynamicObject(1315, 2219.99536, -1719.55164, 15.77631,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 2222.66089, -1710.99561, 13.04961,   0.00000, 0.00000, -96.59998);
	//CreateDynamicObject(970, 2227.03076, -1708.89709, 13.04960,   0.00000, 0.00000, -178.92010);
	//CreateDynamicObject(970, 2239.01123, -1722.40076, 13.04960,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(792, 2251.28149, -1725.74426, 12.5000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(792, 2282.98242, -1725.74426, 12.5000,   0.00000, 0.00000, 0.00000);
	/*//HOSPITAL
	CreateDynamicObject(1723, 1213.764771, -1351.247070, 1016.877075, 0.0000, 0.0000, 359.9999);
	CreateDynamicObject(1533, 1197.403809, -1367.863037, 1016.873169, 0.0000, 0.0000, 90.0000);
	CreateDynamicObject(1533, 1152.995850, -1342.390991, 25.685171, 0.0000, 0.0000, 360.0000);
	CreateDynamicObject(1533, 1154.455933, -1342.406006, 25.672131, 0.0000, 0.0000, 360.0000);
	CreateDynamicObject(640, 1218.441284, -1366.312378, 1017.576050, 0.0000, 0.0000, 180.0000);
	CreateDynamicObject(14597, 1200.445923, -1378.412720, 1030.471436, 0.0000, 0.0000, 0.0000);
	CreateDynamicObject(14596, 1219.333374, -1381.912598, 1021.760498, 0.0000, 0.0000, 0.0000);
	CreateDynamicObject(14594, 1191.541748, -1366.505127, 1016.863403, 0.0000, 0.0000, 180.0000);
	CreateDynamicObject(13636, 1205.485596, -1378.639160, 1023.786255, 0.0000, 0.0000, 90.0000);
	CreateDynamicObject(16399, 1198.091553, -1381.416626, 1017.520325, 0.0000, 0.0000, 270.0000);
	CreateDynamicObject(2604, 1225.776123, -1353.122437, 1017.300537, 0.0000, 0.0000, 270.0000);
	CreateDynamicObject(1533, 1197.370361, -1366.383545, 1016.873169, 0.0000, 0.0000, 90.0000);
	CreateDynamicObject(1533, 1216.249634, -1380.723389, 1028.465576, 0.0000, 0.0000, 360.0000);
	CreateDynamicObject(1533, 1214.754883, -1380.714844, 1028.465576, 0.0000, 0.0000, 360.0000);
	CreateDynamicObject(2418, 1203.366089, -1387.538086, 1028.477417, 0.0000, 0.0000, 270.0000);
	CreateDynamicObject(2418, 1204.941406, -1388.463135, 1028.477417, 0.0000, 0.0000, 90.0001);
	CreateDynamicObject(2418, 1204.883301, -1369.032715, 1028.477417, 0.0000, 0.0000, 90.0001);
	CreateDynamicObject(2418, 1203.221069, -1368.121216, 1028.477417, 0.0000, 0.0000, 270.0001);
	CreateDynamicObject(2608, 1226.090820, -1350.271729, 1018.010071, 0.0000, 0.0000, 270.0000);
	CreateDynamicObject(16378, 1190.211914, -1377.711792, 1029.204590, 0.0000, 0.0000, 90.0000);
	CreateDynamicObject(16399, 1196.150146, -1349.886475, 1017.697205, 0.0000, 0.0000, 270.0000);
	CreateDynamicObject(14633, 1216.032959, -1365.686035, 1017.099304, 0.0000, 0.0000, 270.0000);
	CreateDynamicObject(14633, 1210.402100, -1346.428711, 1017.101501, 0.0000, 0.0000, 270.0000);
	CreateDynamicObject(2604, 1225.804077, -1347.412231, 1017.275513, 0.0000, 0.0000, 270.0000);
	CreateDynamicObject(1671, 1224.836792, -1352.376953, 1017.339233, 0.0000, 0.0000, 90.0000);
	CreateDynamicObject(1671, 1224.805542, -1346.877930, 1017.339233, 0.0000, 0.0000, 90.0000);
	CreateDynamicObject(2299, 1198.309448, -1368.280151, 1028.473145, 0.0000, 0.0000, 0.0000);
	CreateDynamicObject(2299, 1200.949951, -1368.269897, 1028.473145, 0.0000, 0.0000, 0.0000);
	CreateDynamicObject(2299, 1201.915894, -1388.523682, 1028.473145, 0.0000, 0.0000, 180.0000);
	CreateDynamicObject(2299, 1199.155884, -1388.552246, 1028.473145, 0.0000, 0.0000, 180.0000);
	CreateDynamicObject(2299, 1209.625732, -1388.479614, 1028.473145, 0.0000, 0.0000, 180.0000);
	CreateDynamicObject(2299, 1207.073975, -1388.558960, 1028.473145, 0.0000, 0.0000, 180.0000);
	CreateDynamicObject(2299, 1206.241577, -1368.317993, 1028.473145, 0.0000, 0.0000, 0.0001);
	CreateDynamicObject(2299, 1209.185059, -1368.293823, 1028.473145, 0.0000, 0.0000, 0.0001);
	CreateDynamicObject(640, 1213.739502, -1358.307373, 1017.568237, 0.0000, 0.0000, 0.0001);
	CreateDynamicObject(640, 1222.649536, -1344.556152, 1017.576050, 0.0000, 0.0000, 270.0001);
	CreateDynamicObject(640, 1202.809570, -1352.726074, 1017.576050, 0.0000, 0.0000, 90.0000);
	CreateDynamicObject(1723, 1215.786255, -1355.072266, 1016.869263, 0.0000, 0.0000, 180.0000);
	CreateDynamicObject(2608, 1213.380981, -1352.994019, 1018.208313, 0.0000, 0.0000, 90.0001);
	CreateDynamicObject(1502, 1215.977295, -1361.354980, 1016.869995, 0.0000, 0.0000, 0.0000);
	CreateDynamicObject(1502, 1214.027222, -1377.407227, 1016.851318, 0.0000, 0.0000, 270.0000);
	CreateDynamicObject(1723, 1199.252319, -1341.479370, 1016.877075, 0.0000, 0.0000, 0.0000);
	CreateDynamicObject(1723, 1202.269409, -1341.430054, 1016.877075, 0.0000, 0.0000, 360.0000);
	CreateDynamicObject(1723, 1196.604004, -1345.034546, 1016.869263, 0.0000, 0.0000, 90.0000);
	CreateDynamicObject(640, 1196.051514, -1348.409424, 1017.568237, 0.0000, 0.0000, 0.0002);
	CreateDynamicObject(640, 1207.756714, -1341.501343, 1017.576050, 0.0000, 0.0000, 270.0002);
	CreateDynamicObject(3783, 1230.250000, -1376.914795, 1018.897949, 0.0000, 0.0000, 175.7028);*/
	//MATPICKUP
	CreateDynamicObject(944, 2386.495605, -2008.356934, 13.438490, 0.0000, 0.0000, 0.0000);
	CreateDynamicObject(1271, 2387.261719, -2007.988037, 14.349586, 0.0000, 0.0000, 0.0000);
	CreateDynamicObject(2358, 2386.569336, -2007.799561, 14.116121, 0.0000, 0.0000, 0.0000);
	CreateDynamicObject(2359, 2384.486084, -2007.849976, 12.763988, 0.0000, 0.0000, 0.0000);
	CreateDynamicObject(2358, 2387.232178, -2008.728516, 14.116121, 0.0000, 0.0000, 337.5000);
	CreateDynamicObject(1635, 2395.528320, -2008.089722, 16.236403, 0.0000, 0.0000, 90.0000);
	CreateDynamicObject(1522, 2389.684326, -2007.461548, 12.540270, 0.0000, 0.0000, 0.0000);
	//MATDELIVER
	CreateDynamicObject(3265, 2268.533447, -1136.080566, 27.139744, 0.0000, 0.0000, 351.4056);
	CreateDynamicObject(984, 2294.078125, -1114.260376, 37.538239, 0.0000, 0.0000, 0.0000);
	CreateDynamicObject(984, 2294.097168, -1101.486816, 37.537029, 0.0000, 0.0000, 0.0000);
	CreateDynamicObject(944, 2284.854492, -1103.568726, 37.861351, 0.0000, 0.0000, 67.5000);
	CreateDynamicObject(944, 2291.843994, -1103.760742, 37.861351, 0.0000, 0.0000, 168.7500);
	CreateDynamicObject(964, 2283.867676, -1105.427246, 36.976563, 0.0000, 0.0000, 67.5000);
	CreateDynamicObject(2358, 2284.159668, -1103.942505, 38.538982, 0.0000, 0.0000, 67.5000);
	//TRIADS
	CreateDynamicObject(3525, 1193.078979, -1651.859863, 14.268278, 0.0000, 0.0000, 0.0000); //flame 01
	CreateDynamicObject(3525, 1189.237183, -1651.868774, 14.293088, 0.0000, 0.0000, 0.0000); //flame 02
	CreateDynamicObject(2025, 774.7000, -49.5000, 999.6000, 0.0000, 0.0000, 180.0000); //triadsblock 01
	CreateDynamicObject(2025, 774.7000, -50.3600, 999.6000, 0.0000, 0.0000, 180.0000); //triadsblock 02
	CreateDynamicObject(2025, 774.7000, -49.5000, 1002.1000, 0.0000, 0.0000, 180.0000); //triadsblock 03
	CreateDynamicObject(2025, 774.7000, -50.3600, 1002.1000, 0.0000, 0.0000, 180.0000); //triadsblock 04
	//SHOOTING RANGE
	CreateDynamicObject(2369, 462.267822, -748.740845, 3.652205, 0.0000, 0.0000, 0.0000);
	CreateDynamicObject(2412, 468.441956, -764.161743, 2.655633, 0.0000, 0.0000, 0.0000);
	CreateDynamicObject(2412, 466.617737, -764.188416, 2.655634, 0.0000, 0.0000, 0.0000);
	CreateDynamicObject(3776, 445.508514, -748.949341, 12.223398, 0.0000, 0.0000, 90.8594);
	CreateDynamicObject(964, 458.854156, -757.800964, 2.655633, 0.0000, 0.0000, 90.0000);
	CreateDynamicObject(2358, 458.539520, -756.465210, 3.852432, 0.0000, 0.0000, 90.0000);
	CreateDynamicObject(3800, 458.722778, -756.418579, 2.652178, 0.0000, 0.0000, 0.0000);
	CreateDynamicObject(986, 464.841064, -760.465637, 4.366301, 0.0000, 0.0000, 180.0000);
	CreateDynamicObject(976, 468.987518, -756.3, 0.569101, 0.0000, 0.0000, 90.0000);
	CreateDynamicObject(976, 468.987518, -765.1, 0.569101, 0.0000, 0.0000, 90.0000);
	CreateDynamicObject(18038, 470.041229, -760.577271, 4.882196, 0.0000, 0.0000, 0.0000);
	CreateDynamicObject(18092, 463.026276, -748.728149, 3.155056, 0.0000, 0.0000, 180.0000);
	CreateDynamicObject(8411, 470.506012, -759.644653, -62.409958, 0.0000, 0.0000, 272.5010);
	CreateDynamicObject(2773, 461.368256, -761.518677, 3.172862, 0.0000, 0.0000, 22.5000);
	CreateDynamicObject(2773, 459.999268, -761.580994, 3.172862, 0.0000, 0.0000, 22.5000);
	CreateDynamicObject(2773, 462.674622, -763.841370, 3.172862, 0.0000, 0.0000, 90.0000);
	CreateDynamicObject(2773, 461.025238, -763.173096, 3.172862, 0.0000, 0.0000, 45.0000);
	CreateDynamicObject(2773, 462.735443, -762.398193, 3.172862, 0.0000, 0.0000, 90.0000);
	//MARCS ROOM
	CreateDynamicObject(14419, 1481.929932, -1643.986572, 948.874634, 0.0000, 0.0000, 0.0000);
	CreateDynamicObject(16637, 1491.703369, -1639.720825, 946.807190, 0.0000, 0.0000, 0.0000);
	CreateDynamicObject(16637, 1497.452881, -1634.079346, 947.132507, 0.0000, 0.0000, 270.0000);
	CreateDynamicObject(14638, 1501.357544, -1634.133667, 945.619141, 0.0000, 0.0000, 90.0000);
	CreateDynamicObject(14638, 1498.368896, -1634.133667, 945.619141, 0.0000, 0.0000, 269.9999);
	CreateDynamicObject(14638, 1491.706421, -1636.691650, 945.619141, 0.0000, 0.0000, 0.0000);
	CreateDynamicObject(1796, 1495.213989, -1639.929565, 945.611267, 0.0000, 0.0000, 90.0000);
	CreateDynamicObject(2021, 1493.234497, -1638.470459, 945.624634, 0.0000, 0.0000, 90.0000);
	CreateDynamicObject(2852, 1492.585571, -1638.751953, 945.624756, 0.0000, 0.0000, 180.0000);
	CreateDynamicObject(2851, 1501.579834, -1634.397583, 945.624695, 0.0000, 0.0000, 0.0000);
	CreateDynamicObject(2828, 1492.124756, -1645.101196, 948.153442, 0.0000, 0.0000, 262.2651);
	CreateDynamicObject(2813, 1491.992310, -1638.495361, 946.524841, 0.0000, 0.0000, 292.5000);
	CreateDynamicObject(2232, 1502.137207, -1637.213989, 945.571899, 0.0000, 0.0000, 270.0000);
	CreateDynamicObject(2025, 1492.014526, -1645.052368, 945.621460, 0.0000, 0.0000, 90.0000);
	CreateDynamicObject(1728, 1500.373657, -1645.723755, 945.622620, 0.0000, 0.0000, 180.0000);
	CreateDynamicObject(1999, 1501.588501, -1636.448242, 945.624634, 0.0000, 0.0000, 270.0000);
	CreateDynamicObject(2232, 1501.628784, -1636.388428, 946.609619, 0.0000, 0.0000, 0.0000);
	CreateDynamicObject(2232, 1501.646362, -1636.463501, 946.584595, 0.0000, 0.0000, 180.0000);
	CreateDynamicObject(3472, 1506.404785, -1635.959839, 937.092651, 0.0000, 0.0000, 65.3083);
	CreateDynamicObject(3472, 1506.470947, -1636.554443, 938.523743, 0.0000, 0.0000, 189.0583);
	CreateDynamicObject(3472, 1507.113159, -1638.521484, 952.886414, 0.0000, 85.0842, 189.0583);
	CreateDynamicObject(2819, 1499.761475, -1645.178833, 945.620789, 0.0000, 0.0000, 0.0000);
	CreateDynamicObject(2819, 1499.639160, -1645.296143, 945.620789, 0.0000, 0.0000, 67.5000);
	CreateDynamicObject(2819, 1499.587280, -1645.455933, 946.109680, 0.0000, 0.0000, 281.2500);
	CreateDynamicObject(2386, 1499.566040, -1644.422363, 945.727783, 0.0000, 0.0000, 0.0000);
	CreateDynamicObject(2845, 1498.275757, -1645.359131, 945.634644, 0.0000, 0.0000, 0.0000);
	CreateDynamicObject(2844, 1498.738281, -1645.512695, 946.122009, 0.0000, 0.0000, 303.7500);
	CreateDynamicObject(2846, 1497.000977, -1645.767334, 945.638550, 0.0000, 0.0000, 0.0000);
	CreateDynamicObject(2843, 1498.008179, -1646.089600, 946.142395, 0.0000, 0.0000, 0.0000);
	CreateDynamicObject(18084, 1496.801147, -1645.172729, 947.928589, 0.0000, 0.0000, 0.0000);
	CreateDynamicObject(18084, 1494.195190, -1645.152832, 947.919739, 0.0000, 0.0000, 0.0000);
	CreateDynamicObject(18084, 1492.681396, -1644.394897, 947.945313, 0.0000, 0.0000, 270.0000);
	CreateDynamicObject(2045, 1492.439819, -1645.918701, 945.941528, 301.6622, 0.0000, 0.0000);
	//LSPD
	CreateDynamicObject(983, 1544.719238, -1620.600000, 13.213117, 0.0000, 0.0000, 0.0000); //front gate fence 01
	CreateDynamicObject(983, 1544.704590, -1635.950000, 13.213117, 0.0000, 0.0000, 0.0000); //front gate fence 02
	CreateDynamicObject(1334, 1544.863037, -1616.862305, 13.395647, 0.0000, 0.0000, 0.0000); //blue bin
	CreateDynamicObject(1343, 1546.723389, -1617.042847, 13.139275, 0.0000, 0.0000, 180.0000); //small blue bin
	CreateDynamicObject(1496, 1564.150513, -1667.3, 27.389730, 0.0000, 0.0000, 0.0000); //roof door
	CreateDynamicObject(1496, 1582.600464, -1637.951782, 12.554016, 0.0000, 0.0000, 0.0000); //garage door
	CreateDynamicObject(1507, 2263.2583, -1209.7000, 1048.0234, 0.0000, 0.0000, -90.0000); //vagosblock
	CreateDynamicObject(1537, -2169.5890, 639.9550, 1051.4000, 0.0000, 0.0000, 0.0000); //yakuzablock
	CreateDynamicObject(2567, 2225.1010, 1596.8000, 1000.9500, 0.0000, 0.0000, 0.0000); //drugfacblock 01
	CreateDynamicObject(2567, 2194.9000, 1618.6484, 1000.9500, 0.0000, 0.0000, 90.0000); //drugfacblock 02
	CreateDynamicObject(1685, 2205.9358, 1580.4000, 999.6800, 0.0000, 0.0000, 0.0000); //drugfaccbox
	//LSPD DOOR
	CreateDynamicObject(13360, 222.201110, 68.510246, 1005.039062, 0.000000, 0.000000, 269.637847); //sideblock 1
	CreateDynamicObject(13360, 222.197418, 68.508964, 1006.065673, 0.000000, 0.000000, 268.384521); //sideblock 2
	CreateDynamicObject(13360, 222.148254, 71.100784, 1005.039062, 0.000000, 0.000000, 270.767974); //sideblock 3
	CreateDynamicObject(13360, 222.163452, 71.105056, 1005.673706, 0.000000, 0.000000, 268.260955); //sideblock 4
	//LSPD CHIEF DOOR & OBJECTS
	CreateDynamicObject(2167, 216.87, 66.90, 1004.00,   0.00, 0.00, 87.64);
	CreateDynamicObject(2167, 216.91, 67.81, 1004.00,   0.00, 0.00, 87.64);
	CreateDynamicObject(2167, 216.95, 68.73, 1004.00,   0.00, 0.00, 87.64);
	CreateDynamicObject(1808, 217.13, 69.46, 1004.00,   0.00, 0.00, -268.51);
	CreateDynamicObject(2164, 217.91, 65.81, 1004.00,   0.00, 0.00, 179.96);
	CreateDynamicObject(2164, 221.44, 65.82, 1004.00,   0.00, 0.00, -180.75);
	CreateDynamicObject(2164, 219.68, 65.82, 1004.00,   0.00, 0.00, -180.65);
	CreateDynamicObject(2008, 219.13, 68.01, 1004.00,   0.00, 0.00, 0.00);
	CreateDynamicObject(1714, 219.46, 66.77, 1004.00,   0.00, 0.00, 164.00);
	CreateDynamicObject(1703, 217.90, 72.23, 1004.00,   0.00, 0.00, 0.00);
	CreateDynamicObject(1776, 217.30, 70.39, 1004.99,   0.00, 0.00, -270.94);
	CreateDynamicObject(2001, 217.31, 71.43, 1004.00,   0.00, 0.00, 0.00);
	CreateDynamicObject(1714, 219.75, 69.42, 1004.00,   0.00, 0.00, -9.08);
	CreateDynamicObject(1704, 220.74, 72.19, 1004.00,   0.00, 0.00, 0.00);
	//FBI OBJECTS & DOORS
	CreateDynamicObject(8674, 232.90, 125.86, 1013.04,   180.00, 0.00, 90.00); //blockoff
	CreateDynamicObject(1846, 231.93, 123.19, 1010.65,   90.00, 0.00, 90.00); //glass
	CreateDynamicObject(1846, 231.93, 125.98, 1010.65,   90.00, 0.00, 90.00); //glass
	CreateDynamicObject(1846, 238.55, 112.65, 1004.67,   90.00, 90.00, 0.00); //unbreakable glass
	CreateDynamicObject(1846, 252.23, 117.44, 1004.67,   90.00, 90.00, 0.00); //unbreakable glass
	CreateDynamicObject(8673, 243.40, 119.36, 1006.19,   180.00, 0.00, 0.00); //lobby blockoff-fence
	CreateDynamicObject(1886, 241.10254, 126.31700, 1007.44879,   23.00000, 0.00000, 34.50000);
	CreateDynamicObject(1886, 252.30681, 118.50759, 1007.24481,   23.00000, 0.00000, -42.50000);
	CreateDynamicObject(2190, 251.33554, 119.45097, 1003.41602,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(2190, 245.11832, 119.53684, 1003.41602,   0.00000, 0.00000, 149.97000);
	CreateDynamicObject(2190, 243.18100, 119.39450, 1003.41602,   0.00000, 0.00000, 176.81500);
	CreateDynamicObject(2201, 247.41579, 120.02654, 1003.41522,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1806, 242.05820, 121.03630, 1002.21509,   0.00000, 0.00000, 209.12000);
	CreateDynamicObject(1806, 246.26570, 121.00200, 1002.21509,   0.00000, 0.00000, 177.27000);
	CreateDynamicObject(1806, 251.29056, 121.21151, 1002.21509,   0.00000, 0.00000, 159.07001);
	CreateDynamicObject(2894, 246.14835, 119.61678, 1003.41541,   0.00000, 0.00000, -6.37000);
	CreateDynamicObject(2894, 250.68781, 119.73157, 1003.41541,   0.00000, 0.00000, -2.27500);
	CreateDynamicObject(2894, 242.68361, 119.70419, 1003.41541,   0.00000, 0.00000, 5.91500);
	CreateDynamicObject(19462, 241.56670, 114.59550, 1002.14362,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19462, 241.56650, 104.95920, 1002.14362,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19462, 245.06461, 104.98090, 1002.14362,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19462, 248.56081, 104.97950, 1002.14362,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19462, 251.22870, 105.00010, 1002.14362,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19462, 245.06329, 114.61200, 1002.14362,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19462, 248.56059, 114.60950, 1002.14362,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19462, 251.22749, 114.62670, 1002.14160,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(1536, 244.89140, 106.98990, 1002.21960,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1536, 247.91010, 107.02720, 1002.21960,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1808, 240.03329, 114.61440, 1002.23181,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1819, 252.43745, 111.09379, 1002.23102,   0.00000, 0.00000, 45.00000);
	CreateDynamicObject(2852, 252.34067, 111.83498, 1002.72748,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2247, 252.64230, 111.96216, 1003.14203,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(646, 240.53925, 107.89581, 1003.58752,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2601, 241.66560, 119.81480, 1003.49469,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2196, 250.46770, 120.17328, 1003.41449,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2161, 239.86870, 120.53720, 1002.21399,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2163, 252.96928, 121.31219, 1002.21503,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(2164, 241.98737, 127.03932, 1002.21503,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2612, 252.91859, 111.61450, 1004.02252,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(2611, 252.91910, 121.34380, 1003.96259,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(2737, 251.44420, 127.03170, 1003.60138,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2615, 251.47279, 127.02430, 1003.87720,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2002, 240.36464, 121.99672, 1002.21478,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2010, 240.40068, 126.40847, 1002.21442,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2609, 247.03740, 126.70410, 1002.94299,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2609, 246.38190, 126.70249, 1002.94299,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2186, 248.02271, 126.54970, 1002.21600,   0.00000, 0.00000, 0.00000);
	//PRISON
	CreateDynamicObject(14412, 1789.184448, -1569.734131, 1645.317383, 0.000000, 0.000000, 0.000000);
	CreateDynamicObject(18553, 1757.807495, -1577.933228, 1641.404663, 0.000000, 0.000000, -180.859341949);
	CreateDynamicObject(1800, 1771.276611, -1584.358398, 1635.990845, 0.000000, 0.000000, 0.000000);
	CreateDynamicObject(1966, 1770.740234, -1583.169922, 1637.284180, 0.000000, 0.000000, 89.999981276);
	CreateDynamicObject(1966, 1776.392700, -1583.226563, 1637.359253, 0.000000, 0.000000, 89.999981276);
	CreateDynamicObject(1966, 1798.508789, -1583.209229, 1637.310425, 0.000000, 0.000000, 89.999981276);
	CreateDynamicObject(2514, 1775.742798, -1582.768799, 1635.972778, 0.000000, 0.000000, -180.000019848);
	CreateDynamicObject(1508, 1806.459961, -1576.635376, 1637.506836, 0.000000, 0.000000, 0.000000);
	CreateDynamicObject(14459, 1784.398560, -1569.747925, 1643.005615, 0.000000, 0.000000, 0.000000);
	CreateDynamicObject(14414, 1768.359863, -1563.225098, 1636.910400, 0.000000, 0.000000, 179.999962552);
	CreateDynamicObject(1499, 1766.208862, -1580.001831, 1640.113403, 0.000000, 0.000000, 269.999943828);
	CreateDynamicObject(1499, 1766.235107, -1583.019409, 1640.106812, 0.000000, 0.000000, 90.0000385718);
	CreateDynamicObject(8060, 1791.806763, -1535.868530, 1634.645874, -181.340741088, 0.000000, 0.000114591559026);
	CreateDynamicObject(1966, 1776.405151, -1556.301025, 1637.259155, 0.000000, 0.000000, 89.999981276);
	CreateDynamicObject(1966, 1781.872559, -1556.312622, 1637.260132, 0.000000, 0.000000, 89.999981276);
	CreateDynamicObject(1966, 1787.494995, -1556.312012, 1637.309204, 0.000000, 0.000000, 89.999981276);
	CreateDynamicObject(1966, 1793.112305, -1556.317383, 1637.309204, 0.000000, 0.000000, 89.999981276);
	CreateDynamicObject(1966, 1798.479492, -1556.314819, 1637.334961, 0.000000, 0.000000, 89.999981276);
	CreateDynamicObject(2514, 1801.900879, -1556.299805, 1635.972778, 0.000000, 0.000000, -360.000039696);
	CreateDynamicObject(2514, 1797.694580, -1556.320923, 1635.972778, 0.000000, 0.000000, -360.000039696);
	CreateDynamicObject(2514, 1792.343384, -1556.328247, 1635.972778, 0.000000, 0.000000, -360.000039696);
	CreateDynamicObject(2514, 1786.635132, -1556.303223, 1635.972778, 0.000000, 0.000000, -360.000039696);
	CreateDynamicObject(2514, 1775.718750, -1556.331665, 1635.972778, 0.000000, 0.000000, -360.000039696);
	CreateDynamicObject(2514, 1781.187256, -1556.340454, 1635.972778, 0.000000, 0.000000, -360.000039696);
	CreateDynamicObject(1800, 1771.360718, -1559.318848, 1635.851929, 0.000000, 0.000000, 0.000000);
	CreateDynamicObject(1800, 1777.049072, -1559.313843, 1635.801880, 0.000000, 0.000000, 0.000000);
	CreateDynamicObject(1800, 1782.598267, -1559.296021, 1635.826904, 0.000000, 0.000000, 0.000000);
	CreateDynamicObject(1800, 1788.114868, -1559.312378, 1635.801880, 0.000000, 0.000000, 0.000000);
	CreateDynamicObject(1800, 1793.790649, -1559.328369, 1635.901978, 0.000000, 0.000000, 0.000000);
	CreateDynamicObject(1800, 1799.285767, -1559.336670, 1635.901978, 0.000000, 0.000000, 0.000000);
	CreateDynamicObject(16378, 1760.124512, -1569.561523, 1640.866821, 0.000000, 0.000000, 180.000019848);
	CreateDynamicObject(16154, 1761.361694, -1562.671509, 1640.236450, 0.000000, 0.000000, -180.000019848);
	CreateDynamicObject(2737, 1757.953247, -1566.131714, 1642.168091, 0.000000, 0.000000, 89.999981276);
	CreateDynamicObject(1966, 1781.853516, -1583.229004, 1637.334229, 0.000000, 0.000000, 89.999981276);
	CreateDynamicObject(1966, 1787.537476, -1583.232300, 1637.343872, 0.000000, 0.000000, 89.999981276);
	CreateDynamicObject(1966, 1793.307007, -1583.234009, 1637.309937, 0.000000, 0.000000, 89.999981276);
	CreateDynamicObject(2514, 1781.272949, -1582.731934, 1635.972778, 0.000000, 0.000000, -180.000019848);
	CreateDynamicObject(2514, 1786.829224, -1582.760132, 1635.972778, 0.000000, 0.000000, -180.000019848);
	CreateDynamicObject(2514, 1792.491821, -1582.755005, 1635.972778, 0.000000, 0.000000, -180.000019848);
	CreateDynamicObject(2514, 1797.929688, -1582.738647, 1635.972778, 0.000000, 0.000000, -180.000019848);
	CreateDynamicObject(2514, 1802.001953, -1582.729614, 1635.972778, 0.000000, 0.000000, -180.000019848);
	CreateDynamicObject(1800, 1777.064087, -1584.312622, 1635.977051, 0.000000, 0.000000, 0.000000);
	CreateDynamicObject(1800, 1782.810181, -1579.774170, 1635.977051, 0.000000, 0.000000, -179.999962552);
	CreateDynamicObject(1800, 1788.411133, -1579.764282, 1635.977051, 0.000000, 0.000000, -179.999962552);
	CreateDynamicObject(1800, 1794.223511, -1579.755005, 1635.977051, 0.000000, 0.000000, -179.999962552);
	CreateDynamicObject(1800, 1799.393555, -1579.773682, 1635.977051, 0.000000, 0.000000, -179.999962552);
	//PRISON OUTSIDE
	CreateDynamicObject(2961, 1765.9000, -1574.0979, 1641.7, 0.000000, 0.000000, 270.0); // Cell Button
	CreateDynamicObject(2961, 209.039398, 1813.174683, 22.5, 0.000000, 0.000000, 44.999990638); // Gate Button
	CreateDynamicObject(18553, 226.373581, 1872.370239, 14.026321, 0.000000, 0.000000, -0.859436692696);
	CreateDynamicObject(1508, 201.098923, 1869.536499, 13.755270, 0.000000, 0.000000, 0.000000);
	CreateDynamicObject(1886, 201.656082, 1874.104370, 16.244650, 18.9076072393, 0.000000, 44.999990638); // Camera
	CreateDynamicObject(1886, 159.715179, 1931.205322, 32.528725, 16.3292971612, 0.000000, 292.500053739); // Camera
	CreateDynamicObject(1886, 264.598419, 1893.736816, 32.537567, 16.3292971612, 0.000000, 270.000001124); // Camera
	CreateDynamicObject(1886, 167.735580, 1848.043457, 32.510399, 16.3292971612, 0.000000, 90.0000385718); // Camera
	CreateDynamicObject(1886, 460.5567, -92.2545, 1002.25, 10.0, 0.0, 235.0); // Camera
	CreateDynamicObject(1886, 1766.85, -1570.11, 1646.0, 15.0, 0.0, 90.0); // Camera
	CreateDynamicObject(1886, 265.112061, 1862.907837, 12.618983, 18.9076072393, 0.000000, 44.999990638); // Camera
	//LS FOUNTAIN
	CreateDynamicObject(9833, 1479.86, -1640.36, 14.15, 0.00, 0.00, 0.00); //LS FOUNTAIN
	//PRISON PHONE
	CreateDynamicObject(1216, 185.3808, 1923.9442, 17.4, 0.000000, 0.0, 0.0); //prison phone
	CreateDynamicObject(1505, -221.9176, 1404.6, 26.6, 0.000000, 0.000000, -90.00000); // Lil Probe Inn Door For Locker Room
	//ATMS
	CreateDynamicObject(2942, 1928.673461, -1783.487304, 13.114453, 0.000000, 0.000000, 90.431625); //atm object
	//CreateDynamicObject(2942, 2228.281982, -1710.821166, 13.177772, 0.000000, 0.000000, 269.949920); // atm object gym
	//CreateDynamicObject(2618, 2228.382324, -1710.860961, 12.549647, 0.000000, 0.000000, 269.315551); // atm protection gym
	CreateDynamicObject(2942, 1548.155884, -1472.062866, 1036.653442, 0.0000, 0.0000, 270.0000); // ATM VIP
	CreateDynamicObject(2942, 651.20215, -520.47241, 15.95219,   0.00000, 0.00000, 0.00000); //dillimore
	CreateDynamicObject(2942, 251.26659, -189.68741, 1.16737,   0.00000, 0.00000, 0.00000); //blueberry
	//VIP CLUB
	CreateObject(8172, 1528.93689, -1454.49780, 8.50707,   0.00000, 0.00000, 0.00000); //VIP Garage Floor (this stops vehicles from falling through the map)
	CreateObject(14777, 1532.529297, -1474.430298, 1036.002686, 0.0000, 0.0000, 0.0000); //Floor
	CreateDynamicObject(1726, 1532.04589844, -1475.37109375, 1036.00292969, 0.00000000, 0.00000000, 90.00000000); //convertffs(1)
	CreateDynamicObject(1726, 1538.87976100, -1473.34668000, 1036.00293000, 0.00000000, 0.00000000, 270.00000000); //convertffs(2)
	CreateDynamicObject(1726, 1529.01147500, -1473.39013700, 1036.00293000, 0.00000000, 0.00000000, 270.00000000); //convertffs(3)
	CreateDynamicObject(1726, 1541.98901400, -1475.36938500, 1036.00293000, 0.00000000, 0.00000000, 90.00000000); //convertffs(4)
	CreateDynamicObject(1726, 1537.85607900, -1468.95263700, 1036.00293000, 0.00000000, 0.00000000, 0.00000000); //convertffs(5)
	CreateDynamicObject(1726, 1540.61621100, -1468.95275900, 1036.00293000, 0.00000000, 0.00000000, 0.00000000); //convertffs(6)
	CreateDynamicObject(1726, 1541.95520000, -1479.81738300, 1036.00293000, 0.00000000, 0.00000000, 180.00000000); //convertffs(7)
	CreateDynamicObject(1726, 1539.23803700, -1479.84558100, 1036.00293000, 0.00000000, 0.00000000, 180.00000000); //convertffs(8)
	CreateDynamicObject(2004, 1548.55004883, -1477.00000000, 1037.90002441, 0.00000000, 0.00000000, 270.00000000); //object(cr_safe_door) (1)
	CreateDynamicObject(2004, 1548.55004883, -1473.80004883, 1037.90002441, 0.00000000, 0.00000000, 270.00000000); //object(cr_safe_door) (2)
	CreateDynamicObject(2006, 1548.50000000, -1474.40002441, 1037.90002441, 0.00000000, 0.00000000, 90.00000000); //object(cr_safe_dial) (1)
	CreateDynamicObject(2006, 1548.40002441, -1477.59997559, 1037.90002441, 0.00000000, 0.00000000, 90.00000000); //object(cr_safe_dial) (2)
	//BALLAS OBJECTS?
	CreateDynamicObject(1557, 1240.30, -810.765, 1083.02, 0.0, 0.0, 270.0);
	CreateDynamicObject(1557, 1240.30, -813.80, 1083.02, 0.0, 0.0, 90.0);
	CreateDynamicObject(1557, 1225.025, -814.2, 1083.02, 0.0, 0.0, 0.0);
	CreateDynamicObject(1557, 1228.045, -814.2, 1083.02, 0.0, 0.0, 180.0);
	//Mapped & object edited by Jacob Malcom
	new roof1 = CreateDynamicObject(19381, 302.8542, 2504.5056, 501.3299, 0.00, 90.00, 0.00);
	SetDynamicObjectMaterial(roof1, 0, 964, "cj_crate_will", "CJ_FLIGHT_CASE", 0xFF2B3D05);
	new roof2 = CreateDynamicObject(19381, 302.8319, 2514.1377, 501.3299, 0.00, 90.00, 0.00);
	SetDynamicObjectMaterial(roof2, 0, 964, "cj_crate_will", "CJ_FLIGHT_CASE", 0xFF2B3D05);
	new floor1 = CreateObject(19381, 302.8319, 2514.1377, 498.8299, 0.00, 90.00, 0.00);
	SetObjectMaterial(floor1, 0, 964, "cj_crate_will", "CJ_FLIGHT_CASE", 0xFF2B3D05);
	new wall2 = CreateDynamicObject(19381, 302.9942, 2516.3008, 501.3299, 0.00, 0.00, 90.00);
	SetDynamicObjectMaterial(wall2, 0, 964, "cj_crate_will", "CJ_FLIGHT_CASE", 0xFF2B3D05);
	new wall3 = CreateDynamicObject(19373, 300.4990, 2511.4390, 500.5299, 0.00, 0.00, 0.00);
	SetDynamicObjectMaterial(wall3, 0, 964, "cj_crate_will", "CJ_FLIGHT_CASE", 0xFF2B3D05);
	new wall4 = CreateDynamicObject(19373, 300.4982, 2514.6462, 500.5299, 0.00, 0.00, 0.00);
	SetDynamicObjectMaterial(wall4, 0, 964, "cj_crate_will", "CJ_FLIGHT_CASE", 0xFF2B3D05);
	new wall5 = CreateDynamicObject(19373, 300.4996, 2508.2295, 500.5299, 0.00, 0.00, 0.00);
	SetDynamicObjectMaterial(wall5, 0, 964, "cj_crate_will", "CJ_FLIGHT_CASE", 0xFF2B3D05);
	new wall6 = CreateDynamicObject(19373, 304.7747, 2508.2332, 500.5299, 0.00, 0.00, 0.00);
	SetDynamicObjectMaterial(wall6, 0, 964, "cj_crate_will", "CJ_FLIGHT_CASE", 0xFF2B3D05);
	new wall7 = CreateDynamicObject(19373, 304.8102, 2511.4446, 500.5299, 0.00, 0.00, 0.00);
	SetDynamicObjectMaterial(wall7, 0, 964, "cj_crate_will", "CJ_FLIGHT_CASE", 0xFF2B3D05);
	new wall8 = CreateDynamicObject(19373, 304.8042, 2514.6541, 500.5299, 0.00, 0.00, 0.00);
	SetDynamicObjectMaterial(wall8, 0, 964, "cj_crate_will", "CJ_FLIGHT_CASE", 0xFF2B3D05);
	new drframe = CreateDynamicObject(19391, 302.5655, 2516.1812, 500.4299, 0.00, 0.00, 90.00);
	SetDynamicObjectMaterial(drframe, 0, 964, "cj_crate_will", "CJ_FLIGHT_CASE", 0xFF2B3D05);
	new exitdoor = CreateDynamicObject(2929, 302.66, 2508.66, 500.02,   50.00, 0.00, 0.00);
	SetDynamicObjectMaterial(exitdoor, 0, 2929, "a51_imy", "a51_blastdoor", 0xFF2B3D05);
	new seat1 = CreateDynamicObject(2119, 304.56, 2510.74, 498.62,   0.00, 0.00, 90.00);
	SetDynamicObjectMaterial(seat1, 0, 2929, "cj_tables", "CJ_WOOD5", 0xFF2B3D05);
	new seat2 = CreateDynamicObject(2119, 304.56, 2512.72, 498.62,   0.00, 0.00, 90.00);//seat
	SetDynamicObjectMaterial(seat2, 0, 2929, "cj_tables", "CJ_WOOD5", 0xFF2B3D05);
	new seat3 = CreateDynamicObject(2119, 304.56, 2514.70, 498.62,   0.00, 0.00, 90.00);//seat
	SetDynamicObjectMaterial(seat3, 0, 2929, "cj_tables", "CJ_WOOD5", 0xFF2B3D05);
	new seat4 = CreateDynamicObject(2119, 300.80, 2510.73, 498.62,   0.00, 0.00, 90.00);//seat
	SetDynamicObjectMaterial(seat4, 0, 2929, "cj_tables", "CJ_WOOD5", 0xFF2B3D05);
	new seat5 = CreateDynamicObject(2119, 300.80, 2512.71, 498.62,   0.00, 0.00, 90.00);//seat
	SetDynamicObjectMaterial(seat5, 0, 2929, "cj_tables", "CJ_WOOD5", 0xFF2B3D05);
	new seat6 = CreateDynamicObject(2119, 300.80, 2514.69, 498.62,   0.00, 0.00, 90.00); //seat
	SetDynamicObjectMaterial(seat6, 0, 2929, "cj_tables", "CJ_WOOD5", 0xFF2B3D05);
	new drpilot = CreateDynamicObject(2944, 303.3891, 2516.1833, 499.9000, 0.00, 0.00, 270.00); //door to pilot
	SetDynamicObjectMaterial(drpilot, 0, 2929, "bigshapx", "freighter1", 0xFF2B3D05);
	CreateDynamicObject(14550, 302.65, 2498.46, 499.51,   15.00, 0.00, 0.00);//cargone
	//VIP Club
	// LS Wheels Arch Angels
	CreateDynamicObject(8947, 2118.908691, -2144.242432, 15.635593, 0.0000, 0.0000, 180.0000);
	CreateDynamicObject(8947, 2118.907, -2144.243, 18.166914, 0.0000, 0.0000, 180.0000);
	CreateDynamicObject(2048, 2124.459473, -2131.939453, 19.628647, 0.0000, 0.0000, 180.0000);
	CreateDynamicObject(2048, 2113.323242, -2131.939453, 19.637478, 0.0000, 0.0000, 180.0000);
	CreateDynamicObject(2587, 2125.718750, -2139.818115, 15.171194, 0.0000, 0.0000, 270.0000);
	CreateDynamicObject(2588, 2125.743652, -2142.543945, 15.169697, 0.0000, 0.0000, 270.0000);
	CreateDynamicObject(2714, 2114.124023, -2131.939453, 14.847555, 0.0000, 0.0000, 180.0000);
	CreateDynamicObject(10281, 2118.842285, -2131.167480, 18.690567, 0.0000, 0.0000, 180.0000);
	CreateDynamicObject(14826, 2114.785400, -2153.783936, 12.991997, 0.0000, 0.0000, 0.0000);
	CreateDynamicObject(939, 2113.382813, -2136.948975, 15.076038, 0.0000, 0.0000, 90.0000);
	CreateDynamicObject(1327, 2113.248291, -2151.069580, 12.589864, 358.2811, 90.2409, 0.0000);
	CreateDynamicObject(1327, 2114.385498, -2151.370361, 13.189855, 358.2811, 90.2409, 0.0000);
	CreateDynamicObject(1327, 2115.313232, -2151.051514, 12.550803, 358.2811, 90.2409, 0.0000);
	CreateDynamicObject(1358, 2127.789551, -2134.615967, 13.828096, 0.0000, 0.0000, 270.0000);
	CreateDynamicObject(12957, 2113.870850, -2141.742188, 13.511029, 0.0000, 0.0000, 360.0000);
	CreateDynamicObject(13591, 2128.792725, -2141.216309, 12.884167, 0.0000, 0.0000, 270.0000);
	//CreateDynamicObject(8948, 2118.905, -2132.019775, 14.379093, 0.0000, 0.0000, 270.0000);
	CreateDynamicObject(2911, 2109.93237, -2125.60205, 12.64071,   0.00000, 0.00000, -90.18001); //door
	// FightClub
	CreateDynamicObject(14781, 2337.417725, -1242.319458, 22.4, 0.0000, 0.0000, 0.0000); // 14780
	CreateDynamicObject(10671, 2313.504395, -1217.852539, 24.981819, 0.0000, 0.0000, 359.1406);
	CreateDynamicObject(10671, 2322.292236, -1218.081665, 23.292707, 0.0000, 0.0000, 179.1405);
	CreateDynamicObject(10671, 2352.214600, -1265.512939, 23.370344, 0.0000, 0.0000, 357.4217);
	CreateDynamicObject(10671, 2351.720703, -1279.122314, 23.365671, 0.0000, 0.0000, 357.4216);
	CreateDynamicObject(10671, 2351.993896, -1271.819336, 25.893682, 0.0000, 0.0000, 357.4217);
	CreateDynamicObject(2063, 2351.614014, -1270.184326, 22.414352, 0.0000, 0.0000, 270.0000);
	CreateDynamicObject(2063, 2351.621826, -1267.529297, 22.421108, 0.0000, 0.0000, 270.0000);
	CreateDynamicObject(1808, 2351.688477, -1265.868042, 21.505781, 0.0000, 0.0000, 270.0000);
	CreateDynamicObject(2102, 2351.485107, -1266.723511, 23.200289, 0.0000, 0.0000, 270.0000);
	CreateDynamicObject(2146, 2351.322510, -1264.128296, 21.995489, 0.0000, 0.0000, 0.0000);
	CreateDynamicObject(10671, 2351.856201, -1279.091187, 23.402435, 0.0000, 0.0000, 177.4217);
	CreateDynamicObject(10671, 2352.236084, -1265.474609, 23.394505, 0.0000, 0.0000, 177.4217);
	CreateDynamicObject(10671, 2352.129883, -1271.079834, 25.872356, 0.0000, 0.0000, 177.4217);
	CreateDynamicObject(1491, 2352.026611, -1271.538086, 21.515621, 0.0000, 0.0000, 270.0000);
	CreateDynamicObject(14782, 2334.008789, -1214.968628, 22.516048, 0.0000, 0.0000, 0.0000);
	CreateDynamicObject(14782, 2340.441162, -1214.977051, 22.516048, 0.0000, 0.0000, 0.0000);
	CreateDynamicObject(14782, 2322.85, -1244.48, 22.516048, 0.0000, 0.0000, 90.0000);
	CreateDynamicObject(14782, 2322.85, -1237.48, 22.516048, 0.0000, 0.0000, 90.0000);
	CreateDynamicObject(2590, 2349.090088, -1220.506104, 24.265539, 180.4819, 0.0000, 33.7500);
	CreateDynamicObject(1985, 2349.121338, -1220.473022, 24.328732, 0.0000, 0.0000, 0.0000);
	CreateDynamicObject(2590, 2349.097168, -1223.775879, 24.271837, 180.4819, 0.0000, 33.7500);
	CreateDynamicObject(1985, 2349.122559, -1223.765381, 24.328732, 0.0000, 0.0000, 0.0000);
	CreateDynamicObject(3657, 2337.629150, -1236.419800, 22.018211, 0.0000, 0.0000, 0.0000);
	CreateDynamicObject(3657, 2332.188232, -1242.168823, 22.018211, 0.0000, 0.0000, 90.0000);
	CreateDynamicObject(3657, 2337.508301, -1247.932251, 22.018211, 0.0000, 0.0000, 180.0000);
	CreateDynamicObject(3657, 2343.370850, -1242.297852, 22.018211, 0.0000, 0.0000, 269.9999);
	CreateDynamicObject(16501, 2333.07, -1272.811646, 23.707500, 0.0000, 0.0000, 0.0000);
	CreateDynamicObject(16501, 2325.908203, -1267.651001, 23.707500, 0.0000, 0.0000, 90.0000);
	CreateDynamicObject(16501, 2329.621094, -1267.655151, 23.707500, 0.0000, 0.0000, 90.0000);
	CreateDynamicObject(16501, 2333.087891, -1271.284424, 26.158493, 0.0000, 0.0000, 0.0000);
	CreateDynamicObject(1828, 2329.534180, -1273.255371, 21.472719, 0.0000, 0.0000, 0.0000);
	CreateDynamicObject(1723, 2332.262207, -1271.516479, 21.505070, 0.0000, 0.0000, 270.0000);
	CreateDynamicObject(1723, 2331.052246, -1274.996826, 21.498047, 0.0000, 0.0000, 180.0000);
	CreateDynamicObject(638, 2323.984619, -1268.229004, 22.204056, 0.0000, 0.0000, 90.0000);
	CreateDynamicObject(2007, 2327.791016, -1274.957031, 21.495609, 0.0000, 0.0000, 180.0000);
	CreateDynamicObject(2332, 2322.794922, -1270.519165, 21.962885, 0.0000, 0.0000, 90.0000);
	CreateDynamicObject(2631, 2349.15, -1241.99, 21.5, 0.0000, 0.0000, 90.0000);
	CreateDynamicObject(2915, 2349.35, -1240.73, 21.65, 0.0000, 0.0000, 0.0000);
	CreateDynamicObject(3657, 2337.724121, -1235.408813, 22.018211, 0.0000, 0.0000, 180.0000);
	CreateDynamicObject(3657, 2343.304199, -1229.980103, 22.018211, 0.0000, 0.0000, 269.9999);
	CreateDynamicObject(3657, 2331.988037, -1229.879517, 22.018211, 0.0000, 0.0000, 90.0000);
	CreateDynamicObject(3657, 2337.634033, -1223.912842, 22.018211, 0.0000, 0.0000, 0.0000);
	CreateDynamicObject(14781, 2336.899170, -1230.123413, 22.41, 0.0000, 0.0000, 0.0000);
	CreateDynamicObject(986, 2340.959717, -1256.359863, 20.635706, 0.0000, 0.0000, 270.0000);
	CreateDynamicObject(986, 2336.961914, -1252.338379, 20.660706, 0.0000, 0.0000, 0.0000);
	CreateDynamicObject(986, 2332.965332, -1256.290283, 20.660686, 0.0000, 0.0000, 270.0000);
	CreateDynamicObject(986, 2336.965576, -1260.350464, 20.660706, 0.0000, 0.0000, 180.0000);
	CreateDynamicObject(14782, 2322.891602, -1260.076416, 22.523071, 0.0000, 0.0000, 90.0000);
	CreateDynamicObject(2773, 2361.154053, -1269.620728, 23.521690, 0.0000, 0.0000, 180.0000);
	CreateDynamicObject(2773, 2361.131104, -1274.587158, 23.518616, 0.0000, 0.0000, 180.0000);
	CreateDynamicObject(2773, 2361.140869, -1272.662109, 23.518137, 0.0000, 0.0000, 180.0000);
	CreateDynamicObject(1808, 2322.573730, -1273.993530, 21.494843, 0.0000, 0.0000, 90.0000);
	CreateDynamicObject(2126, 2329.025146, -1273.649048, 21.494965, 0.0000, 0.0000, 0.0000);
	CreateDynamicObject(1671, 2324.918457, -1274.390625, 21.960215, 0.0000, 0.0000, 180.0000);
	CreateDynamicObject(2605, 2324.765381, -1273.118652, 21.898438, 0.0000, 0.0000, 0.0000);
	CreateDynamicObject(2913, 2348.81, -1247.2, 22.5, 90.0000, 0.0000, 90.0000);
	CreateDynamicObject(2629, 2349.28, -1247.68, 21.5, 0.0000, 0.0000, 0.0000);


	//GAS STATION PUMPS
	//LV
	CreateDynamicObject(3465, 67, 1217.0999755859, 19.5, 0, 0, 344);
	CreateDynamicObject(3465, 68, 1220.8000488281, 19.5, 0, 0, 343.99841308594);
	CreateDynamicObject(3465, 73.800003051758, 1219.3000488281, 19.5, 0, 0, 343.99841308594);
	CreateDynamicObject(3465, 72.800003051758, 1215.5, 19.5, 0, 0, 343.99841308594);
	//LV 2
	CreateDynamicObject(3465, 603.5, 1707.3000488281, 7.5, 0, 0, 306);
	CreateDynamicObject(3465, 606.90002441406, 1702.1999511719, 7.5, 0, 0, 305.99670410156);
	CreateDynamicObject(3465, 610.29998779297, 1697.1999511719, 7.5, 0, 0, 305.99670410156);
	CreateDynamicObject(3465, 613.70001220703, 1692.1999511719, 7.5, 0, 0, 305.99670410156);
	CreateDynamicObject(3465, 617.09997558594, 1687.4000244141, 7.5, 0, 0, 305.99670410156);
	CreateDynamicObject(3465, 620.5, 1682.4000244141, 7.5, 0, 0, 305.99670410156);
	CreateDynamicObject(3465, 624.09997558594, 1677.5999755859, 7.5, 0, 0, 305.99670410156);
	//LV 3
	CreateDynamicObject(3465, 2196.8000488281, 2470.1999511719, 11.300000190735, 0, 0, 0);
	CreateDynamicObject(3465, 2196.8000488281, 2474.6999511719, 11.300000190735, 0, 0, 0);
	CreateDynamicObject(3465, 2196.8000488281, 2480.3000488281, 11.300000190735, 0, 0, 0);
	CreateDynamicObject(3465, 2207.6000976563, 2480.3000488281, 11.300000190735, 0, 0, 0);
	CreateDynamicObject(3465, 2207.6000976563, 2474.6999511719, 11.300000190735, 0, 0, 0);
	CreateDynamicObject(3465, 2207.6000976563, 2470.1999511719, 11.300000190735, 0, 0, 0);
	//COUNTRY
	CreateDynamicObject(3465, -2246.6000976563, -2559.8000488281, 32.400001525879, 0, 0, 331.5);
	CreateDynamicObject(3465, -2241.6999511719, -2562.3000488281, 32.400001525879, 0, 0, 331.49597167969);
	//SF 1
	CreateDynamicObject(3465, -1665.5999755859, 416.89999389648, 7.6999998092651, 0, 0, 318);
	CreateDynamicObject(3465, -1672.1999511719, 423.5, 7.6999998092651, 0, 0, 317.99926757813);
	CreateDynamicObject(3465, -1676.5999755859, 419.10000610352, 7.6999998092651, 0, 0, 317.99926757813);
	CreateDynamicObject(3465, -1681.8000488281, 413.79998779297, 7.6999998092651, 0, 0, 317.99926757813);
	CreateDynamicObject(3465, -1679.4000244141, 403.10000610352, 7.6999998092651, 0, 0, 317.99926757813);
	CreateDynamicObject(3465, -1675.3000488281, 407.20001220703, 7.6999998092651, 0, 0, 317.99926757813);
	CreateDynamicObject(3465, -1669.9000244141, 412.5, 7.6999998092651, 0, 0, 317.99926757813);
	//SF 2
	CreateDynamicObject(3465, -2410.8999023438, 970.79998779297, 45.799999237061, 0, 0, 0);
	CreateDynamicObject(3465, -2410.8000488281, 976.20001220703, 45.799999237061, 0, 0, 0);
	CreateDynamicObject(3465, -2410.8000488281, 981.5, 45.799999237061, 0, 0, 0);
	CreateDynamicObject(3465, -2026.5, 155.80000305176, 29.39999961853, 0, 0, 0);
	CreateDynamicObject(3465, -2026.5, 157.69999694824, 29.39999961853, 0, 0, 0);
	//LS EXIT
	CreateDynamicObject(3465, -1610.5999755859, -2721, 49.299999237061, 0, 0, 53);
	CreateDynamicObject(3465, -1607.3000488281, -2716.6999511719, 49.299999237061, 0, 0, 52.998046875);
	CreateDynamicObject(3465, -1604, -2712.1999511719, 49.299999237061, 0, 0, 52.998046875);
	CreateDynamicObject(3465, -1600.6999511719, -2707.8000488281, 49.299999237061, 0, 0, 52.998046875);
	//LV
	CreateDynamicObject(3465, -1329.2031, 2669.2813, 50.7031, 0, 0, 85);
	CreateDynamicObject(3465, -1328.5859, 2674.7109, 50.7031, 0, 0, 85);
	CreateDynamicObject(3465, -1327.7969, 2680.1250, 50.7031, 0, 0, 85);
	CreateDynamicObject(3465, -1327.0313, 2685.5938, 50.7031, 0, 0, 85);
	//LS
	CreateDynamicObject(3465, 998.09997558594, -937.70001220703, 42.599998474121, 0, 0, 277);
	CreateDynamicObject(3465, 1002.700012207, -937, 42.599998474121, 0, 0, 277);
	CreateDynamicObject(3465, 1005.200012207, -936.59997558594, 42.599998474121, 0, 0, 277);
	CreateDynamicObject(3465, 1009.5999755859, -936, 42.599998474121, 0, 0, 277);

	//PD Maps (Joe Slice)
	CreateDynamicObject(1723, 243.05553, 68.85237, 1002.63922,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1724, 243.71864, 71.82867, 1002.63922,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2240, 243.08873, 71.84602, 1003.15015,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2725, 243.15143, 68.06969, 1002.79932,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2855, 243.13240, 68.07620, 1003.21362,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19172, 244.89056, 80.19598, 1004.61951,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19174, 247.90002, 82.92144, 1004.61951,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1723, 222.87094, 75.37246, 1004.02582,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2195, 222.88470, 78.33620, 1004.62653,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2370, 225.18690, 79.70038, 1003.84039,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2852, 225.29060, 80.18150, 1004.68488,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2853, 225.36349, 79.55802, 1004.68488,   0.00000, 0.00000, 84.00000);
	CreateDynamicObject(3077, 215.60867, 81.82822, 1004.00928,   0.00000, 0.00000, 25.00000);
	CreateDynamicObject(2206, 219.79300, 81.29410, 1003.86200,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(2206, 221.76160, 81.30110, 1003.84198,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(2747, 221.05865, 77.91767, 1004.38928,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1721, 221.43469, 76.64608, 1004.03973,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1721, 220.60721, 76.62796, 1004.03973,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2747, 220.95447, 75.76456, 1004.38928,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1721, 221.41257, 74.53083, 1004.03973,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1721, 220.57257, 74.54766, 1004.03973,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2747, 218.51231, 77.93063, 1004.38928,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1721, 218.90683, 76.57875, 1004.03973,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1721, 218.06702, 76.60409, 1004.03973,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2747, 218.23959, 75.73772, 1004.38928,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1721, 217.87865, 74.57188, 1004.03973,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1721, 218.77808, 74.53516, 1004.03973,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2747, 215.62619, 78.36932, 1004.38928,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1721, 216.04938, 76.90595, 1004.03973,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1721, 215.10954, 76.95622, 1004.03973,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2747, 215.67235, 76.20782, 1004.38928,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1721, 215.04372, 74.91934, 1004.03973,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1721, 215.93369, 74.96989, 1004.03973,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1742, 214.91696, 73.71457, 1004.01318,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1742, 216.32846, 73.72356, 1004.01318,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(2700, 220.24719, 82.64326, 1006.08270,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(2700, 219.64682, 82.64832, 1006.08270,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(2700, 219.06700, 82.63393, 1006.08270,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(2700, 218.48666, 82.63952, 1006.08270,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(2737, 213.96001, 78.32190, 1005.67670,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2612, 221.85153, 77.78873, 1005.66589,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(19171, 218.09952, 73.82301, 1006.13177,   90.00000, 90.00000, 90.00000);
	//A51
	CreateDynamicObject(3095, 268.36920, 1884.28467, 15.99752,   0.00000, 0.00000, 0.00000); //area51 block
	//NEWS OUTSIDE
	CreateDynamicObject(7488, 762.11, -1384.94, -24.42,   0.00, -90.00, -90.00);
	CreateDynamicObject(7488, 761.99, -1371.18, -24.41,   0.00, -90.00, -90.00);
	CreateDynamicObject(16501, 778.37, -1384.92, 14.54,   0.00, 0.00, 90.00);
	CreateDynamicObject(16501, 771.28, -1384.92, 14.54,   0.00, 0.00, 90.00);
	CreateDynamicObject(16501, 759.75, -1362.46, 13.60,   0.00, 0.00, 0.00);
	CreateDynamicObject(16501, 759.75, -1362.46, 18.01,   0.00, 0.00, 0.00);
	CreateDynamicObject(16501, 759.75, -1362.46, 22.42,   0.00, 0.00, 0.00);
	CreateDynamicObject(16501, 757.27, -1356.47, 13.60,   0.00, 0.00, 45.00);
	CreateDynamicObject(16501, 759.74, -1357.44, 22.42,   0.00, 0.00, 0.00);
	CreateDynamicObject(16501, 756.30, -1353.97, 22.42,   0.00, 0.00, 90.00);
	CreateDynamicObject(8661, 739.80, -1363.91, 15.83,   0.00, 180.00, 0.00);
	CreateDynamicObject(16501, 751.28, -1353.98, 13.60,   0.00, 0.00, 90.00);
	CreateDynamicObject(16501, 751.28, -1353.98, 18.01,   0.00, 0.00, 90.00);
	CreateDynamicObject(16501, 751.29, -1353.98, 22.42,   0.00, 0.00, 90.00);
	CreateDynamicObject(16501, 744.19, -1353.98, 13.60,   0.00, 0.00, 90.00);
	CreateDynamicObject(16501, 744.19, -1353.98, 18.01,   0.00, 0.00, 90.00);
	CreateDynamicObject(16501, 744.19, -1353.98, 22.42,   0.00, 0.00, 90.00);
	CreateDynamicObject(16501, 737.11, -1353.98, 13.60,   0.00, 0.00, 90.00);
	CreateDynamicObject(16501, 737.11, -1353.98, 18.01,   0.00, 0.00, 90.00);
	CreateDynamicObject(16501, 737.11, -1353.98, 22.42,   0.00, 0.00, 90.00);
	CreateDynamicObject(16501, 737.07, -1351.74, 13.60,   0.00, 0.00, 45.00);
	CreateDynamicObject(16501, 737.07, -1351.74, 18.01,   0.00, 0.00, 45.00);
	CreateDynamicObject(16501, 737.07, 22.42, 18.01,   0.00, 0.00, 45.00);
	CreateDynamicObject(16501, 737.07, -1351.74, 22.42,   0.00, 0.00, 45.00);
	CreateDynamicObject(16501, 734.64, -1347.24, 13.60,   0.00, 0.00, 0.00);
	CreateDynamicObject(16501, 734.64, -1347.24, 18.01,   0.00, 0.00, 0.00);
	CreateDynamicObject(16501, 734.64, -1347.24, 22.42,   0.00, 0.00, 0.00);
	CreateDynamicObject(16501, 734.64, -1340.20, 13.60,   0.00, 0.00, 0.00);
	CreateDynamicObject(16501, 734.64, -1340.20, 18.01,   0.00, 0.00, 0.00);
	CreateDynamicObject(16501, 734.64, -1340.20, 22.42,   0.00, 0.00, 0.00);
	CreateDynamicObject(16501, 734.64, -1333.13, 13.60,   0.00, 0.00, 0.00);
	CreateDynamicObject(16501, 734.64, -1333.13, 18.01,   0.00, 0.00, 0.00);
	CreateDynamicObject(16501, 734.64, -1333.13, 22.42,   0.00, 0.00, 0.00);
	CreateDynamicObject(16501, 732.56, -1329.67, 21.07,   90.00, 0.00, 90.00);
	CreateDynamicObject(16501, 732.52, -1329.68, 14.11,   90.00, 0.00, 90.00);
	CreateDynamicObject(16501, 759.75, -1369.56, 13.60,   0.00, 0.00, 0.00);
	CreateDynamicObject(16501, 759.75, -1369.56, 18.01,   0.00, 0.00, 0.00);
	CreateDynamicObject(16501, 759.75, -1369.56, 22.42,   0.00, 0.00, 0.00);
	CreateDynamicObject(16501, 759.75, -1376.66, 13.60,   0.00, 0.00, 0.00);
	CreateDynamicObject(16501, 759.75, -1376.66, 18.01,   0.00, 0.00, 0.00);
	CreateDynamicObject(16501, 759.75, -1369.56, 18.01,   0.00, 0.00, 0.00);
	CreateDynamicObject(16501, 759.75, -1376.66, 22.42,   0.00, 0.00, 0.00);
	CreateDynamicObject(16501, 759.75, -1381.41, 13.60,   0.00, 0.00, 0.00);
	CreateDynamicObject(16501, 759.75, -1381.41, 18.01,   0.00, 0.00, 0.00);
	CreateDynamicObject(16501, 759.75, -1381.41, 22.42,   0.00, 0.00, 0.00);
	CreateDynamicObject(16501, 756.31, -1384.88, 22.42,   0.00, 0.00, 90.00);
	CreateDynamicObject(16501, 756.31, -1384.88, 18.01,   0.00, 0.00, 90.00);
	CreateDynamicObject(3660, 735.18, -1339.73, 14.78,   0.00, 0.00, 90.00);
	CreateDynamicObject(3660, 740.72, -1354.58, 14.78,   0.00, 0.00, -45.00);
	CreateDynamicObject(3660, 745.05, -1352.69, 14.78,   0.00, 0.00, 0.00);
	CreateDynamicObject(1569, 756.29, -1355.27, 12.98,   0.00, 0.00, -45.00);
	CreateDynamicObject(1569, 758.39, -1357.41, 12.98,   0.00, 0.00, -225.00);
	CreateDynamicObject(16501, 759.74, -1357.44, 18.01,   0.00, 0.00, 0.00);
	CreateDynamicObject(16501, 756.30, -1353.97, 18.01,   0.00, 0.00, 90.00);
	CreateDynamicObject(3851, 734.75, -1335.45, 21.96,   0.00, 0.00, 0.00);
	CreateDynamicObject(3851, 734.75, -1346.73, 21.96,   0.00, 0.00, 0.00);
	CreateDynamicObject(3851, 737.82, -1352.26, 21.96,   0.00, 0.00, 45.00);
	CreateDynamicObject(3851, 742.97, -1353.83, 21.96,   0.00, 0.00, 90.00);
	CreateDynamicObject(3851, 754.23, -1353.83, 21.96,   0.00, 0.00, 90.00);
	CreateDynamicObject(3851, 759.91, -1359.52, 21.96,   0.00, 0.00, 0.00);
	CreateDynamicObject(3851, 759.91, -1370.82, 21.96,   0.00, 0.00, 0.00);
	CreateDynamicObject(3851, 759.88, -1379.29, 21.96,   0.00, 0.00, 0.00);
	CreateDynamicObject(3660, 760.47, -1375.15, 14.78,   0.00, 0.00, 90.00);
	CreateDynamicObject(736, 751.75, -1352.83, 24.49,   0.00, 0.00, 0.00);
	CreateDynamicObject(736, 740.54, -1352.83, 24.49,   0.00, 0.00, 0.00);
	CreateDynamicObject(736, 735.37, -1345.58, 24.49,   0.00, 0.00, 0.00);
	CreateDynamicObject(736, 735.10, -1334.35, 24.49,   0.00, 0.00, 0.00);
	CreateDynamicObject(3660, 785.74, -1374.75, 14.78,   0.00, 0.00, 90.00);
	CreateDynamicObject(3660, 785.74, -1355.11, 14.78,   0.00, 0.00, 90.00);
	CreateDynamicObject(8168, 784.40, -1334.29, 14.38,   0.00, 0.00, -74.00);
	CreateDynamicObject(3851, 734.75, -1335.45, 16.46,   0.00, 0.00, 0.00);
	CreateDynamicObject(3851, 734.75, -1346.73, 16.46,   0.00, 0.00, 0.00);
	CreateDynamicObject(3851, 737.82, -1352.26, 16.46,   0.00, 0.00, 45.00);
	CreateDynamicObject(3851, 742.97, -1353.83, 16.46,   0.00, 0.00, 90.00);
	CreateDynamicObject(3851, 759.91, -1370.82, 16.46,   0.00, 0.00, 0.00);
	CreateDynamicObject(3851, 759.88, -1379.29, 16.46,   0.00, 0.00, 0.00);
	CreateDynamicObject(736, 785.50, -1352.47, 24.49,   0.00, 0.00, 0.00);
	CreateDynamicObject(736, 785.39, -1366.38, 24.49,   0.00, 0.00, 0.00);
	CreateDynamicObject(736, 785.70, -1380.24, 24.49,   0.00, 0.00, 0.00);
	CreateDynamicObject(736, 760.36, -1380.24, 24.49,   0.00, 0.00, 0.00);
	CreateDynamicObject(736, 760.54, -1366.38, 24.49,   0.00, 0.00, 0.00);
	CreateDynamicObject(970, 784.93, -1382.48, 13.51,   0.00, 0.00, 90.00);
	CreateDynamicObject(970, 784.93, -1378.27, 13.51,   0.00, 0.00, 90.00);
	CreateDynamicObject(970, 784.93, -1374.08, 13.51,   0.00, 0.00, 90.00);
	CreateDynamicObject(970, 784.93, -1369.87, 13.51,   0.00, 0.00, 90.00);
	CreateDynamicObject(970, 784.93, -1365.69, 13.51,   0.00, 0.00, 90.00);
	CreateDynamicObject(970, 784.93, -1361.50, 13.51,   0.00, 0.00, 90.00);
	CreateDynamicObject(970, 784.94, -1357.32, 13.51,   0.00, 0.00, 90.00);
	CreateDynamicObject(3657, 784.45, -1376.77, 13.36,   0.00, 0.00, -90.00);
	CreateDynamicObject(3657, 784.40, -1368.72, 13.36,   0.00, 0.00, -90.00);
	CreateDynamicObject(3657, 784.32, -1359.71, 13.36,   0.00, 0.00, -90.00);
	CreateDynamicObject(970, 761.84, -1382.36, 13.51,   0.00, 0.00, 90.00);
	CreateDynamicObject(970, 761.84, -1378.16, 13.51,   0.00, 0.00, 90.00);
	CreateDynamicObject(970, 761.82, -1373.95, 13.51,   0.00, 0.00, 90.00);
	CreateDynamicObject(970, 761.81, -1369.73, 13.51,   0.00, 0.00, 90.00);
	CreateDynamicObject(3657, 762.28, -1376.77, 13.36,   0.00, 0.00, 90.00);
	CreateDynamicObject(3657, 762.28, -1368.72, 13.36,   0.00, 0.00, 90.00);
	CreateDynamicObject(1231, 762.20, -1373.03, 15.67,   0.00, 0.00, 90.00);
	CreateDynamicObject(1231, 784.46, -1373.03, 15.67,   0.00, 0.00, 90.00);
	CreateDynamicObject(3522, 774.92, -1370.92, 12.96,   0.00, 0.00, 0.00);
	CreateDynamicObject(3522, 770.50, -1370.83, 12.96,   0.00, 0.00, 180.00);
	CreateDynamicObject(3522, 772.75, -1368.76, 12.96,   0.00, 0.00, 90.00);
	CreateDynamicObject(3522, 772.73, -1372.96, 12.96,   0.00, 0.00, -90.00);
	CreateDynamicObject(758, 773.90, -1370.57, 12.17,   0.00, 0.00, 0.00);
	CreateDynamicObject(758, 772.19, -1371.74, 12.17,   0.00, 0.00, -40.00);
	CreateDynamicObject(9833, 772.14, -1371.98, 16.08,   0.00, 0.00, 25.00);
	CreateDynamicObject(1215, 770.26, -1368.54, 13.51,   0.00, 0.00, 0.00);
	CreateDynamicObject(1215, 774.99, -1368.56, 13.51,   0.00, 0.00, 0.00);
	CreateDynamicObject(1215, 774.91, -1373.33, 13.51,   0.00, 0.00, 0.00);
	CreateDynamicObject(1215, 770.40, -1373.21, 13.51,   0.00, 0.00, 0.00);
	CreateDynamicObject(14387, 773.53, -1350.68, 11.99,   0.00, 0.00, 90.00);
	CreateDynamicObject(970, 784.93, -1354.10, 13.51,   0.00, 0.00, 90.00);
	CreateDynamicObject(970, 782.83, -1352.02, 13.51,   0.00, 0.00, 0.00);
	CreateDynamicObject(970, 778.63, -1352.01, 13.51,   0.00, 0.00, 0.00);
	CreateDynamicObject(1232, 776.32, -1352.24, 15.55,   0.00, 0.00, 40.00);
	CreateDynamicObject(14387, 768.90, -1350.68, 11.99,   0.00, 0.00, 90.00);
	CreateDynamicObject(970, 763.76, -1352.04, 13.51,   0.00, 0.00, 0.00);
	CreateDynamicObject(1232, 766.12, -1352.26, 15.55,   0.00, 0.00, 0.00);
	CreateDynamicObject(970, 759.52, -1352.06, 13.51,   0.00, 0.00, 0.00);
	CreateDynamicObject(970, 756.99, -1352.06, 13.51,   0.00, 0.00, 0.00);
	CreateDynamicObject(8661, 739.76, -1374.89, 24.62,   0.00, 0.00, 0.00);
	CreateDynamicObject(8661, 739.75, -1364.00, 24.61,   0.00, 0.00, 0.00);
	CreateDynamicObject(8661, 724.76, -1349.74, 24.62,   0.00, 0.00, 90.00);
	CreateDynamicObject(16501, 737.07, -1351.74, 26.80,   0.00, 0.00, 45.00);
	CreateDynamicObject(16501, 732.17, -1356.64, 26.80,   0.00, 0.00, 45.00);
	CreateDynamicObject(16501, 737.07, -1356.64, 26.80,   0.00, 0.00, 135.00);
	CreateDynamicObject(16501, 732.20, -1351.75, 26.80,   0.00, 0.00, 135.00);
	CreateDynamicObject(16501, 733.71, -1353.27, 28.92,   0.00, 90.00, 135.00);
	CreateDynamicObject(16501, 735.58, -1355.13, 28.92,   0.00, 90.00, 135.00);
	CreateDynamicObject(1596, 735.79, -1351.99, 31.49,   0.00, 0.00, 135.00);
	CreateDynamicObject(3934, 741.46, -1371.88, 24.68,   0.00, 0.00, 0.00);
	CreateDynamicObject(970, 754.92, -1354.19, 13.51,   0.00, 0.00, 90.00);
	CreateDynamicObject(16501, 734.56, -1362.59, 26.80,   0.00, 0.00, 0.00);
	CreateDynamicObject(16501, 730.19, -1357.69, 26.80,   0.00, 0.00, 0.00);
	CreateDynamicObject(16501, 730.19, -1362.59, 26.80,   0.00, 0.00, 0.00);
	CreateDynamicObject(16501, 732.39, -1366.08, 25.44,   90.00, 0.00, 90.00);
	CreateDynamicObject(16501, 732.42, -1362.52, 28.90,   0.00, 90.00, 0.00);
	CreateDynamicObject(16501, 732.43, -1357.94, 28.87,   0.00, 90.00, 0.00);
	CreateDynamicObject(1569, 734.71, -1363.21, 24.63,   0.00, 0.00, 90.00);
	//SAN NEWS INTERIOR BY WILLIAM, EDIT BY JAMES
	CreateDynamicObject(14858, 1223.01, -759.22, 1129.39,   0.00, 0.00, 0.00);
	CreateDynamicObject(14819, 1206.06, -776.68, 1125.38,   0.00, 0.00, 90.18);
	CreateDynamicObject(14819, 1206.33, -776.72, 1125.38,   0.00, 0.00, 270.00);
	CreateDynamicObject(17566, 1206.24, -776.68, 1125.48,   0.00, 0.00, 0.00);
	CreateDynamicObject(14819, 1209.48, -757.91, 1125.38,   0.00, 0.00, 0.00);
	CreateDynamicObject(14819, 1209.44, -758.20, 1125.38,   0.00, 0.00, 180.00);
	CreateDynamicObject(17566, 1209.34, -758.04, 1125.27,   0.00, 0.00, 90.00);
	CreateDynamicObject(2165, 1199.56, -777.71, 1124.24,   0.00, 0.00, 180.00);
	CreateDynamicObject(19174, 1199.19, -775.50, 1126.45,   0.00, 0.00, 0.00);
	CreateDynamicObject(1671, 1198.87, -776.70, 1124.67,   0.00, 0.00, 0.00);
	CreateDynamicObject(1808, 1196.77, -783.19, 1124.24,   0.00, 0.00, 90.00);
	CreateDynamicObject(2164, 1196.58, -780.10, 1124.24,   0.00, 0.00, 90.00);
	CreateDynamicObject(2161, 1201.53, -780.87, 1126.07,   0.00, 0.00, 270.00);
	CreateDynamicObject(2001, 1197.18, -776.02, 1124.24,   0.00, 0.00, 0.00);
	CreateDynamicObject(2011, 1201.04, -775.98, 1124.24,   0.00, 0.00, 0.00);
	CreateDynamicObject(1722, 1199.14, -779.18, 1124.23,   0.00, 0.00, 0.00);
	CreateDynamicObject(2008, 1194.33, -777.59, 1124.25,   0.00, 0.00, 180.00);
	CreateDynamicObject(19172, 1193.91, -775.51, 1126.57,   0.00, 0.00, 0.00);
	CreateDynamicObject(1671, 1193.85, -776.77, 1124.69,   0.00, 0.00, 0.00);
	CreateDynamicObject(2608, 1191.52, -780.76, 1126.23,   0.00, 0.00, 90.00);
	CreateDynamicObject(2164, 1196.25, -780.84, 1124.25,   0.00, 0.00, 270.00);
	CreateDynamicObject(2001, 1191.79, -775.97, 1124.24,   0.00, 0.00, 0.00);
	CreateDynamicObject(2001, 1195.98, -775.89, 1124.24,   0.00, 0.00, 0.00);
	CreateDynamicObject(1722, 1194.44, -779.10, 1124.23,   0.00, 0.00, 0.00);
	CreateDynamicObject(1722, 1193.18, -779.08, 1124.23,   0.00, 0.00, 0.00);
	CreateDynamicObject(2009, 1188.39, -778.36, 1124.24,   0.00, 0.00, 90.00);
	CreateDynamicObject(2007, 1190.51, -782.50, 1124.25,   0.00, 0.00, 270.00);
	CreateDynamicObject(2007, 1190.51, -781.51, 1124.25,   0.00, 0.00, 270.00);
	CreateDynamicObject(2167, 1186.04, -781.57, 1124.24,   0.00, 0.00, 90.00);
	CreateDynamicObject(1808, 1186.24, -780.81, 1124.25,   0.00, 0.00, 90.00);
	CreateDynamicObject(1671, 1188.57, -777.25, 1124.75,   0.00, 0.00, 0.00);
	CreateDynamicObject(1722, 1187.70, -779.78, 1124.25,   0.00, 0.00, 0.00);
	CreateDynamicObject(1722, 1189.04, -779.76, 1124.25,   0.00, 0.00, 0.00);
	CreateDynamicObject(2108, 1185.68, -783.76, 1124.24,   0.00, 0.00, 0.00);
	CreateDynamicObject(2010, 1190.51, -775.95, 1124.24,   0.00, 0.00, 0.00);
	CreateDynamicObject(2010, 1186.55, -775.84, 1124.24,   0.00, 0.00, 0.00);
	CreateDynamicObject(1518, 1188.40, -759.41, 1126.36,   0.00, 0.00, 90.00);
	CreateDynamicObject(1518, 1188.40, -758.18, 1126.36,   0.00, 0.00, 90.00);
	CreateDynamicObject(18608, 1190.74, -759.26, 1128.63,   0.00, 0.00, 0.00);
	CreateDynamicObject(18608, 1198.84, -759.27, 1128.63,   0.00, 0.00, 0.00);
	CreateDynamicObject(2173, 1192.07, -764.98, 1124.24,   0.00, 0.00, 40.00);
	CreateDynamicObject(2173, 1194.21, -762.53, 1124.24,   0.00, 0.00, 70.00);
	CreateDynamicObject(2173, 1195.22, -759.76, 1124.24,   0.00, 0.00, 90.00);
	CreateDynamicObject(2173, 1195.01, -756.49, 1124.24,   0.00, 0.00, 110.00);
	CreateDynamicObject(2173, 1193.42, -753.69, 1124.24,   0.00, 0.00, 130.00);
	CreateDynamicObject(3864, 1189.24, -751.24, 1121.79,   0.00, 0.00, 90.00);
	CreateDynamicObject(3864, 1189.42, -767.14, 1121.88,   0.00, 0.00, 270.00);
	CreateDynamicObject(2207, 1189.87, -759.88, 1124.24,   0.00, 0.00, 0.00);
	CreateDynamicObject(2207, 1191.73, -757.96, 1124.24,   0.00, 0.00, 180.00);
	CreateDynamicObject(1663, 1190.91, -757.05, 1124.70,   0.00, 0.00, 0.00);
	CreateDynamicObject(1808, 1194.71, -767.33, 1124.24,   0.00, 0.00, 180.00);
	CreateDynamicObject(1808, 1194.65, -751.11, 1124.24,   0.00, 0.00, 0.00);
	CreateDynamicObject(1663, 1189.05, -757.60, 1124.70,   0.00, 0.00, 46.06);
	CreateDynamicObject(1663, 1189.30, -760.04, 1124.70,   0.00, 0.00, 121.00);
	CreateDynamicObject(1663, 1191.16, -760.82, 1124.70,   0.00, 0.00, 180.00);
	CreateDynamicObject(2001, 1188.21, -767.04, 1124.24,   0.00, 0.00, 0.00);
	CreateDynamicObject(2001, 1188.30, -763.66, 1124.24,   0.00, 0.00, 0.00);
	CreateDynamicObject(2001, 1188.27, -751.55, 1124.24,   0.00, 0.00, 0.00);
	CreateDynamicObject(2001, 1188.32, -754.72, 1124.24,   0.00, 0.00, 0.00);
	CreateDynamicObject(1518, 1188.40, -758.80, 1126.36,   0.00, 0.00, 90.00);
	CreateDynamicObject(1518, 1188.38, -758.18, 1126.86,   0.00, 0.00, 90.00);
	CreateDynamicObject(1518, 1188.40, -758.80, 1126.86,   0.00, 0.00, 90.00);
	CreateDynamicObject(1518, 1188.40, -759.41, 1126.86,   0.00, 0.00, 90.00);
	CreateDynamicObject(2190, 1192.00, -764.63, 1125.04,   0.00, 0.00, 45.00);
	CreateDynamicObject(2190, 1193.95, -762.28, 1125.02,   0.00, 0.00, 70.00);
	CreateDynamicObject(2190, 1194.91, -759.65, 1125.04,   0.00, 0.00, 90.00);
	CreateDynamicObject(2190, 1194.66, -756.45, 1125.04,   0.00, 0.00, 110.00);
	CreateDynamicObject(2190, 1193.09, -753.80, 1125.04,   0.00, 0.00, 130.00);
	CreateDynamicObject(1663, 1193.68, -752.80, 1124.70,   0.00, 0.00, 321.09);
	CreateDynamicObject(1663, 1195.54, -755.80, 1124.70,   0.00, 0.00, 287.04);
	CreateDynamicObject(1663, 1196.03, -759.34, 1124.70,   0.00, 0.00, 266.86);
	CreateDynamicObject(1663, 1195.14, -762.37, 1124.70,   0.00, 0.00, 246.99);
	CreateDynamicObject(1663, 1192.77, -765.38, 1124.70,   0.00, 0.00, 205.85);
	CreateDynamicObject(1518, 1188.39, -757.57, 1126.36,   0.00, 0.00, 90.00);
	CreateDynamicObject(1518, 1188.39, -757.57, 1126.86,   0.00, 0.00, 90.00);
	CreateDynamicObject(1518, 1188.40, -760.01, 1126.36,   0.00, 0.00, 90.00);
	CreateDynamicObject(1518, 1188.40, -760.01, 1126.86,   0.00, 0.00, 90.00);
	CreateDynamicObject(14407, 1198.65, -765.65, 1121.59,   0.00, 0.00, 90.00);
	CreateDynamicObject(14407, 1198.66, -752.77, 1121.58,   0.00, 0.00, 90.00);
	CreateDynamicObject(1698, 1199.77, -756.25, 1124.44,   0.00, 0.00, 0.00);
	CreateDynamicObject(1698, 1198.40, -759.55, 1124.24,   0.00, 0.00, 0.00);
	CreateDynamicObject(1698, 1198.41, -762.86, 1124.24,   0.00, 0.00, 0.00);
	CreateDynamicObject(3657, 1198.46, -761.41, 1124.86,   0.00, 0.00, 270.00);
	CreateDynamicObject(3657, 1198.41, -757.44, 1124.86,   0.00, 0.00, 270.00);
	CreateDynamicObject(1698, 1198.41, -756.24, 1124.24,   0.00, 0.00, 0.00);
	CreateDynamicObject(1698, 1199.76, -759.55, 1124.44,   0.00, 0.00, 0.00);
	CreateDynamicObject(1698, 1199.75, -762.85, 1124.44,   0.00, 0.00, 0.00);
	CreateDynamicObject(3657, 1199.68, -761.45, 1125.17,   0.00, 0.00, 270.00);
	CreateDynamicObject(3657, 1199.67, -757.59, 1125.17,   0.00, 0.00, 270.00);
	CreateDynamicObject(1698, 1199.77, -756.25, 1124.44,   0.00, 0.00, 0.00);
	CreateDynamicObject(1698, 1201.11, -756.25, 1124.68,   0.00, 0.00, 0.00);
	CreateDynamicObject(1698, 1201.11, -759.56, 1124.68,   0.00, 0.00, 0.00);
	CreateDynamicObject(1698, 1201.11, -762.84, 1124.68,   0.00, 0.00, 0.00);
	CreateDynamicObject(3657, 1201.29, -761.52, 1125.17,   0.00, 0.00, 270.00);
	CreateDynamicObject(3657, 1201.32, -757.65, 1125.17,   0.00, 0.00, 270.00);
	CreateDynamicObject(2239, 1201.28, -751.39, 1124.76,   0.00, 0.00, 0.00);
	CreateDynamicObject(2239, 1201.38, -767.27, 1124.77,   0.00, 0.00, 0.00);
	CreateDynamicObject(19279, 1196.20, -762.25, 1127.84,   0.00, 180.00, 85.68);
	CreateDynamicObject(19279, 1196.32, -756.90, 1127.84,   0.00, 180.00, 85.96);
	CreateDynamicObject(2239, 1209.56, -743.35, 1124.24,   0.00, 0.00, 0.00);
	CreateDynamicObject(1723, 1206.65, -743.29, 1124.24,   0.00, 0.00, 0.00);
	CreateDynamicObject(1723, 1203.74, -743.29, 1124.24,   0.00, 0.00, 0.00);
	CreateDynamicObject(1723, 1209.57, -744.30, 1124.24,   0.00, 0.00, 270.00);
	CreateDynamicObject(1827, 1207.48, -745.61, 1124.24,   0.00, 0.00, 0.00);
	CreateDynamicObject(1827, 1204.62, -745.60, 1124.25,   0.00, 0.00, 0.00);
	CreateDynamicObject(2001, 1203.09, -743.28, 1124.24,   0.00, 0.00, 0.00);
	CreateDynamicObject(2204, 1210.03, -747.94, 1124.24,   0.00, 0.00, 270.00);
	CreateDynamicObject(1808, 1206.44, -750.55, 1124.24,   0.00, 0.00, 180.00);
	CreateDynamicObject(2596, 1207.62, -750.43, 1126.63,   0.00, 0.00, 180.00);
	CreateDynamicObject(2206, 1188.99, -742.15, 1124.24,   0.00, 0.00, 90.00);
	CreateDynamicObject(2206, 1189.93, -740.29, 1124.24,   0.00, 0.00, 270.00);
	CreateDynamicObject(2206, 1188.99, -744.99, 1124.24,   0.00, 0.00, 90.00);
	CreateDynamicObject(2206, 1189.93, -743.13, 1124.24,   0.00, 0.00, 270.00);
	CreateDynamicObject(1663, 1191.09, -740.58, 1124.71,   0.00, 0.00, 267.54);
	CreateDynamicObject(1663, 1191.11, -741.88, 1124.71,   0.00, 0.00, 267.54);
	CreateDynamicObject(1663, 1191.06, -743.17, 1124.71,   0.00, 0.00, 267.54);
	CreateDynamicObject(1663, 1191.01, -744.35, 1124.71,   0.00, 0.00, 267.54);
	CreateDynamicObject(1663, 1187.78, -740.62, 1124.71,   0.00, 0.00, 90.00);
	CreateDynamicObject(1663, 1187.79, -741.84, 1124.71,   0.00, 0.00, 90.00);
	CreateDynamicObject(1663, 1187.85, -743.22, 1124.71,   0.00, 0.00, 90.00);
	CreateDynamicObject(1663, 1187.86, -744.44, 1124.71,   0.00, 0.00, 90.00);
	CreateDynamicObject(1808, 1191.95, -738.76, 1124.24,   0.00, 0.00, 0.00);
	CreateDynamicObject(2596, 1187.53, -738.96, 1127.07,   0.00, 0.00, 0.00);
	CreateDynamicObject(2172, 1199.38, -740.75, 1124.24,   0.00, 0.00, 90.00);
	CreateDynamicObject(2172, 1199.39, -742.74, 1124.24,   0.00, 0.00, 90.00);
	CreateDynamicObject(2172, 1199.39, -744.70, 1124.24,   0.00, 0.00, 90.00);
	CreateDynamicObject(2001, 1199.31, -738.90, 1124.25,   0.00, 0.00, 0.00);
	CreateDynamicObject(2161, 1200.86, -738.63, 1125.67,   0.00, 0.00, 0.00);
	CreateDynamicObject(1663, 1200.33, -740.20, 1124.71,   0.00, 0.00, 270.00);
	CreateDynamicObject(1663, 1200.24, -742.01, 1124.71,   0.00, 0.00, 270.00);
	CreateDynamicObject(1663, 1200.18, -744.05, 1124.71,   0.00, 0.00, 270.00);
	CreateDynamicObject(19173, 1188.46, -775.52, 1126.55,   0.00, 0.00, 0.00);
	CreateDynamicObject(2010, 1202.03, -746.17, 1124.24,   0.00, 0.00, 0.00);
	CreateDynamicObject(2010, 1191.74, -746.28, 1124.24,   0.00, 0.00, 0.00);
	CreateDynamicObject(2245, 1189.53, -742.61, 1125.46,   0.00, 0.00, 0.00);
	CreateDynamicObject(2252, 1204.63, -745.65, 1124.97,   0.00, 0.00, 0.00);
	CreateDynamicObject(2252, 1207.50, -745.60, 1124.97,   0.00, 0.00, 0.00);
	CreateDynamicObject(14782, 1195.46, -739.01, 1125.18,   0.00, 0.00, 0.31);
	CreateDynamicObject(14782, 1192.81, -743.48, 1125.18,   0.00, 0.00, 90.00);
	CreateDynamicObject(2108, 1198.07, -746.16, 1124.24,   0.00, 0.00, 0.00);
	CreateDynamicObject(17566, 1206.17, -766.31, 1125.48,   0.00, 0.00, 0.00);
	CreateDynamicObject(14819, 1206.31, -766.71, 1125.38,   0.00, 0.00, 270.00);
	CreateDynamicObject(14819, 1206.04, -766.68, 1125.38,   0.00, 0.00, 90.18);
	CreateDynamicObject(18758, 1184.54, -753.17, 1126.10,   0.00, 0.00, 0.00);
	CreateDynamicObject(18756, 1184.42, -753.17, 1126.25,   0.00, 0.00, 0.00);
	CreateDynamicObject(18757, 1184.42, -753.18, 1126.24,   0.00, 0.00, 0.00);
	CreateDynamicObject(1649, 1186.99, -769.79, 1128.01,   0.00, 0.00, 90.00);
	CreateDynamicObject(19450, 1187.04, -768.87, 1123.60,   0.00, 900.00, 0.00);
	CreateDynamicObject(19450, 1187.04, -768.87, 1128.67,   0.00, 0.00, 0.00);
	CreateDynamicObject(3440, 1186.99, -771.48, 1125.89,   0.00, 0.00, 0.00);
	CreateDynamicObject(3440, 1186.99, -767.83, 1125.89,   0.00, 0.00, 0.00);
	CreateDynamicObject(1649, 1186.99, -769.79, 1128.01,   0.00, 0.00, -90.00);
	CreateDynamicObject(2173, 1187.58, -770.19, 1124.24,   0.00, 0.00, 90.00);
	CreateDynamicObject(1671, 1188.24, -769.90, 1124.69,   0.00, 0.00, 236.00);
	CreateDynamicObject(2196, 1187.79, -768.65, 1125.04,   0.00, 0.00, -25.00);
	CreateDynamicObject(1723, 1183.19, -770.40, 1124.24,   0.00, 0.00, 90.00);
	CreateDynamicObject(2001, 1183.23, -771.39, 1124.24,   0.00, 0.00, 0.00);
	CreateDynamicObject(19450, 1178.22, -772.18, 1126.01,   0.00, 0.00, 0.00);
	CreateDynamicObject(1569, 1178.26, -771.05, 1124.25,   0.00, 0.00, 90.00);
	CreateDynamicObject(1569, 1178.27, -768.07, 1124.25,   0.00, 0.00, -90.00);
	CreateDynamicObject(19450, 1177.49, -763.57, 1126.01,   0.00, 0.00, 90.00);
	CreateDynamicObject(3440, 1186.44, -759.69, 1125.89,   0.00, 0.00, 0.00);
	CreateDynamicObject(3440, 1182.90, -759.65, 1125.89,   0.00, 0.00, 0.00);
	CreateDynamicObject(983, 1183.05, -759.65, 1127.46,   0.00, 0.00, 90.00);
	//blueberry pier objects
	CreateDynamicObject(935, 368.45370, -279.91431, 0.03932,   -6.96000, -68.16000, 0.00000);
	CreateDynamicObject(935, 386.68408, -267.87811, 0.03475,   -14.69999, -62.82007, -86.69997);
	CreateDynamicObject(935, 396.90479, -257.41257, 0.03475,   -3.30000, -53.46009, -14.15994);
	CreateDynamicObject(935, 347.33844, -293.87955, 0.08652,   -6.96000, -68.16000, 0.00000);
	CreateDynamicObject(935, 382.81879, -258.79453, 0.79873,   -2.88000, -70.50008, -11.93994);
	CreateDynamicObject(12990, 376.90601, -271.96979, 1.28069,   0.00000, 0.00000, 38.52007, 650); //wharf
	//BOAT OBJECTS
	CreateObject(10230, 466.389252, -2278.126465, 7.263396, 0.0000, 0.0000, 0.0000, 900);
	CreateObject(10231, 465.491425, -2279.642090, 8.710502, 0.0000, 0.0000, 0.0001, 500);
	CreateObject(3565, 514.917969, -2279.834717, 11.456652, 0.0000, 0.0000, 90.0000);
	CreateDynamicObject(10229, 466.145935, -2279.552002, 6.095016, 0.0000, 0.0000, 0.0000);
	CreateDynamicObject(944, 422.262115, -2288.881592, 8.437245, 0.0000, 0.0000, 180.0000);
	CreateDynamicObject(944, 425.626923, -2274.627197, 8.437245, 0.0000, 0.0000, 180.0000);
	CreateDynamicObject(2669, 410.597229, -2279.471680, 8.859987, 0.0000, 0.0000, 90.0000);
	CreateDynamicObject(17055, 425.758057, -2279.559570, 9.886889, 0.0000, 0.0000, 91.7189);
	//AIRPORT OBJECTS
	CreateDynamicObject(1683, 1872.291626, -2283.772705, 18.449501, 0.0000, 0.0000, 0.0000);
	CreateDynamicObject(1681, 1995.646240, -2382.106934, 14.674913, 0.0000, 0.0000, 90.0000);
	//CreateDynamicObject(1681, 1996.920410, -2315.446533, 14.724913, 0.0000, 0.0000, 90.0000);
	CreateDynamicObject(1683, 1728.122070, -2420.928711, 18.457298, 0.0000, 0.0000, 270.0000);
	CreateDynamicObject(1683, 1647.249756, -2420.928711, 18.457314, 0.0000, 0.0000, 270.0000);
	//Inside Maddogs (door blocks)
	CreateDynamicObject(1557, 1280.396, -790.758, 1083.016, 0.00, 0.00, 90.00);
	CreateDynamicObject(1557, 1280.392, -787.728, 1083.017, 0.00, 0.00, 270.00);
	CreateDynamicObject(1557, 1292.376, -782.771, 1083.007, 0.00, 0.00, 90.00);
	CreateDynamicObject(1557, 1292.371, -779.741, 1083.007, 0.00, 0.00, 270.00);
	CreateDynamicObject(1557, 2793.565, -1636.967, 20.366, 1.00, 0.00, 85.00);
	CreateDynamicObject(1557, 2793.820, -1633.957, 20.366, -1.00, 0.00, 265.00);
	//vagos
	CreateDynamicObject(994, 2558.842, -1284.645, 45.212, 0.0, 0.0, 0.0); // Vagos Fence
	CreateDynamicObject(994, 2558.842, -1280.943, 45.212, 0.0, 0.0, 0.0);	// Vagos Fence
	CreateDynamicObject(8613, 2541.610, -1271.575, 55.440, 0.0, 0.0, -90.0); // Vagos Stairs
	CreateDynamicObject(3934, 2556.764, -1270.661, 58.843, 0.0, 0.0, 0.0); // Vagos Helipad
	CreateDynamicObject(3934, 2556.674, -1285.334, 58.843, 0.0, 0.0, 0.0); // Vagos Helipad
	//wayfarer farm
	CreateDynamicObject(994, 2361.136, -1363.397, 23.1, 0.0, 0.0, 90.0);
	CreateDynamicObject(994, 2361.136, -1357.053, 23.1, 0.0, 0.0, 90.0);
	CreateDynamicObject(994, 2361.136, -1369.683, 23.1, 0.0, 0.0, 90.0);
	CreateDynamicObject(994, 2361.136, -1372.756, 23.1, 0.0, 0.0, 90.0);
	CreateDynamicObject(994, 2361.136, -1374.327, 23.1, 0.0, 0.0, 180.0);
	CreateDynamicObject(8674, 2341.262, -1372.312, 24.014, 0.0, 0.0, 0.0);
	CreateDynamicObject(8674, 2330.965, -1372.312, 24.014, 0.0, 0.0, 0.0);
	CreateDynamicObject(8674, 2339.339, -1313.741, 24.069, 0.0, 0.0, 0.0);
	//mad dogs door block
	CreateDynamicObject(1557, 1260.435, -805.8, 1083.006, 0.0, 0.0, 90); //MAD DOG DOOR BLOCK?
	CreateDynamicObject(1557, 1260.435, -802.775, 1083.007, 0.0, 0.0, 270.0); //MAD DOG DOOR BLOCK?
	//door blocks
	CreateDynamicObject(1508, 965.1252, -54.7, 1001.8, 0.0, 0.0, 0.0); // LS Confidential Door Block
	CreateDynamicObject(1569, 965.0, -53.95, 1000.0, 0.0, 0.0, 90.0); // LS Confidential Door Block
	//door blocks
	CreateDynamicObject(1508, 2577.73, -1304.0, 1038.2, 0.0000, 0.0000, 0.0);
	CreateDynamicObject(1508, 2545.8, -1283.39, 53.4, 0.0000, 0.0000, 0.0);
	//fishing store
	CreateDynamicObject(11497, 371.640442, -2077.564453, 6.906926, 0.0000, 0.0000, 0.0000); // Fishing store
	CreateDynamicObject(18045, 364.316498, -2068.405273, 980.796143, 0.0000, 0.0000, 0.0000); // Fishing store
	//CreateDynamicObject(14789, 1424.690308, -1004.066162, 1643.018677, 0.0000, 0.0000, 89.9994); // Bank
	CreateDynamicObject(14672, 2359.598145, -1460.346558, 922.806885, 0.0000, 0.0000, 0.0000); // Tiki store
	CreateDynamicObject(2631, -1269.081177, 76.718849, 990.984192, 0.0000, 0.0000, 269.9993); // Church
	CreateDynamicObject(14412, 1789.184448, -1569.734131, 1645.317383, 0.000000, 0.000000, 0.000000);// Prison fix
	//County General Hospital
	CreateDynamicObject(19449, -207.3999939, -1739.6999512, 676.5000000, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(17038, -205.8994141, -1747.6992188, 668.2999878, 0.0000000, 270.0000000, 0.0000000);
	CreateDynamicObject(17038, -204.3994141, -1747.6992188, 668.2999878, 0.0000000, 270.0000000, 0.0000000);
	CreateDynamicObject(17038, -202.8999939, -1747.6999512, 668.2999878, 0.0000000, 270.0000000, 0.0000000);
	CreateDynamicObject(17038, -201.3994141, -1747.6992188, 668.2999878, 0.0000000, 270.0000000, 0.0000000);
	CreateDynamicObject(19460, -207.3990021, -1739.6999512, 673.2999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(19449, -202.6000061, -1734.8000488, 676.5000000, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(19460, -206.1999969, -1734.8010254, 673.2999878, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(1569, -206.0000000, -1734.9000244, 674.7999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(1569, -203.0000000, -1734.9000244, 674.7999878, 0.0000000, 0.0000000, 180.0000000);
	CreateDynamicObject(19387, -196.6992188, -1744.5000000, 676.5000000, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(19357, -201.3994141, -1736.5000000, 676.5000000, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(19368, -201.4003906, -1736.5000000, 673.2999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(2885, -211.7998047, -1734.7998047, 678.4000244, 270.0000000, 180.0000000, 180.0000000);
	CreateDynamicObject(17038, -199.8994141, -1747.6992188, 668.2999878, 0.0000000, 270.0000000, 0.0000000);
	CreateDynamicObject(17038, -198.3999939, -1747.6999512, 668.2999878, 0.0000000, 270.0000000, 0.0000000);
	CreateDynamicObject(17038, -196.8994141, -1747.6992188, 668.2999878, 0.0000000, 270.0000000, 0.0000000);
	CreateDynamicObject(19449, -196.6000061, -1738.0159912, 676.5000000, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(19460, -196.6719971, -1738.0169678, 673.2999878, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(19449, -195.3994141, -1742.8994141, 676.5000000, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(17038, -195.3994141, -1747.6992188, 668.2999878, 0.0000000, 270.0000000, 0.0000000);
	CreateDynamicObject(19460, -195.4010010, -1742.9000244, 673.2999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(19449, -201.1000061, -1739.6999512, 674.0999756, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(19460, -201.1005859, -1739.6992188, 673.2999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(19357, -199.8837891, -1744.5000000, 676.5000000, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(19460, -191.1503906, -1744.4990234, 673.2999878, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(19460, -191.1503906, -1744.5009766, 673.2999878, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(19368, -199.0749969, -1744.4990234, 673.2999878, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(19368, -199.0749969, -1744.5009766, 673.2999878, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(19368, -199.8849945, -1744.4980469, 673.2999878, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(19460, -201.0989990, -1739.5999756, 673.2999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(19357, -201.3994141, -1746.0996094, 676.5000000, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(19387, -201.3994141, -1749.2998047, 676.5000000, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(19357, -201.3999939, -1752.5000000, 676.5000000, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(19387, -201.3999939, -1755.6999512, 676.5000000, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(19357, -201.3999939, -1758.9000244, 676.5000000, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(17038, -205.8994141, -1768.3994141, 668.2999878, 0.0000000, 270.0000000, 0.0000000);
	CreateDynamicObject(17038, -204.3999939, -1768.4000244, 668.2999878, 0.0000000, 270.0000000, 0.0000000);
	CreateDynamicObject(17038, -202.8999939, -1768.4000244, 668.2999878, 0.0000000, 270.0000000, 0.0000000);
	CreateDynamicObject(17038, -201.3999939, -1768.4000244, 668.2999878, 0.0000000, 270.0000000, 0.0000000);
	CreateDynamicObject(17038, -199.8994141, -1768.3994141, 668.2999878, 0.0000000, 270.0000000, 0.0000000);
	CreateDynamicObject(17038, -198.3994141, -1768.3994141, 668.2999878, 0.0000000, 270.0000000, 0.0000000);
	CreateDynamicObject(17038, -196.8999939, -1768.4000244, 668.2999878, 0.0000000, 270.0000000, 0.0000000);
	CreateDynamicObject(17038, -195.3994141, -1768.3994141, 668.2999878, 0.0000000, 270.0000000, 0.0000000);
	CreateDynamicObject(19368, -201.4019928, -1746.0999756, 673.2999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(19368, -201.4010010, -1746.9250488, 673.2999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(19387, -201.3994141, -1762.0996094, 676.5000000, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(19449, -206.1999969, -1763.6999512, 676.5000000, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(19368, -201.4010010, -1751.6369629, 673.2999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(19368, -201.4019928, -1753.3249512, 673.2999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(19368, -201.4010010, -1758.0369873, 673.2999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(19368, -201.4019928, -1759.7249756, 673.2999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(19368, -201.4010010, -1764.4370117, 673.2999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(19460, -206.3000031, -1763.6989746, 673.2999878, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(19387, -207.3994141, -1746.0996094, 676.5000000, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(19387, -207.3994141, -1758.8994141, 676.5000000, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(19357, -207.3999939, -1762.0999756, 676.5000000, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(19449, -195.3994141, -1752.5000000, 676.5000000, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(19449, -195.3994141, -1762.0996094, 676.5000000, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(19449, -196.5996094, -1758.7998047, 676.5000000, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(19460, -206.0000000, -1733.2998047, 672.5999756, 270.0000000, 179.9945068, 0.0000000);
	CreateDynamicObject(19460, -203.0000000, -1733.3000488, 672.5999756, 270.0000000, 179.9945068, 0.0000000);
	CreateDynamicObject(19441, -203.7140045, -1733.3010254, 677.3980244, 0.0000000, 270.0000000, 90.0000000);
	CreateDynamicObject(19441, -205.2870026, -1733.3010254, 677.3970244, 0.0000000, 270.0000000, 90.0000000);
	CreateDynamicObject(2885, -200.8994141, -1734.7998047, 678.4000244, 270.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(2885, -200.8994141, -1741.5000000, 678.4000244, 270.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(2885, -211.7998047, -1741.5000000, 678.4000244, 270.0000000, 179.9945068, 179.9945068);
	CreateDynamicObject(2885, -211.7998047, -1748.1992188, 678.4000244, 270.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(2885, -200.8999939, -1748.1999512, 678.4000244, 270.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(2885, -200.8994141, -1754.8994141, 678.4000244, 270.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(2885, -200.8994141, -1761.5996094, 678.4000244, 270.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(2885, -211.7998047, -1761.5996094, 678.4000244, 270.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(17038, -207.3994141, -1747.6992188, 668.2999878, 0.0000000, 270.0000000, 0.0000000);
	CreateDynamicObject(17038, -208.8994141, -1747.6992188, 668.2999878, 0.0000000, 270.0000000, 0.0000000);
	CreateDynamicObject(17038, -210.3999939, -1747.6999512, 668.2999878, 0.0000000, 270.0000000, 0.0000000);
	CreateDynamicObject(17038, -211.8999939, -1747.6999512, 668.2999878, 0.0000000, 270.0000000, 0.0000000);
	CreateDynamicObject(17038, -213.3994141, -1747.6992188, 668.2999878, 0.0000000, 270.0000000, 0.0000000);
	CreateDynamicObject(17038, -213.3994141, -1768.3994141, 668.2999878, 0.0000000, 270.0000000, 0.0000000);
	CreateDynamicObject(17038, -211.8999939, -1768.4000244, 668.2999878, 0.0000000, 270.0000000, 0.0000000);
	CreateDynamicObject(17038, -210.3994141, -1768.3994141, 668.2999878, 0.0000000, 270.0000000, 0.0000000);
	CreateDynamicObject(17038, -208.8994141, -1768.3994141, 668.2999878, 0.0000000, 270.0000000, 0.0000000);
	CreateDynamicObject(17038, -207.3999939, -1768.4000244, 668.2999878, 0.0000000, 270.0000000, 0.0000000);
	CreateDynamicObject(19449, -214.6000061, -1758.9000244, 676.5000000, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(19449, -214.5996094, -1749.2998047, 676.5000000, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(19449, -214.6000061, -1739.6999512, 676.5000000, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(19449, -212.1992188, -1734.7998047, 676.5000000, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(19368, -199.8000031, -1744.5010986, 673.2999878, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(19368, -201.3979950, -1746.0999756, 673.2999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(19368, -201.3990021, -1746.9250488, 673.2999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(19368, -201.3990021, -1751.6369629, 673.2999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(19368, -201.3970032, -1753.3242188, 673.2999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(19368, -201.3990021, -1758.0369873, 673.2999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(19368, -201.3979950, -1759.7249756, 673.2999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(19460, -195.4010010, -1752.5000000, 673.2999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(19460, -195.4003906, -1762.0996094, 673.2999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(19460, -196.6494141, -1758.7988281, 673.2999878, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(19460, -196.6494141, -1758.8007812, 673.2999878, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(19460, -207.3979950, -1740.5140381, 673.2999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(19368, -207.3990021, -1761.2370605, 673.2999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(19368, -207.3979950, -1764.4000244, 673.2999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(19460, -214.5989990, -1758.8000488, 673.2999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(19460, -214.5980072, -1749.1999512, 673.2999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(19460, -214.5989990, -1739.5999756, 673.2999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(19460, -215.8000031, -1734.8011475, 673.2999878, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(19460, -207.4010010, -1739.6999512, 673.2999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(19460, -207.4013672, -1740.5136719, 673.2999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(19368, -207.4011993, -1761.2370605, 673.2999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(19368, -207.4010010, -1764.3994141, 673.2999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(3034, -204.3994141, -1763.5996094, 676.7000122, 0.0000000, 0.0000000, 179.9945068);
	CreateDynamicObject(1523, -201.3699951, -1756.4499512, 674.7399902, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(1523, -201.3691406, -1750.0498047, 674.7399902, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(1523, -201.3699951, -1762.8499756, 674.7399902, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(2686, -201.5130005, -1744.9000244, 676.4000244, 0.0000000, 0.0000000, 270.0000000);
	CreateDynamicObject(2685, -201.5130005, -1745.4000244, 676.4000244, 0.0000000, 0.0000000, 270.0000000);
	CreateDynamicObject(2688, -207.2998047, -1747.5996094, 676.2999878, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(16101, -201.5000000, -1748.5000000, 666.2999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(16101, -201.5000000, -1750.0000000, 666.2999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(16101, -201.5000000, -1754.9000244, 666.2999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(16101, -201.5000000, -1756.4000244, 666.2999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(16101, -201.5000000, -1761.3000488, 666.2999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(16101, -201.5000000, -1762.8000488, 666.2999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(16101, -201.3291016, -1748.5000000, 666.2999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(16101, -201.3300018, -1750.0000000, 666.2999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(16101, -201.3300018, -1754.9000244, 666.2999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(16101, -201.3300018, -1756.4000244, 666.2999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(16101, -201.3300018, -1761.3000488, 666.2999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(16101, -201.3300018, -1762.8000488, 666.2999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(14487, -211.8000031, -1751.5000000, 678.0999756, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(14487, -211.7998047, -1729.5996094, 678.0999756, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(14487, -218.5996094, -1729.5996094, 678.0999756, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(14487, -218.6000061, -1754.3000488, 678.0999756, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(14487, -190.8994141, -1753.5996094, 678.0999756, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(14487, -190.8999939, -1735.1999512, 678.0999756, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(14487, -190.8994141, -1731.6992188, 678.0999756, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(1523, -207.3691406, -1746.8496094, 674.7399902, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(1523, -207.3699951, -1759.6500244, 674.7399902, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(16101, -207.3291016, -1745.2998047, 666.2999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(16101, -207.3300018, -1746.8199463, 666.2999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(16101, -207.3300018, -1758.0999756, 666.2999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(16101, -207.3300018, -1759.6199951, 666.2999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(16101, -207.5000000, -1759.5999756, 666.2999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(16101, -207.5000000, -1758.0999756, 666.2999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(16101, -207.5000000, -1746.8000488, 666.2999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(16101, -207.5000000, -1745.2998047, 666.2999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(1999, -200.5000000, -1740.3994141, 674.7999878, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(2009, -199.5000000, -1743.7998047, 674.7999878, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(1671, -199.5000000, -1739.3000488, 675.2000122, 0.0000000, 0.0000000, 270.0000000);
	CreateDynamicObject(1671, -199.2998047, -1743.0000000, 675.2000122, 0.0000000, 0.0000000, 270.0000000);
	CreateDynamicObject(19387, -213.0000000, -1742.6992188, 676.5000000, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(19357, -209.7998047, -1742.6992188, 673.9010010, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(19357, -209.0000000, -1742.7001953, 673.9000244, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(19449, -212.1999969, -1742.6989746, 679.0000000, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(19466, -208.5000000, -1742.6999512, 676.4000244, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(19466, -210.7402344, -1742.6992188, 676.4000244, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(19368, -209.0000000, -1742.6989746, 673.2999878, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(19368, -210.6640015, -1742.6979980, 673.2999878, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(19368, -215.3739929, -1742.6989746, 673.2999878, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(19368, -215.3750000, -1742.7001953, 673.2999878, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(19368, -209.0000000, -1742.7011719, 673.2999878, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(19368, -210.6640015, -1742.7021484, 673.2999878, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(1523, -213.7890625, -1742.7294922, 674.7399902, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(16101, -212.2998047, -1742.7998047, 666.2999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(16101, -213.8000031, -1742.8000488, 666.2999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(16101, -213.8000031, -1742.5999756, 666.2999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(16101, -212.3000031, -1742.5999756, 666.2999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(16101, -207.5000000, -1742.6992188, 666.9000244, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(3657, -213.8999939, -1745.6999512, 675.2999878, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(3394, -213.7998047, -1739.0000000, 674.7999878, 0.0000000, 0.0000000, 179.9945068);
	CreateDynamicObject(3396, -208.1992188, -1737.0000000, 674.7999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(3397, -208.1992188, -1740.8994141, 674.7999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(14487, -218.6000061, -1731.8000488, 678.0999756, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(2007, -213.6992188, -1735.3994141, 674.7999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(2007, -212.6992188, -1735.3994141, 674.7999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(2132, -211.0996094, -1735.3994141, 674.7999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(14532, -211.3994141, -1737.0996094, 675.7800293, 0.0000000, 0.0000000, 194.7491455);
	CreateDynamicObject(2146, -211.0996094, -1738.7998047, 675.2700195, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(3657, -206.8999939, -1754.5999756, 675.2999878, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(2811, -201.8994141, -1735.3994141, 674.7999878, 0.0000000, 0.0000000, 139.9932861);
	CreateDynamicObject(2811, -201.8999939, -1763.1999512, 674.7999878, 0.0000000, 0.0000000, 219.9957275);
	CreateDynamicObject(2811, -206.8999939, -1763.1999512, 674.7999878, 0.0000000, 0.0000000, 149.9957275);
	CreateDynamicObject(3657, -206.8999939, -1739.5999756, 675.2999878, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(2811, -206.8994141, -1735.3994141, 674.7999878, 0.0000000, 0.0000000, 221.9897461);
	CreateDynamicObject(2688, -201.5000000, -1760.5000000, 676.4000244, 0.0000000, 0.0000000, 270.0000000);
	CreateDynamicObject(19460, -201.5000000, -1739.6999512, 679.9000244, 0.0000000, 179.9945068, 0.0000000);
	CreateDynamicObject(19460, -207.3000031, -1739.6999512, 679.9000244, 0.0000000, 179.9945068, 0.0000000);
	CreateDynamicObject(19460, -207.3000031, -1749.3000488, 679.9000244, 0.0000000, 179.9945068, 0.0000000);
	CreateDynamicObject(19460, -207.3000031, -1758.9000244, 679.9000244, 0.0000000, 179.9945068, 0.0000000);
	CreateDynamicObject(19460, -201.5000000, -1749.3000488, 679.9000244, 0.0000000, 179.9945068, 0.0000000);
	CreateDynamicObject(19460, -201.5000000, -1758.9000244, 679.9000244, 0.0000000, 179.9945068, 0.0000000);
	CreateDynamicObject(19460, -204.8000031, -1734.9000244, 679.9000244, 0.0000000, 179.9945068, 90.0000000);
	CreateDynamicObject(19460, -206.3999939, -1763.5999756, 679.9000244, 0.0000000, 179.9945068, 90.0000000);
	CreateDynamicObject(19460, -214.5000000, -1758.9000244, 679.9000244, 0.0000000, 179.9945068, 0.0000000);
	CreateDynamicObject(19460, -214.5000000, -1749.3000488, 679.9000244, 0.0000000, 179.9945068, 0.0000000);
	CreateDynamicObject(19460, -214.5000000, -1739.6999512, 679.9000244, 0.0000000, 179.9945068, 0.0000000);
	CreateDynamicObject(19460, -207.5000000, -1758.9000244, 679.9000244, 0.0000000, 179.9945068, 0.0000000);
	CreateDynamicObject(19460, -207.5000000, -1749.3000488, 679.9000244, 0.0000000, 179.9945068, 0.0000000);
	CreateDynamicObject(19460, -207.5000000, -1739.6999512, 679.9000244, 0.0000000, 179.9945068, 0.0000000);
	CreateDynamicObject(19460, -214.3999939, -1734.9000244, 679.9000244, 0.0000000, 179.9945068, 90.0000000);
	CreateDynamicObject(19460, -212.1999969, -1742.8000488, 679.9000244, 0.0000000, 179.9945068, 90.0000000);
	CreateDynamicObject(19460, -212.1999969, -1742.5999756, 679.9000244, 0.0000000, 179.9945068, 90.0000000);
	CreateDynamicObject(19460, -196.6000061, -1744.4000244, 679.9000244, 0.0000000, 179.9945068, 90.0000000);
	CreateDynamicObject(19460, -196.6000061, -1738.0999756, 679.9000244, 0.0000000, 179.9945068, 90.0000000);
	CreateDynamicObject(19460, -196.6000061, -1744.5999756, 679.9000244, 0.0000000, 179.9945068, 90.0000000);
	CreateDynamicObject(19460, -196.6000061, -1758.6999512, 679.9000244, 0.0000000, 179.9945068, 90.0000000);
	CreateDynamicObject(19460, -196.6000061, -1758.9000244, 679.9000244, 0.0000000, 179.9945068, 90.0000000);
	CreateDynamicObject(19460, -195.5000000, -1758.9000244, 679.9000244, 0.0000000, 179.9945068, 0.0000000);
	CreateDynamicObject(19460, -195.5000000, -1749.3000488, 679.9000244, 0.0000000, 179.9945068, 0.0000000);
	CreateDynamicObject(19460, -195.5000000, -1739.6999512, 679.9000244, 0.0000000, 179.9945068, 0.0000000);
	CreateDynamicObject(19357, -209.0000000, -1748.8010254, 673.9010010, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(19449, -207.3999939, -1752.5000000, 676.5000000, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(19460, -207.4010010, -1751.5999756, 673.2999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(19460, -207.3990021, -1751.5999756, 673.2999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(19460, -207.4019928, -1753.3000488, 673.2999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(19460, -207.3979950, -1753.3000488, 673.2999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(3657, -206.8999939, -1750.4000244, 675.2999878, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(19387, -213.0000000, -1748.8000488, 676.5000000, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(19449, -212.1999969, -1748.8010254, 679.0000000, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(19357, -209.8000031, -1748.8000488, 673.9000244, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(19466, -208.6000061, -1748.8000488, 676.4000244, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(19466, -210.8404999, -1748.8000488, 676.4000244, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(19449, -212.1999969, -1756.1999512, 676.5000000, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(1523, -213.7890015, -1748.8299561, 674.7399902, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(19460, -212.1999969, -1748.6999512, 679.9000244, 0.0000000, 179.9945068, 90.0000000);
	CreateDynamicObject(19460, -212.1999969, -1748.9000244, 679.9000244, 0.0000000, 179.9945068, 90.0000000);
	CreateDynamicObject(19460, -212.1999969, -1756.0999756, 679.9000244, 0.0000000, 179.9945068, 90.0000000);
	CreateDynamicObject(19460, -212.3000031, -1756.1989746, 673.2999878, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(19368, -209.0000000, -1748.7990000, 673.2999878, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(19368, -210.6629944, -1748.7980000, 673.2999878, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(19368, -210.6621094, -1748.8027344, 673.2999878, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(19368, -209.0000000, -1748.8017578, 673.2999878, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(19368, -215.3750000, -1748.7989502, 673.2999878, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(19368, -215.3750000, -1748.8007812, 673.2999878, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(3397, -208.1999969, -1750.8000488, 674.7999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(3396, -208.1999969, -1754.4000244, 674.7999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(19460, -212.1999969, -1756.3000488, 679.9000244, 0.0000000, 179.9945068, 90.0000000);
	CreateDynamicObject(2132, -209.8999939, -1755.5999756, 674.7999878, 0.0000000, 0.0000000, 180.0000000);
	CreateDynamicObject(2007, -212.3000031, -1755.5999756, 674.7999878, 0.0000000, 0.0000000, 180.0000000);
	CreateDynamicObject(2007, -213.3000031, -1755.5999756, 674.7999878, 0.0000000, 0.0000000, 179.9945068);
	CreateDynamicObject(3394, -213.8000031, -1752.1999512, 674.7999878, 0.0000000, 0.0000000, 179.9945068);
	CreateDynamicObject(2146, -211.1000061, -1751.9000244, 675.2999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(14532, -210.6999969, -1753.5000000, 675.7999878, 0.0000000, 0.0000000, 14.0000000);
	CreateDynamicObject(19460, -212.2998047, -1756.2001953, 673.2999878, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(3657, -201.8994141, -1746.5000000, 675.2999878, 0.0000000, 0.0000000, 270.0000000);
	CreateDynamicObject(2811, -214.0000000, -1743.4000244, 674.7999878, 0.0000000, 0.0000000, 251.9897461);
	CreateDynamicObject(2811, -214.0000000, -1748.0999756, 674.7999878, 0.0000000, 0.0000000, 295.9879761);
	CreateDynamicObject(16101, -207.5000000, -1748.8000488, 666.9000244, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(3394, -213.8000031, -1761.5000000, 674.7999878, 0.0000000, 0.0000000, 179.9945068);
	CreateDynamicObject(2007, -214.0000000, -1758.5999756, 674.7999878, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(2007, -214.0000000, -1757.5999756, 674.7999878, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(2132, -210.1000061, -1763.0999756, 674.7999878, 0.0000000, 0.0000000, 179.9945068);
	CreateDynamicObject(3396, -208.1999969, -1761.6999512, 674.7999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(3397, -210.8000031, -1756.6999512, 674.7999878, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(2146, -211.1999969, -1759.9000244, 675.2999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(11237, -230.0000000, -1760.4000244, 698.9000244, 0.0000000, 180.0000000, 180.0000000);
	CreateDynamicObject(3053, -211.1999969, -1760.4000244, 678.4000244, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(16101, -211.1999969, -1760.4000244, 688.0999756, 0.0000000, 180.0000000, 0.0000000);
	CreateDynamicObject(2596, -214.3000031, -1760.0999756, 676.7000122, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(2885, -211.8000031, -1754.9000244, 678.4000244, 270.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(2596, -214.3000031, -1760.8000488, 676.7000122, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(2596, -214.3000031, -1760.8000488, 677.2999878, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(2596, -214.3000031, -1760.0999756, 677.2999878, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(16101, -222.6000061, -1760.4000244, 677.9000244, 0.0000000, 90.0000000, 0.0000000);
	CreateDynamicObject(16101, -214.5000000, -1760.4000244, 666.19387220, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(3808, -207.2500000, -1757.8000488, 676.2999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(3808, -212.0000000, -1742.8499756, 676.2999878, 0.0000000, 0.0000000, 270.0000000);
	CreateDynamicObject(3808, -212.0000000, -1748.6600342, 676.2999878, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(19460, -201.3000031, -1749.5000000, 679.9000244, 0.0000000, 179.9945068, 0.0000000);
	CreateDynamicObject(19460, -201.3000031, -1759.0999756, 679.9000244, 0.0000000, 179.9945068, 0.0000000);
	CreateDynamicObject(2009, -199.5000000, -1747.8000488, 674.7999878, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(1999, -200.5000000, -1746.0999756, 674.8010254, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(1671, -199.3999939, -1746.9000244, 675.2000122, 0.0000000, 0.0000000, 264.0000000);
	CreateDynamicObject(1671, -199.3999939, -1745.0999756, 675.2000122, 0.0000000, 0.0000000, 278.0000000);
	CreateDynamicObject(2009, -196.8000031, -1753.8000488, 674.8010254, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(1999, -197.8000031, -1752.0999756, 674.7999878, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(1999, -198.6999969, -1752.8000488, 674.7999878, 0.0000000, 0.0000000, 270.0000000);
	CreateDynamicObject(2009, -199.6999969, -1751.0999756, 674.8010254, 0.0000000, 0.0000000, 270.0000000);
	CreateDynamicObject(1671, -197.6000061, -1753.0000000, 675.2000122, 0.0000000, 0.0000000, 282.0000000);
	CreateDynamicObject(1671, -196.8000031, -1751.3000488, 675.2000122, 0.0000000, 0.0000000, 260.0000000);
	CreateDynamicObject(1671, -199.8000031, -1752.0999756, 675.2000122, 0.0000000, 0.0000000, 84.0000000);
	CreateDynamicObject(1671, -199.8000031, -1753.8000488, 675.2000122, 0.0000000, 0.0000000, 104.0000000);
	CreateDynamicObject(2009, -196.0000000, -1757.1999512, 674.7999878, 0.0000000, 0.0000000, 180.0000000);
	CreateDynamicObject(1999, -197.6999969, -1758.1999512, 674.8010254, 0.0000000, 0.0000000, 180.0000000);
	CreateDynamicObject(1671, -196.8999939, -1757.3000488, 675.2000122, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(1671, -198.6999969, -1758.0000000, 675.2000122, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(2202, -196.0000000, -1746.1999512, 674.7800293, 0.0000000, 0.0000000, 270.0000000);
	CreateDynamicObject(2811, -195.8999939, -1745.0999756, 674.7999878, 0.0000000, 0.0000000, 115.9932861);
	CreateDynamicObject(2007, -196.0000000, -1748.3000488, 674.7999878, 0.0000000, 0.0000000, 270.0000000);
	CreateDynamicObject(2007, -196.0000000, -1749.3000488, 674.7999878, 0.0000000, 0.0000000, 270.0000000);
	CreateDynamicObject(2811, -200.8999939, -1758.3000488, 674.7999878, 0.0000000, 0.0000000, 141.9881592);
	CreateDynamicObject(2611, -198.1999969, -1758.6700439, 676.7999878, 0.0000000, 0.0000000, 180.0000000);
	CreateDynamicObject(2611, -201.2700043, -1746.4000244, 676.5999756, 0.0000000, 0.0000000, 89.9945068);
	CreateDynamicObject(19449, -215.8000031, -1763.6999512, 676.5000000, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(19449, -201.3999939, -1768.5000000, 676.5000000, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(19449, -195.3999939, -1771.6999512, 676.5000000, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(2885, -200.8999939, -1768.3000488, 678.4000244, 270.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(19460, -201.3990021, -1767.5799561, 673.2999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(19460, -195.4010010, -1771.6999512, 673.2999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(19460, -195.5000000, -1768.5000000, 679.9000244, 0.0000000, 179.9945068, 0.0000000);
	CreateDynamicObject(19460, -201.3000031, -1768.6999512, 679.9000244, 0.0000000, 179.9945068, 0.0000000);
	CreateDynamicObject(19449, -196.6000061, -1772.4000244, 676.5000000, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(19460, -196.6000061, -1772.3990479, 673.2999878, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(19460, -196.6000061, -1772.3000488, 679.9000244, 0.0000000, 179.9945068, 90.0000000);
	CreateDynamicObject(14487, -190.8999939, -1778.1999512, 678.0999756, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(1789, -211.8000031, -1753.0999756, 675.2999878, 0.0000000, 0.0000000, 290.0000000);
	CreateDynamicObject(1789, -211.8994141, -1759.1992188, 675.2999878, 0.0000000, 0.0000000, 270.0000000);
	CreateDynamicObject(1789, -210.1999969, -1737.6999512, 675.2999878, 0.0000000, 0.0000000, 99.9951172);
	CreateDynamicObject(1800, -199.0000000, -1759.5000000, 674.7000122, 0.0000000, 0.0000000, 270.0000000);
	CreateDynamicObject(1800, -199.0000000, -1771.5000000, 674.7000122, 0.0000000, 0.0000000, 270.0000000);
	CreateDynamicObject(1800, -199.0000000, -1767.5999756, 674.7000122, 0.0000000, 0.0000000, 270.0000000);
	CreateDynamicObject(1800, -199.0000000, -1763.6999512, 674.7000122, 0.0000000, 0.0000000, 270.0000000);
	CreateDynamicObject(1800, -200.6999969, -1766.9000244, 674.7000122, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(1800, -200.6999969, -1773.3000488, 674.7000122, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(1789, -196.1999969, -1770.6999512, 675.2999878, 0.0000000, 0.0000000, 180.0000000);
	CreateDynamicObject(1789, -196.1999969, -1766.6999512, 675.2999878, 0.0000000, 0.0000000, 179.9945068);
	CreateDynamicObject(1789, -196.1999969, -1762.9000244, 675.2999878, 0.0000000, 0.0000000, 179.9945068);
	CreateDynamicObject(1789, -196.3000031, -1760.6999512, 675.2999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(1789, -200.5000000, -1766.1999512, 675.2999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(1789, -200.5000000, -1769.4000244, 675.2999878, 0.0000000, 0.0000000, 180.0000000);
	CreateDynamicObject(19460, -216.0000000, -1763.5999756, 679.9000244, 0.0000000, 179.9945068, 90.0000000);
	CreateDynamicObject(1999, -197.5000000, -1740.4000244, 674.7999878, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(1671, -196.5000000, -1739.3000488, 675.2000122, 0.0000000, 0.0000000, 270.0000000);
	CreateDynamicObject(19460, -215.8999939, -1763.6989746, 673.2999878, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(16101, -212.3000031, -1748.6999512, 666.2999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(16101, -213.8000031, -1748.6999512, 666.2999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(16101, -213.8000031, -1748.9000244, 666.2999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(16101, -212.3000031, -1748.9000244, 666.2999878, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(2852, -206.8000031, -1742.8000488, 675.2800293, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(2315, -206.8000031, -1742.4000244, 674.7999878, 0.0000000, 0.0000000, 270.0000000);
	CreateDynamicObject(2855, -206.6999969, -1743.6999512, 675.2999878, 0.0000000, 0.0000000, 0.0000000);
	SetDynamicObjectMaterial(CreateDynamicObject(11435, -204.3999939, -1745.0999756, 679.4000244, 0.0000000, 0.0000000, 270.0000000), 1, 14532, "drivingbit", "blak_1");
	SetDynamicObjectMaterial(CreateDynamicObject(11435, -204.3999939, -1752.0000000, 679.4000244, 0.0000000, 0.0000000, 270.0000000), 1, 14532, "drivingbit", "blak_1");
	SetDynamicObjectMaterial(CreateDynamicObject(11435, -204.3999939, -1758.8000488, 679.4000244, 0.0000000, 0.0000000, 270.0000000), 1, 14532, "drivingbit", "blak_1");
	SetDynamicObjectMaterial(CreateDynamicObject(11435, -198.6000061, -1764.0000000, 679.4000244, 0.0000000, 0.0000000, 270.0000000), 1, 14532, "drivingbit", "blak_1");
	SetDynamicObjectMaterial(CreateDynamicObject(11435, -198.6000061, -1769.1999512, 679.4000244, 0.0000000, 0.0000000, 270.0000000), 1, 14532, "drivingbit", "blak_1");
	SetDynamicObjectMaterial(CreateDynamicObject(11435, -198.6000061, -1756.3000488, 679.4000244, 0.0000000, 0.0000000, 270.0000000), 1, 14532, "drivingbit", "blak_1");
	SetDynamicObjectMaterial(CreateDynamicObject(11435, -198.6000061, -1749.9000244, 679.4000244, 0.0000000, 0.0000000, 270.0000000), 1, 14532, "drivingbit", "blak_1");
	SetDynamicObjectMaterialText(CreateDynamicObject(19353, -195.4142, -1741.4693, 676.4188, 0.0000, 0.0000, 180.0), 0, "HOSPITAL", 140, "Cambria", 105, 1, -1, 0, 1);
	SetDynamicObjectMaterialText(CreateDynamicObject(19353, -195.4142, -1741.4362, 676.8190, 0.0000, 0.0000, 180), 0, "COUNTY GENERAL", 140, "Cambria", 55, 1, -584707328, 0, 1);
}
stock LoadTheSyndicate()
{
	/* Exterior */
	CreateDynamicObject(16151, 1299.27856, -785.63684, 87.64860,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1825, 1300.73730, -795.23309, 87.28413,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1825, 1297.08984, -790.45142, 87.28413,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1825, 1302.42493, -790.31329, 87.28413,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1670, 1300.68311, -795.24292, 88.17500,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1670, 1296.97083, -790.38019, 88.17500,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1670, 1302.31763, -790.27576, 88.17500,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3462, 1240.08459, -767.44110, 95.60000,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(3462, 1251.00281, -767.26819, 95.60000,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(3462, 1270.34802, -831.03271, 83.52552,   0.00000, 0.00000, 90.10000);
	CreateDynamicObject(3462, 1293.60327, -831.91309, 83.52552,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3935, 1281.18115, -832.22260, 82.95962,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(987, 1239.47314, -786.47418, 89.88809,   0.00000, 0.00000, 268.06174);
	CreateDynamicObject(987, 1274.95679, -767.74249, 93.76490,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(987, 1285.12903, -767.72278, 93.76490,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(987, 1295.93665, -767.63403, 95.02023,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(987, 1263.03601, -767.72278, 93.76490,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(987, 1239.36963, -767.14935, 91.09351,   0.00000, 0.00000, 270.58139);
	CreateDynamicObject(987, 1239.36877, -779.03198, 89.88809,   0.00000, 0.00000, 270.02322);
	CreateDynamicObject(987, 1295.48865, -774.19019, 100.40585,   0.00000, 90.00000, 87.30762);
	CreateDynamicObject(987, 1303.91077, -774.62805, 89.92685,   0.00000, 0.00000, 174.82312);
	CreateDynamicObject(987, 1299.43384, -779.47302, 88.98995,   0.00000, 0.00000, 324.79294);
	CreateDynamicObject(987, 1285.12903, -767.72278, 88.75000,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(987, 1274.95679, -767.74249, 88.75000,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(987, 1263.03601, -767.72278, 88.75000,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(983, 1292.76672, -789.26233, 91.70000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(983, 1255.25879, -792.33649, 91.70000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(983, 1261.66370, -792.34094, 91.70000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(983, 1270.40698, -792.37970, 91.70000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(983, 1276.79956, -792.38507, 91.70000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(983, 1283.19983, -792.42212, 91.70000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(983, 1289.58228, -792.43158, 91.70000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(983, 1254.24268, -799.98859, 88.00000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(982, 1282.22510, -833.31561, 82.82000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(984, 1277.00598, -838.68073, 76.90000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(983, 1295.81189, -803.36407, 88.00000,   0.00000, 0.00000, 359.79901);
	CreateDynamicObject(983, 1257.45203, -809.62628, 88.00000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(983, 1257.43237, -803.20770, 88.00000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(982, 1270.23120, -812.78156, 88.00000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(983, 1290.33838, -835.46381, 76.90000,   0.00000, 0.00000, 350.23904);
	CreateDynamicObject(983, 1270.61682, -835.48651, 76.90000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(983, 1286.58923, -838.64313, 76.90000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(984, 1269.40002, -826.92407, 82.82000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(984, 1294.98975, -826.94403, 82.82000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(984, 1303.67603, -807.55701, 85.10000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(984, 1307.96997, -807.37659, 80.01924,   34.85990, 0.00000, 0.00000);
	CreateDynamicObject(983, 1296.23230, -819.48413, 83.84440,   0.00000, 0.00000, 285.78168);
	CreateDynamicObject(984, 1303.67603, -807.55701, 83.84436,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(983, 1301.49182, -816.29272, 85.10000,   0.00000, 0.00000, 316.83231);
	CreateDynamicObject(983, 1301.49182, -816.29272, 86.35000,   0.00000, 0.00000, 316.83231);
	CreateDynamicObject(983, 1301.49182, -816.29266, 83.84440,   0.00000, 0.00000, 316.83231);
	CreateDynamicObject(983, 1296.23230, -819.48407, 85.10000,   0.00000, 0.00000, 285.78171);
	CreateDynamicObject(983, 1296.23755, -819.50342, 86.35000,   0.00000, 0.00000, 285.78171);
	CreateDynamicObject(984, 1303.66785, -807.53003, 87.60000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(983, 1301.49182, -816.29272, 87.60000,   0.00000, 0.00000, 316.83231);
	CreateDynamicObject(983, 1296.23230, -819.48413, 86.35000,   0.00000, 0.00000, 285.78171);
	CreateDynamicObject(983, 1296.23230, -819.48407, 87.60000,   0.00000, 0.00000, 285.78171);
	CreateDynamicObject(984, 1258.87122, -817.62042, 83.81901,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(983, 1266.83142, -817.63812, 83.81900,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(983, 1269.39575, -820.81671, 83.81900,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(13749, 1283.26404, -819.32678, 80.58000,   0.00000, 0.00000, 328.50821);
	CreateDynamicObject(13749, 1254.48962, -797.89056, 84.30000,   0.00000, 0.00000, 322.02560);
	CreateDynamicObject(983, 1287.83264, -812.76630, 88.00000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(983, 1295.82458, -809.58936, 88.00000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(983, 1286.22742, -812.76666, 88.00000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3811, 1293.79822, -833.73932, 82.50000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3811, 1269.60645, -833.69727, 82.50000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3811, 1273.02698, -833.69733, 82.50000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3811, 1276.75989, -833.69733, 82.50000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3811, 1280.76904, -833.69733, 82.50000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3811, 1284.80847, -833.69733, 82.50000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3811, 1289.34998, -833.76990, 82.50000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(984, 1303.67236, -807.51056, 86.35000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(984, 1306.34363, -796.40381, 85.10000,   0.00000, 0.00000, 14.67860);
	CreateDynamicObject(984, 1306.34363, -796.40381, 86.35000,   0.00000, 0.00000, 14.67860);
	CreateDynamicObject(984, 1306.34363, -796.40381, 87.60000,   0.00000, 0.00000, 14.67860);
	CreateDynamicObject(984, 1306.33484, -796.40417, 83.78000,   0.00000, 0.00000, 14.67860);
	CreateDynamicObject(984, 1307.96997, -807.37659, 81.50000,   34.85990, 0.00000, 0.00000);
	CreateDynamicObject(987, 1308.29419, -785.90155, 89.92680,   0.00000, 0.00000, 113.08130);
	CreateDynamicObject(987, 1319.91125, -814.30096, 75.87393,   0.00000, 0.00000, 173.12866);
	CreateDynamicObject(984, 1307.96997, -807.37659, 83.00000,   34.85990, 0.00000, 0.00000);
	CreateDynamicObject(970, 1277.82788, -790.60626, 96.00000,   0.00000, 0.00000, 100.88248);
	CreateDynamicObject(970, 1296.00549, -775.17914, 96.00000,   0.00000, 0.00000, 160.17400);
	CreateDynamicObject(970, 1279.15649, -794.45142, 96.00000,   0.00000, 0.00000, 298.20001);
	CreateDynamicObject(970, 1281.61499, -797.70892, 96.00000,   0.00000, 0.00000, 315.25406);
	CreateDynamicObject(970, 1284.89307, -800.08215, 96.00000,   0.00000, 0.00000, 332.75903);
	CreateDynamicObject(970, 1288.71167, -801.45935, 96.00000,   0.00000, 0.00000, 346.88647);
	CreateDynamicObject(970, 1292.77039, -801.70679, 96.00000,   0.00000, 0.00000, 6.16453);
	CreateDynamicObject(970, 1296.72876, -800.70032, 96.00000,   0.00000, 0.00000, 22.17318);
	CreateDynamicObject(970, 1300.17017, -798.53979, 96.00000,   0.00000, 0.00000, 42.34993);
	CreateDynamicObject(970, 1302.82605, -795.44141, 96.00000,   0.00000, 0.00000, 57.20996);
	CreateDynamicObject(970, 1304.45935, -791.69208, 96.00000,   0.00000, 0.00000, 75.09539);
	CreateDynamicObject(970, 1304.93604, -787.66498, 96.00000,   0.00000, 0.00000, 92.55709);
	CreateDynamicObject(970, 1304.22803, -783.65924, 96.00000,   0.00000, 0.00000, 108.00975);
	CreateDynamicObject(970, 1302.43018, -780.00873, 96.00000,   0.00000, 0.00000, 124.76120);
	CreateDynamicObject(970, 1299.59241, -777.10425, 96.00000,   0.00000, 0.00000, 143.88878);
	CreateDynamicObject(987, 1301.00171, -817.02454, 73.70560,   0.00000, 0.00000, 328.07645);
	CreateDynamicObject(987, 1301.00171, -817.02448, 77.70560,   0.00000, 0.00000, 328.07639);
	CreateDynamicObject(3934, 1298.80627, -787.11987, 95.45000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3934, 1282.80615, -787.22662, 95.45000,   0.00000, 0.00000, 90.00000);
	/* Garage */
	CreateDynamicObject(7245, 2962.97876, -1023.49231, 1036.48218,   0.00000, 0.00000, 0.00000);
	SetObjectMaterial(CreateDynamicObject(18981, 2950.63892, -1010.00238, 1052.00000,   0.00000, 0.00000, 0.00000), 0, 9515, "bigboxtemp1", "garagedoor4_law", 0xFFFFFFFF);
	CreateDynamicObject(18981, 2937.66675, -1002.38226, 1036.43726,   0.00000, 79.00000, 0.00000);
	CreateDynamicObject(18981, 2924.02661, -1012.50385, 1036.22998,   0.00000, 90.00000, 0.00000);
	/* Interior */
	CreateDynamicObject(14412, 1364.60400, -3064.32251, 4989.48047,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(18553, 1340.81213, -3052.62524, 4996.09961,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19454, 1347.60779, -3036.10669, 4997.52148,   90.00000, 0.00000, 90.00000);
	CreateDynamicObject(19454, 1344.13538, -3036.11768, 4999.50000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19454, 1342.40527, -3036.10669, 4997.52148,   90.00000, 0.00000, 90.00000);
	CreateDynamicObject(2008, 1345.32605, -3040.02148, 4994.70508,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1714, 1344.35120, -3038.86011, 4994.84375,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(14459, 1369.31604, -3064.33423, 4987.09961,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(2649, 1341.35205, -3045.20923, 4998.96680,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(2649, 1341.34888, -3046.85205, 4998.96680,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(934, 1382.77222, -3045.06128, 4992.00000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(934, 1359.75415, -3045.04126, 4992.00000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(934, 1370.79236, -3045.06128, 4992.00000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(964, 1348.40747, -3033.03394, 4994.75000,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(964, 1348.41492, -3031.71436, 4994.75000,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(964, 1348.40747, -3033.03394, 4995.65039,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(964, 1348.41492, -3031.71436, 4995.65039,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1829, 1341.53662, -3035.08276, 4995.30078,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1829, 1341.64819, -3031.26904, 4995.30078,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1279, 1348.52405, -3034.25000, 4994.80859,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1279, 1348.42969, -3035.80615, 4994.80859,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1279, 1348.47290, -3035.27588, 4994.80859,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1279, 1348.48083, -3034.74976, 4994.80859,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1279, 1348.42969, -3035.80615, 4995.00000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1279, 1348.49268, -3035.27930, 4995.00000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1279, 1348.48083, -3034.74976, 4995.00000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1279, 1348.52405, -3034.25000, 4995.00000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1279, 1348.52405, -3034.25000, 4995.19922,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1279, 1348.48083, -3034.74976, 4995.19922,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1279, 1348.49268, -3035.27930, 4995.19922,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1279, 1348.42969, -3035.80615, 4995.19922,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1279, 1348.42969, -3035.80615, 4995.40039,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1279, 1348.49268, -3035.27930, 4995.40039,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1279, 1348.48083, -3034.74976, 4995.40039,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1279, 1348.52405, -3034.25000, 4995.40039,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2482, 1344.00684, -3030.67896, 4994.75000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(335, 1344.71326, -3030.96191, 4995.80078,   90.00000, 90.00000, 180.00000);
	CreateDynamicObject(348, 1344.83838, -3030.59961, 4995.84766,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(348, 1343.59509, -3030.62988, 4995.84766,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(335, 1343.70850, -3031.12231, 4995.80078,   90.00000, 90.00000, 0.00000);
	CreateDynamicObject(356, 1343.84631, -3030.65796, 4996.20508,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(351, 1343.73596, -3030.65186, 4996.49023,   0.00000, 10.00000, 0.00000);
	CreateDynamicObject(358, 1344.72009, -3030.63623, 4997.02930,   0.00000, 280.00000, 180.00000);
	CreateDynamicObject(358, 1343.77869, -3030.61694, 4997.02930,   0.00000, 280.00000, 180.00000);
	CreateDynamicObject(2969, 1346.10132, -3030.78882, 4994.90039,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2969, 1345.42017, -3030.78394, 4994.90039,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2922, 1344.00366, -3036.18433, 4996.25000,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(2922, 1346.17688, -3036.03760, 4996.00000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(941, 1370.86267, -3043.06519, 4991.09961,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(941, 1359.55530, -3043.08521, 4991.09961,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(941, 1382.65601, -3043.06519, 4991.09961,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(941, 1359.55444, -3047.00708, 4991.09961,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(941, 1370.90894, -3047.10034, 4991.09961,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(941, 1382.63733, -3047.15918, 4991.09961,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(937, 1364.53491, -3054.42358, 4991.25000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(937, 1364.58337, -3035.59912, 4991.25000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(937, 1378.03186, -3035.36987, 4991.25000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(937, 1378.22437, -3054.40088, 4991.25000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1279, 1364.51111, -3035.47632, 4991.71484,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1279, 1378.29443, -3054.49243, 4991.71484,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1279, 1364.56250, -3054.50610, 4991.71484,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1279, 1378.08923, -3035.27368, 4991.71484,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(14416, 1351.43579, -3037.24854, 4991.55078,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1499, 1349.23499, -3054.78223, 4994.80078,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1499, 1349.25488, -3057.78052, 4994.80078,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(14412, 1372.17102, -3044.49902, 4999.99023,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(14459, 1367.43860, -3044.56592, 4997.66602,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(14416, 1385.35242, -3071.39673, 4981.00000,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(19372, 1352.68018, -3073.54248, 4980.12891,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19372, 1349.18127, -3073.54810, 4980.12891,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19372, 1349.18787, -3076.74316, 4980.12891,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19372, 1352.67773, -3076.74219, 4980.12891,   0.00000, 90.00000, 0.00000);
	CreateDynamicObject(19473, 1351.73499, -3077.71875, 4979.38281,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19473, 1348.48303, -3075.20996, 4979.48242,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19473, 1349.19421, -3076.90063, 4979.48242,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19473, 1349.82837, -3076.90063, 4979.48242,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19473, 1350.47681, -3076.90063, 4979.38281,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19473, 1351.08826, -3076.90063, 4979.38281,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19473, 1348.54590, -3076.90063, 4979.48242,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19473, 1348.41064, -3074.51245, 4979.48242,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19473, 1349.21533, -3074.42676, 4979.48242,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19473, 1349.82886, -3074.29297, 4979.48242,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19473, 1350.35876, -3074.16309, 4979.48242,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19473, 1348.19519, -3073.57715, 4979.48242,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19473, 1348.55664, -3076.03857, 4979.48242,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19473, 1350.65271, -3076.04346, 4979.48242,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19473, 1349.58655, -3075.11426, 4979.48242,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19473, 1349.50513, -3075.97095, 4979.48242,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19473, 1350.15173, -3075.87988, 4979.48242,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19473, 1350.52161, -3075.07788, 4979.48242,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19473, 1351.33484, -3074.33960, 4979.48242,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19473, 1351.78906, -3075.99487, 4979.48242,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19473, 1351.41675, -3075.20776, 4979.48242,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19473, 1352.55505, -3076.23950, 4979.48242,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19473, 1352.29419, -3075.31543, 4979.48242,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19473, 1352.08838, -3074.33960, 4979.48242,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19473, 1348.67163, -3072.75464, 4979.48242,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19473, 1350.43005, -3073.10156, 4979.48242,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19473, 1349.78552, -3073.33691, 4979.48242,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19473, 1349.04004, -3073.50781, 4979.48242,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19473, 1351.80261, -3076.90063, 4979.38281,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19473, 1352.65198, -3076.93652, 4979.38281,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19473, 1352.73083, -3077.64233, 4979.38281,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19473, 1349.87402, -3077.73267, 4979.38281,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19473, 1352.39685, -3077.68799, 4979.38281,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19473, 1351.16589, -3077.77759, 4979.38281,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19473, 1348.39771, -3077.78638, 4979.38281,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19473, 1350.52271, -3077.68506, 4979.38281,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19473, 1349.39429, -3077.73999, 4979.38281,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1408, 1349.96973, -3071.98730, 4980.59961,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1408, 1354.38611, -3075.66943, 4980.59961,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(19473, 1351.09961, -3073.49878, 4979.48242,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19473, 1349.71033, -3072.70996, 4979.48242,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19473, 1347.95422, -3072.75000, 4979.48242,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19473, 1351.31348, -3072.72852, 4979.48242,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19473, 1351.86597, -3073.40479, 4979.48242,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19473, 1352.03308, -3072.69067, 4979.48242,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(18553, 1347.29651, -3056.36304, 4981.50000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(934, 1360.91675, -3063.47583, 4981.50000,   0.00000, 0.00000, 358.73172);
	CreateDynamicObject(934, 1372.74548, -3063.55469, 4981.50000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(941, 1374.43799, -3063.77539, 4980.50000,   -0.06000, 0.00000, 90.00000);
	CreateDynamicObject(941, 1359.18958, -3063.28442, 4980.50000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(941, 1362.65930, -3063.39600, 4980.50000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(941, 1371.09692, -3063.63062, 4980.50000,   -0.06000, 0.00000, 90.00000);
	CreateDynamicObject(356, 1359.34302, -3062.99023, 4981.00000,   80.00000, 0.00000, 90.00000);
	CreateDynamicObject(348, 1359.43042, -3063.96143, 4980.99023,   90.00000, 0.00000, 90.00000);
	CreateDynamicObject(348, 1374.77063, -3063.06079, 4980.99023,   90.00000, 0.00000, 90.00000);
	CreateDynamicObject(351, 1358.76172, -3063.56323, 4980.97070,   80.00000, 0.00000, 90.00000);
	CreateDynamicObject(351, 1371.29590, -3064.28223, 4980.97070,   80.00000, 0.00000, 90.00000);
	CreateDynamicObject(351, 1371.02087, -3063.62695, 4980.97070,   80.00000, 0.00000, 90.00000);
	CreateDynamicObject(356, 1374.71448, -3064.31934, 4980.98047,   80.00000, 0.00000, 90.00000);
	CreateDynamicObject(351, 1370.68591, -3063.14331, 4980.97070,   80.00000, 0.00000, 90.00000);
	CreateDynamicObject(356, 1374.00940, -3064.25366, 4980.98047,   80.00000, 0.00000, 90.00000);
	CreateDynamicObject(348, 1373.99048, -3063.16528, 4980.99023,   90.00000, 0.00000, 90.00000);
	CreateDynamicObject(348, 1362.89160, -3062.80396, 4980.99023,   90.00000, 0.00000, 90.00000);
	CreateDynamicObject(351, 1362.62622, -3064.10449, 4980.97070,   80.00000, 0.00000, 90.00000);
	CreateDynamicObject(356, 1362.32471, -3063.30298, 4981.00000,   80.00000, 0.00000, 90.00000);
	CreateDynamicObject(14410, 1398.33179, -3045.57422, 4987.44922,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1499, 1387.70154, -3051.08789, 4984.28906,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1499, 1387.72180, -3054.08813, 4984.28906,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2294, 1353.75757, -3057.48242, 4990.52344,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(2294, 1349.88660, -3057.56836, 4990.52344,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(2294, 1350.87073, -3057.54858, 4990.52344,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(2294, 1351.84546, -3057.55298, 4990.52344,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(2294, 1352.80823, -3057.53564, 4990.52344,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(2294, 1388.90137, -3035.04053, 4990.52344,   0.00000, 0.00000, 269.18683);
	CreateDynamicObject(2294, 1388.87964, -3031.04688, 4990.52344,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(2294, 1388.89441, -3032.04053, 4990.52344,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(2294, 1388.91003, -3033.04272, 4990.52344,   0.00000, 0.00000, 269.69696);
	CreateDynamicObject(2294, 1388.91602, -3034.04468, 4990.52344,   0.00000, 0.00000, 269.69696);
	CreateDynamicObject(2228, 1353.86353, -3078.19751, 4980.75000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1703, 1370.15015, -3076.54761, 4980.00000,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1703, 1371.31775, -3073.29272, 4980.00000,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1703, 1368.14893, -3071.86499, 4980.00000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1703, 1366.97729, -3075.40259, 4980.00000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2315, 1369.22241, -3075.02808, 4980.09961,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1670, 1369.22095, -3075.14258, 4980.59375,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1670, 1369.28259, -3074.22095, 4980.59375,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1670, 1369.29260, -3073.43335, 4980.59375,   0.00000, 0.00000, 0.00000);
	/* " i " */
	CreatePickup(1239, 1, 1258.3075, -785.4031, 92.0302, -1); //entrance top
	CreatePickup(1239, 1, 1298.6323, -800.2110, 84.1406, -1); //entrance bottom
	CreatePickup(1239, 1, 1341.1936, -3052.3301, 4995.8105, -1); // top floor exit
	CreatePickup(1239, 1, 1349.8260, -3056.1846, 4981.2367, -1); // bottom floor exit
	CreatePickup(1239, 1, 1249.0446, -800.8873, 84.1406, -1); // garage entry
	CreatePickup(1239, 1, 2948.1450, -1008.5245, 1039.9834, -1); // garage exit
	CreatePickup(1239, 1, 2942.1077, -999.9381, 1033.9900, -1); // garage entrance bottom
	CreatePickup(1239, 1, 1344.7222, -3032.0408, 4995.8105, -1); //armory
	return 1;
}

// ---------------------- NON-DONATION ----------------------
stock LoadLSPDGarageMap()
{
	CreateDynamicObject(966, 1540.23022, -1665.57373, 4.83205, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(983, 1544.52808, -1665.50488, 5.54580, 0.00000, 0.00000, 90.00000);
	CreateDynamicObject(983, 1546.12952, -1665.51599, 5.54580, 0.00000, 0.00000, 90.00000);
	CreateDynamicObject(19425, 1538.43457, -1665.57251, 4.88216, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19425, 1535.18640, -1665.57410, 4.88216, 0.00000, 0.00000, 0.00000);
	CreateDynamicObject(983, 1529.62744, -1665.53931, 5.88815, 0.00000, 0.00000, 90.00000);
	CreateDynamicObject(983, 1526.44116, -1665.52954, 5.88815, 0.00000, 0.00000, 90.00000);
	return 1;
}


stock LoadCourt()
{
	CreateDynamicObject(14602, 1445.1230469, -1466.2246094, 1619.7288818, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(13007, 1424.1153564, -1469.6701660, 1613.1350098, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(14602, 1436.9414062, -1446.6044922, 1619.7038574, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(13007, 1442.6728516, -1467.3056641, 1613.1350098, 0.0000000, 0.0000000, 179.9945068);
	CreateDynamicObject(13007, 1425.7871094, -1454.3955078, 1613.1600342, 0.0000000, 0.0000000, 359.9890137);
	CreateDynamicObject(13007, 1415.7307129, -1469.8259277, 1613.3847656, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(13007, 1415.7011719, -1471.9492188, 1613.6099854, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(13007, 1415.6757812, -1471.9511719, 1613.7851562, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(13007, 1426.9150391, -1451.6982422, 1613.1850586, 0.0000000, 0.0000000, 269.9890137);
	CreateDynamicObject(7191, 1426.1708984, -1460.9160156, 1614.9812012, 90.0000000, 180.0054932, 269.9890137);
	CreateDynamicObject(7191, 1420.7182617, -1460.9030762, 1617.3320312, 90.0000000, 180.0054932, 269.9835205);
	CreateDynamicObject(1491, 1422.6826172, -1460.9404297, 1615.3189697, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(7191, 1426.1943359, -1460.8955078, 1617.3320312, 90.0000000, 179.9945068, 89.9945068);
	CreateDynamicObject(7191, 1423.9179688, -1460.9130859, 1639.9559326, 270.0000000, 180.0014954, 269.9905090);
	CreateDynamicObject(7191, 1422.2421875, -1460.8945312, 1639.9559326, 270.0000000, 180.0004120, 89.9894104);
	CreateDynamicObject(7191, 1420.7714844, -1460.8876953, 1617.3320312, 90.0000000, 179.9945068, 89.9890442);
	CreateDynamicObject(7191, 1425.1721191, -1459.4197998, 1614.4053955, 90.0000000, 180.0054932, 269.9780273);
	CreateDynamicObject(7191, 1425.2216797, -1459.3935547, 1614.4053955, 90.0000000, 180.0054932, 89.9780579);
	CreateDynamicObject(7191, 1426.2177734, -1457.3769531, 1614.4053955, 90.0000000, 179.9945068, 359.9890137);
	CreateDynamicObject(7191, 1426.1927490, -1457.3767090, 1614.4053955, 90.0000000, 180.0054932, 179.9780273);
	CreateDynamicObject(7191, 1428.0070801, -1460.9328613, 1594.1313477, 90.0000000, 180.0054932, 269.9890442);
	CreateDynamicObject(7191, 1428.0412598, -1460.8847656, 1594.1318359, 90.0000000, 179.9945068, 89.9945068);
	CreateDynamicObject(7191, 1431.6250000, -1460.9365234, 1614.9812012, 90.0000000, 179.9945068, 270.0000000);
	CreateDynamicObject(7191, 1431.6505127, -1460.9017334, 1614.9812012, 90.0000000, 179.9945068, 90.0000000);
	CreateDynamicObject(7191, 1427.7677002, -1460.9324951, 1639.9559326, 270.0000000, 179.9995728, 269.9885254);
	CreateDynamicObject(7191, 1425.0917969, -1460.9228516, 1639.9559326, 270.0000000, 180.0054932, 269.9890137);
	CreateDynamicObject(7191, 1427.7093506, -1460.9039307, 1639.9809570, 270.0000000, 180.0014648, 89.9904785);
	CreateDynamicObject(7191, 1421.3723145, -1459.4096680, 1640.0810547, 270.0000000, 180.0000000, 89.9890442);
	CreateDynamicObject(7191, 1421.2452393, -1459.4218750, 1640.0810547, 270.0000000, 180.0000000, 269.9890137);
	CreateDynamicObject(2395, 1427.5772705, -1461.0162354, 1615.4383545, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(1649, 1428.7719727, -1460.9821777, 1616.9980469, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(1649, 1428.7729492, -1460.9567871, 1616.9980469, 0.0000000, 0.0000000, 180.0000000);
	CreateDynamicObject(1491, 1433.5537109, -1460.8779297, 1615.3189697, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(7191, 1433.5488281, -1457.4218750, 1614.4053955, 90.0000000, 180.0054932, 359.9670410);
	CreateDynamicObject(7191, 1433.5260010, -1457.4116211, 1614.4053955, 90.0000000, 179.9945068, 179.9780273);
	CreateDynamicObject(7191, 1433.5546875, -1459.0332031, 1639.9559326, 270.0000000, 179.9985352, 359.9874878);
	CreateDynamicObject(7191, 1433.5048828, -1459.0286865, 1639.9559326, 270.0000000, 179.9985352, 179.9874878);
	CreateDynamicObject(13007, 1430.8962402, -1451.1616211, 1613.1350098, 0.0000000, 0.0000000, 359.9945068);
	CreateDynamicObject(13007, 1442.7113037, -1451.1556396, 1613.1099854, 0.0000000, 0.0000000, 359.9890137);
	CreateDynamicObject(1536, 1434.9121094, -1457.1562500, 1615.2620850, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(1567, 1439.9428711, -1460.5157471, 1615.0570068, 0.0000000, 0.0000000, 241.2500000);
	CreateDynamicObject(1567, 1437.4666748, -1460.5045166, 1615.0570068, 0.0000000, 0.0000000, 359.9963379);
	CreateDynamicObject(7191, 1437.5939941, -1458.5607910, 1595.6303711, 90.0000000, 180.0054932, 359.9670410);
	CreateDynamicObject(7191, 1437.5689697, -1458.5572510, 1595.6303711, 90.0000000, 180.0054932, 179.9670410);
	CreateDynamicObject(7191, 1428.0070801, -1460.9328613, 1594.1313477, 90.0000000, 180.0054932, 269.9890442);
	CreateDynamicObject(7191, 1440.0966797, -1462.1289062, 1614.4053955, 90.0000000, 179.9945068, 359.9780273);
	CreateDynamicObject(7191, 1440.0544434, -1462.1169434, 1614.4053955, 90.0000000, 179.9945068, 179.9780273);
	CreateDynamicObject(1502, 1440.0722656, -1464.0230713, 1615.3072510, 0.0000000, 0.0000000, 270.0000000);
	CreateDynamicObject(1502, 1440.1240234, -1467.0253906, 1615.3072510, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(7191, 1440.0805664, -1465.2288818, 1639.9559326, 270.0000000, 179.9985352, 359.9874878);
	CreateDynamicObject(7191, 1440.0541992, -1465.2526855, 1639.9559326, 270.0000000, 179.9996338, 179.9885254);
	CreateDynamicObject(7191, 1440.0797119, -1468.9716797, 1614.4053955, 90.0000000, 180.0054932, 359.9670410);
	CreateDynamicObject(7191, 1440.0478516, -1468.9677734, 1614.4053955, 90.0000000, 180.0054932, 179.9615479);
	CreateDynamicObject(7191, 1446.0732422, -1462.0136719, 1617.2097168, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(7191, 1446.0732422, -1462.0136719, 1621.1601562, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(1569, 1446.0191650, -1467.0644531, 1615.3072510, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(1569, 1446.0124512, -1464.0634766, 1615.3072510, 0.0000000, 0.0000000, 270.0000000);
	CreateDynamicObject(2773, 1442.2539062, -1465.4960938, 1615.7994385, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(2773, 1441.3217773, -1467.8122559, 1615.7994385, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(2773, 1441.3377686, -1463.3662109, 1615.7994385, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(7191, 1462.2470703, -1460.4736328, 1619.6086426, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(2368, 1445.3759766, -1460.2324219, 1615.2528076, 0.0000000, 0.0000000, 179.9945068);
	CreateDynamicObject(2368, 1442.5487061, -1460.2370605, 1615.2528076, 0.0000000, 0.0000000, 179.9945068);
	CreateDynamicObject(18070, 1448.5996094, -1458.0546875, 1615.8320312, 0.0000000, 0.0000000, 180.7470703);
	CreateDynamicObject(1722, 1444.6982422, -1469.5671387, 1615.3072510, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(1722, 1443.9117432, -1469.5560303, 1615.3072510, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(1722, 1443.1766357, -1469.5391846, 1615.3072510, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(1722, 1442.4182129, -1469.5500488, 1615.3072510, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(949, 1440.5456543, -1469.2239990, 1615.9434814, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(2596, 1425.7331543, -1469.5227051, 1617.9492188, 0.0000000, 0.0000000, 140.0000000);
	CreateDynamicObject(2818, 1445.7460938, -1466.0697021, 1615.3072510, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(2257, 1443.2313232, -1469.5782471, 1618.0195312, 0.0000000, 0.0000000, 180.0000000);
	CreateDynamicObject(1722, 1441.6676025, -1469.5275879, 1615.3072510, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(949, 1445.5146484, -1469.0583496, 1615.9434814, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(1744, 1446.1517334, -1461.8934326, 1616.0469971, 0.0000000, 0.0000000, 270.0000000);
	CreateDynamicObject(2199, 1443.1087646, -1457.2410889, 1615.3072510, 0.0000000, 0.0000000, 359.0000000);
	CreateDynamicObject(2606, 1437.9735107, -1458.8436279, 1617.1849365, 0.0000000, 0.0000000, 89.7500000);
	CreateDynamicObject(1808, 1445.7926025, -1467.5563965, 1615.2822266, 0.0000000, 0.0000000, 270.0000000);
	CreateDynamicObject(949, 1440.4360352, -1462.1645508, 1615.9434814, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(2186, 1440.8079834, -1457.6450195, 1615.3692627, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(2165, 1445.5589600, -1458.1275635, 1615.5324707, 0.0000000, 0.0000000, 268.7500000);
	CreateDynamicObject(1806, 1443.8811035, -1458.5136719, 1615.2822266, 0.0000000, 0.0000000, 240.0000000);
	CreateDynamicObject(2185, 1439.7868652, -1457.6590576, 1615.3072510, 0.0000000, 0.0000000, 181.7500000);
	CreateDynamicObject(1806, 1439.0220947, -1459.0007324, 1615.2822266, 0.0000000, 0.0000000, 359.9963379);
	CreateDynamicObject(2614, 1440.2258301, -1465.5292969, 1618.8081055, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(2368, 1448.1687012, -1460.2210693, 1615.2528076, 0.0000000, 0.0000000, 179.9945068);
	CreateDynamicObject(2196, 1445.6363525, -1458.8933105, 1616.3447266, 0.0000000, 0.0000000, 232.7500000);
	CreateDynamicObject(16780, 1443.3220215, -1465.1861572, 1619.9155273, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(1723, 1426.7081299, -1458.9458008, 1615.3572998, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(1723, 1429.3132324, -1457.6577148, 1615.3572998, 0.0000000, 0.0000000, 0.2500000);
	CreateDynamicObject(949, 1432.5627441, -1457.5974121, 1615.9184570, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(1808, 1430.9270020, -1460.6057129, 1615.2822266, 0.0000000, 0.0000000, 180.0000000);
	CreateDynamicObject(2231, 1428.6539307, -1461.0516357, 1617.8575439, 0.0000000, 0.0000000, 180.0000000);
	CreateDynamicObject(2738, 1424.1912842, -1457.5739746, 1615.9602051, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(2828, 1445.6424561, -1459.4842529, 1616.3719482, 0.0000000, 0.0000000, 92.0000000);
	CreateDynamicObject(2855, 1441.0212402, -1469.2564697, 1615.3072510, 0.0000000, 0.0000000, 160.0000000);
	CreateDynamicObject(2853, 1439.3603516, -1457.6507568, 1616.1143799, 0.0000000, 0.0000000, 180.0000000);
	CreateDynamicObject(1800, 1425.3652344, -1460.5433350, 1615.3572998, 0.0000000, 0.0000000, 359.0000000);
	CreateDynamicObject(2518, 1422.4659424, -1457.6859131, 1615.3572998, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(2911, 1422.0992432, -1460.6550293, 1615.3322754, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(2204, 1424.9895020, -1465.0786133, 1615.1157227, 0.0000000, 0.0000000, 270.0000000);
	CreateDynamicObject(2204, 1424.9759521, -1462.9609375, 1614.5151367, 0.0000000, 0.0000000, 270.0000000);
	CreateDynamicObject(2204, 1424.9774170, -1467.2524414, 1614.5401611, 0.0000000, 0.0000000, 270.0000000);
	CreateDynamicObject(2204, 1426.9980469, -1462.9410400, 1614.3649902, 0.0000000, 0.0000000, 180.0000000);
	CreateDynamicObject(2204, 1429.9478760, -1462.9298096, 1614.3649902, 0.0000000, 0.0000000, 179.9945068);
	CreateDynamicObject(2204, 1424.5594482, -1464.9271240, 1614.4901123, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(2204, 1424.5557861, -1467.0566406, 1615.0906982, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(2204, 1424.5660400, -1469.2221680, 1614.5151367, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(2204, 1430.8729248, -1462.7087402, 1614.3649902, 0.0000000, 0.0000000, 269.9945068);
	CreateDynamicObject(2204, 1430.8322754, -1467.3721924, 1614.3649902, 0.0000000, 0.0000000, 269.9890137);
	CreateDynamicObject(2204, 1430.4104004, -1469.3361816, 1614.3399658, 0.0000000, 0.0000000, 89.9890137);
	CreateDynamicObject(2204, 1430.4569092, -1464.6726074, 1614.3399658, 0.0000000, 0.0000000, 89.9890137);
	CreateDynamicObject(1491, 1430.6772461, -1462.5290527, 1613.6428223, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(2205, 1428.2191162, -1464.9471436, 1615.3072510, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(2205, 1428.1341553, -1468.9221191, 1615.3072510, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(1714, 1423.2902832, -1466.2514648, 1615.9573975, 0.0000000, 0.0000000, 91.7500000);
	CreateDynamicObject(1663, 1423.4685059, -1463.6612549, 1616.0172119, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(1715, 1429.8437500, -1463.8223877, 1615.3072510, 0.0000000, 0.0000000, 270.0000000);
	CreateDynamicObject(1715, 1429.8929443, -1465.0079346, 1615.3072510, 0.0000000, 0.0000000, 270.0000000);
	CreateDynamicObject(1715, 1429.7202148, -1467.6260986, 1615.3072510, 0.0000000, 0.0000000, 270.0000000);
	CreateDynamicObject(1715, 1429.7415771, -1468.6763916, 1615.3072510, 0.0000000, 0.0000000, 270.0000000);
	CreateDynamicObject(1715, 1427.7830811, -1461.3129883, 1615.3072510, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(1715, 1426.8801270, -1461.2830811, 1615.3072510, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(1715, 1425.9743652, -1461.2800293, 1615.3072510, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(1715, 1424.9727783, -1461.2083740, 1615.3072510, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(7191, 1437.2891846, -1457.0878906, 1617.0595703, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(7191, 1437.2890625, -1457.0878906, 1621.0119629, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(2748, 1432.5021973, -1467.5581055, 1615.8800049, 0.0000000, 0.0000000, 270.0000000);
	CreateDynamicObject(2748, 1432.5148926, -1469.1064453, 1615.8800049, 0.0000000, 0.0000000, 270.0000000);
	CreateDynamicObject(2748, 1432.4923096, -1464.3041992, 1615.8800049, 0.0000000, 0.0000000, 270.0000000);
	CreateDynamicObject(2748, 1432.4868164, -1463.7509766, 1615.8800049, 0.0000000, 0.0000000, 270.0000000);
	CreateDynamicObject(2748, 1434.9233398, -1463.7482910, 1615.8800049, 0.0000000, 0.0000000, 270.0000000);
	CreateDynamicObject(2748, 1434.9169922, -1464.3952637, 1615.8800049, 0.0000000, 0.0000000, 270.0000000);
	CreateDynamicObject(2748, 1434.8991699, -1467.5417480, 1615.8800049, 0.0000000, 0.0000000, 270.0000000);
	CreateDynamicObject(2748, 1434.9039307, -1469.0920410, 1615.8800049, 0.0000000, 0.0000000, 270.0000000);
	CreateDynamicObject(2748, 1437.1959229, -1463.7338867, 1615.8800049, 0.0000000, 0.0000000, 270.0000000);
	CreateDynamicObject(2748, 1437.1929932, -1464.3585205, 1615.8800049, 0.0000000, 0.0000000, 270.0000000);
	CreateDynamicObject(2748, 1437.2941895, -1467.4959717, 1615.8800049, 0.0000000, 0.0000000, 270.0000000);
	CreateDynamicObject(2748, 1437.3001709, -1469.0249023, 1615.8800049, 0.0000000, 0.0000000, 270.0000000);
	CreateDynamicObject(949, 1439.6000977, -1469.1203613, 1615.9434814, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(949, 1439.6320801, -1462.3918457, 1615.9434814, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(1808, 1439.7879639, -1467.3641357, 1615.2822266, 0.0000000, 0.0000000, 270.0000000);
	CreateDynamicObject(955, 1437.0357666, -1457.8698730, 1615.6826172, 0.0000000, 0.0000000, 267.0000000);
	CreateDynamicObject(956, 1437.0462646, -1459.6529541, 1615.7326660, 0.0000000, 0.0000000, 270.0000000);
	CreateDynamicObject(949, 1434.1186523, -1457.7692871, 1615.9434814, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(2204, 1433.3977051, -1462.9284668, 1614.3649902, 0.0000000, 0.0000000, 179.9945068);
	CreateDynamicObject(2204, 1436.3273926, -1462.9224854, 1614.3649902, 0.0000000, 0.0000000, 179.9945068);
	CreateDynamicObject(2204, 1437.3845215, -1462.9106445, 1614.3399658, 0.0000000, 0.0000000, 179.9945068);
	CreateDynamicObject(2204, 1435.4145508, -1462.4875488, 1614.3149414, 0.0000000, 0.0000000, 359.9945068);
	CreateDynamicObject(2204, 1432.5063477, -1462.5025635, 1614.3149414, 0.0000000, 0.0000000, 359.9890137);
	CreateDynamicObject(2204, 1431.3596191, -1462.5272217, 1614.3149414, 0.0000000, 0.0000000, 359.9890137);
	CreateDynamicObject(2614, 1425.1400146, -1466.2191162, 1616.0954590, 0.0000000, 0.0000000, 90.0000000);
	CreateDynamicObject(3027, 1446.8895264, -1462.6232910, 1612.5847168, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(2352, 1424.7546387, -1465.6657715, 1616.9150391, 358.0010071, 89.9369507, 269.9988403);
	CreateDynamicObject(2894, 1424.7946777, -1466.4781494, 1616.9056396, 0.0000000, 0.0000000, 270.0000000);
	CreateDynamicObject(2254, 1429.8028564, -1457.2020264, 1617.9412842, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(976, 1414.4863281, -1459.4875488, 1612.1719971, 0.0000000, 0.0000000, 0.0000000);
	CreateDynamicObject(3850, 1443.9306641, -1460.5810547, 1617.5115967, 0.0000000, 0.0000000, 0.0000000);
	CreatePickup(1239, 1, 1423.1179, -1458.7749, 1616.3573, 0);
	CreateDynamic3DTextLabel("SCOTUS Arrest Point\n{FFFFFF}Use /arrest", 0x43527DFF, 1423.1179, -1458.7749, 1616.3573 + 0.60, 20.0, INVALID_PLAYER_ID, INVALID_VEHICLE_ID, 1, -1, -1, -1, 100);
	return 1;
}
stock LoadSANGExterior()
{
	CreateDynamicObject(7981, 343.23999, 1798.23999, 21.67890,   0.00000, 0.00000, -50.00000);
	CreateDynamicObject(1682, 346.40485, 1796.10852, 33.41790,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(10401, 141.01460, 1959.37292, 20.56560,   0.00000, 0.00000, -45.00000);
	CreateDynamicObject(9245, 280.03369, 1929.39282, 28.44370,   0.00000, 0.05000, 144.50000);
	CreateDynamicObject(19313, 143.26810, 1948.28015, 18.58170,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(8168, 125.15070, 1945.43018, 20.17570,   0.00000, 0.00000, 106.00000);
	CreateDynamicObject(19313, 143.26810, 1962.29102, 18.58170,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(7657, 127.38960, 1959.21252, 19.93800,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(973, 128.58971, 1953.75513, 19.03500,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(973, 128.58971, 1963.13989, 19.03500,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(1250, 128.79500, 1968.32776, 18.52660,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1250, 142.14600, 1968.32800, 18.52660,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(973, 142.03970, 1963.13989, 19.03500,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(973, 141.97301, 1953.75525, 19.03500,   0.00000, 0.00000, 89.20000);
	CreateDynamicObject(966, 142.19769, 1948.71436, 18.38840,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(966, 128.29770, 1948.71436, 18.38840,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(19425, 133.72060, 1963.40906, 18.51590,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19425, 130.42059, 1963.40906, 18.51590,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19425, 137.02060, 1963.40906, 18.51590,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19425, 140.27060, 1963.40906, 18.51590,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19280, 127.57190, 1949.51904, 21.73850,   -30.00000, 180.00000, -90.00000);
	CreateDynamicObject(19280, 127.57190, 1953.86914, 21.73850,   -30.00000, 180.00000, -90.00000);
	CreateDynamicObject(19280, 127.57190, 1954.51904, 21.73850,   -30.00000, 180.00000, -90.00000);
	CreateDynamicObject(19280, 127.57190, 1958.81909, 21.73850,   -30.00000, 180.00000, -90.00000);
	CreateDynamicObject(19280, 127.57190, 1959.51904, 21.73850,   -30.00000, 180.00000, -90.00000);
	CreateDynamicObject(19280, 127.57190, 1963.81897, 21.73850,   -30.00000, 180.00000, -90.00000);
	CreateDynamicObject(19280, 127.57190, 1968.81897, 21.73850,   -30.00000, 180.00000, -90.00000);
	CreateDynamicObject(19280, 127.57190, 1964.51904, 21.73850,   -30.00000, 180.00000, -90.00000);
	CreateDynamicObject(19280, 143.12190, 1969.01904, 21.63850,   -30.00000, 180.00000, 90.00000);
	CreateDynamicObject(19280, 143.12190, 1964.71899, 21.63850,   -30.00000, 180.00000, 90.00000);
	CreateDynamicObject(19280, 143.12190, 1964.01904, 21.63850,   -30.00000, 180.00000, 90.00000);
	CreateDynamicObject(19280, 143.12190, 1959.71899, 21.63850,   -30.00000, 180.00000, 90.00000);
	CreateDynamicObject(19280, 143.12190, 1959.01904, 21.63850,   -30.00000, 180.00000, 90.00000);
	CreateDynamicObject(19280, 143.12190, 1954.71899, 21.63850,   -30.00000, 180.00000, 90.00000);
	CreateDynamicObject(19280, 143.12190, 1954.01904, 21.63850,   -30.00000, 180.00000, 90.00000);
	CreateDynamicObject(19280, 143.12190, 1949.76904, 21.63850,   -30.00000, 180.00000, 90.00000);
	CreateDynamicObject(1622, 128.11760, 1943.14355, 22.41970,   9.85000, -14.85000, 202.30000);
	CreateDynamicObject(8169, 125.15070, 1945.43018, 18.42570,   0.00000, 0.00000, 106.00000);
	CreateDynamicObject(11488, 113.61050, 1945.19666, 18.15100,   -2.50000, 0.00000, 75.10000);
	CreateDynamicObject(11488, 113.62300, 1945.16199, 17.68000,   -2.50000, 0.00000, 75.10000);
	//Signs
	CreateDynamicObject(3264, 127.34450, 1976.34558, 18.47180,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(3264, -92.04690, 2072.03125, 16.67190,   356.85840, 0.00000, -90.08730);
	//Car park
	CreateDynamicObject(8658, 125.94800, 1832.84180, 16.36340,   0.02500, 0.00000, 90.00000);
	CreateDynamicObject(8658, 137.29800, 1832.84180, 16.36340,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(8658, 111.10500, 1835.74182, 16.36340,   -0.05000, 0.00000, 0.00000);
	CreateDynamicObject(8658, 131.61160, 1883.02893, 16.90000,   2.35000, -1.10000, 0.00000);
	CreateDynamicObject(8658, 111.10500, 1853.59180, 16.40000,   1.10000, -1.10000, 0.00000);
	CreateDynamicObject(1214, 111.14462, 1868.83142, 16.83452,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1214, 138.50420, 1861.69482, 16.65500,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1214, 138.50420, 1863.64478, 16.65500,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1214, 138.50420, 1865.59485, 16.65500,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1214, 138.50420, 1867.34485, 16.65500,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19353, 113.20010, 1865.65552, 15.06700,   0.00000, -0.40000, 90.00000);
	CreateDynamicObject(19353, 116.40010, 1865.65552, 15.06700,   0.00000, -0.40000, 90.00000);
	CreateDynamicObject(19353, 116.40010, 1862.05554, 15.02900,   0.00000, -0.40000, 90.00000);
	CreateDynamicObject(19353, 113.20010, 1862.05554, 15.02900,   0.00000, -0.40000, 90.00000);
	CreateDynamicObject(19353, 116.40010, 1858.45544, 14.99600,   0.00000, -0.40000, 90.00000);
	CreateDynamicObject(19353, 113.20010, 1858.45544, 14.99600,   0.00000, -0.40000, 90.00000);
	CreateDynamicObject(19353, 116.40010, 1854.85547, 14.96200,   0.00000, -0.40000, 90.00000);
	CreateDynamicObject(19353, 116.40010, 1851.25549, 14.93050,   0.00000, -0.40000, 90.00000);
	CreateDynamicObject(19353, 116.40010, 1847.65552, 14.90000,   0.00000, -0.40000, 90.00000);
	CreateDynamicObject(19353, 116.40010, 1840.45544, 14.89000,   0.00000, -0.40000, 90.00000);
	CreateDynamicObject(19353, 116.40010, 1844.05554, 14.89000,   0.00000, -0.40000, 90.00000);
	CreateDynamicObject(19353, 116.40010, 1836.85547, 14.89000,   0.00000, -0.40000, 90.00000);
	CreateDynamicObject(19353, 116.40010, 1833.25549, 14.89000,   0.00000, -0.40000, 90.00000);
	CreateDynamicObject(19353, 113.20010, 1833.25549, 14.89000,   0.00000, -0.40000, 90.00000);
	CreateDynamicObject(19353, 113.20010, 1836.85547, 14.89000,   0.00000, -0.40000, 90.00000);
	CreateDynamicObject(19353, 113.25010, 1840.45544, 14.89000,   0.00000, -0.40000, 90.00000);
	CreateDynamicObject(19353, 113.20010, 1844.05554, 14.89000,   0.00000, -0.40000, 90.00000);
	CreateDynamicObject(19353, 113.20010, 1847.65552, 14.90000,   0.00000, -0.40000, 90.00000);
	CreateDynamicObject(19353, 113.20010, 1851.25549, 14.93050,   0.00000, -0.40000, 90.00000);
	CreateDynamicObject(19353, 113.20010, 1854.85547, 14.96200,   0.00000, -0.40000, 90.00000);
	//Radar Dish
	CreateDynamicObject(1682, 346.40485, 1796.10852, 33.41790,   0.00000, 0.00000, 0.00000);
	//Control tower
	CreateDynamicObject(9245, 280.03369, 1929.39282, 28.44370,   0.00000, 0.05000, 144.50000);
	SANGBarriers[1] = CreateDynamicObject(968, 128.14999, 1948.71436, 19.13840,   0.00000, 90.00000, 0.00000);
	SANGBarriers[2] = CreateDynamicObject(968, 142.35001, 1948.71436, 19.13840,   0.00000, 90.00000, 180.00000);
	return 1;
}
