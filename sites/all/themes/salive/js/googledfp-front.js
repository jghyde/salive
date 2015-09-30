var googletag = googletag || {};
googletag.cmd = googletag.cmd || [];
(function() {
var gads = document.createElement('script');
gads.async = true;
gads.type = 'text/javascript';
var useSSL = 'https:' == document.location.protocol;
gads.src = (useSSL ? 'https:' : 'http:') + 
'//www.googletagservices.com/tag/js/gpt.js';
var node = document.getElementsByTagName('script')[0];
node.parentNode.insertBefore(gads, node);
})();
 
googletag.cmd.push(function() {
  var width = document.documentElement.clientWidth;
  var box;
  	if (width >= 320 && width < 991) 
		box = [300, 250]; 
		else if (width > 991  && width <1199) 
	  box = [180, 150];
	else
		box = [300, 250];
	var ban;
  	if (width >= 320 && width < 991) 
		ban = [300, 250]; 
		else if (width > 992 && width < 1199) 
	  ban = [485, 60];
		else if (width > 1200 && width < 1585)
		ban = [647, 80];
	else
		ban = [728, 90];
	var banwl;
  	if (width >= 320 && width < 991) 
		banwl = [300, 250]; 
		else if (width > 992 && width < 1199) 
	  banwl = [580, 112];
		else if (width > 1200 && width < 1585)
		banwl = [710, 137];
	else
		banwl = [930, 180];
	var banwlb;
  	if (width >= 320 && width < 991) 
		banwlb = [300, 250]; 
		else if (width > 992 && width < 1199) 
	  banwlb = [620, 120];
		else if (width > 1200 && width < 1585)
		banwlb = [775, 150];
	else
		banwlb = [930, 180];
	var banst;
  	if (width >= 320 && width < 991) 
		banst = [300, 100]; 
		else if (width > 992 && width < 1199) 
	  banst = [190, 63];
		else if (width > 1200 && width < 1585)
		banst = [240, 80];
	else
		banst = [300, 100];
	var slot1=googletag.defineSlot('/116956976/SALive_Breaking_News', [320, 50], 'div-gpt-ad-1425500431462-1').addService(googletag.pubads());
	var slot3=googletag.defineSlot('/116956976/SALive_B_Rail_1', box, 'div-gpt-ad-1425500431462-2').addService(googletag.pubads());
	var slot4=googletag.defineSlot('/116956976/SALive_B_Rail_2', box, 'div-gpt-ad-1425500431462-3').addService(googletag.pubads());
	var slot5=googletag.defineSlot('/116956976/SALive_B_Rail_3', box, 'div-gpt-ad-1425500431462-4').addService(googletag.pubads());
	var slot6=googletag.defineSlot('/116956976/SALive_B_Rail_4', box, 'div-gpt-ad-1425500431462-5').addService(googletag.pubads());
	// var slot7=googletag.defineSlot('/116956976/SALive_B_Rail_S', box, 'div-gpt-ad-1425500431462-6').addService(googletag.pubads());
	// var slot8=googletag.defineSlot('/116956976/SALive_BLW_Crash', banwl, 'div-gpt-ad-1425500431462-7').addService(googletag.pubads());
	var slot9=googletag.defineSlot('/116956976/SALive_BLW_Crime', banwl, 'div-gpt-ad-1425500431462-8').addService(googletag.pubads());
	var slot10=googletag.defineSlot('/116956976/SALive_BLW_Health', banwl, 'div-gpt-ad-1425500431462-9').addService(googletag.pubads());
	var slot11=googletag.defineSlot('/116956976/SALive_BLW_Hot_Rants', banwl, 'div-gpt-ad-1425500431462-10').addService(googletag.pubads());
	var slot12=googletag.defineSlot('/116956976/SALive_BLW_Most_Recent', banwlb, 'div-gpt-ad-1425500431462-11').addService(googletag.pubads());
	/* var slot13=googletag.defineSlot('/116956976/SALive_BLW_Story', banwl, 'div-gpt-ad-1425500431462-12').addService(googletag.pubads());
	var slot14=googletag.defineSlot('/116956976/SALive_BLW_Venue', ban, 'div-gpt-ad-1425500431462-13').addService(googletag.pubads());
	var slot15=googletag.defineSlot('/116956976/SALive_BLW_Weather', banwl, 'div-gpt-ad-1425500431462-14').addService(googletag.pubads());
	var slot16=googletag.defineSlot('/116956976/SALive_BST_Obit', banst, 'div-gpt-ad-1425500431462-15').addService(googletag.pubads());
	*/
  var slot17=googletag.defineSlot('/116956976/SALive_BST_Weather', banst, 'div-gpt-ad-1425500431462-16').addService(googletag.pubads());
	var slot18=googletag.defineSlot('/116956976/SALive_BW_Bottom', ban, 'div-gpt-ad-1425500431462-17').addService(googletag.pubads());
	var slot19=googletag.defineSlot('/116956976/SALive_BW_Top', ban, 'div-gpt-ad-1425500431462-18').addService(googletag.pubads());
  var slot20=googletag.defineSlot('/116956976/SALive_BLW_Crash_2', banwl, 'div-gpt-ad-1425500431462-19').addService(googletag.pubads());
	/* News Body
	var slot101=googletag.defineSlot('/116956976/SALive_B_News', [300, 250], 'div-gpt-ad-1425500431462-101').addService(googletag.pubads());
	var slot102=googletag.defineSlot('/116956976/SALive_B_News', [300, 250], 'div-gpt-ad-1425500431462-102').addService(googletag.pubads());
	var slot103=googletag.defineSlot('/116956976/SALive_B_News', [300, 250], 'div-gpt-ad-1425500431462-103').addService(googletag.pubads());
	var slot104=googletag.defineSlot('/116956976/SALive_B_News', [300, 250], 'div-gpt-ad-1425500431462-104').addService(googletag.pubads());
	var slot105=googletag.defineSlot('/116956976/SALive_B_News', [300, 250], 'div-gpt-ad-1425500431462-105').addService(googletag.pubads());
	var slot106=googletag.defineSlot('/116956976/SALive_B_News', [300, 250], 'div-gpt-ad-1425500431462-106').addService(googletag.pubads());
	var slot107=googletag.defineSlot('/116956976/SALive_B_News', [300, 250], 'div-gpt-ad-1425500431462-107').addService(googletag.pubads());
	var slot108=googletag.defineSlot('/116956976/SALive_B_News', [300, 250], 'div-gpt-ad-1425500431462-108').addService(googletag.pubads());
	var slot109=googletag.defineSlot('/116956976/SALive_B_News', [300, 250], 'div-gpt-ad-1425500431462-109').addService(googletag.pubads());
	var slot110=googletag.defineSlot('/116956976/SALive_B_News', [300, 250], 'div-gpt-ad-1425500431462-110').addService(googletag.pubads());
	var slot101=googletag.defineSlot('/116956976/SALive_B_News', [300, 250], 'div-gpt-ad-1425500431462-111').addService(googletag.pubads());
	var slot102=googletag.defineSlot('/116956976/SALive_B_News', [300, 250], 'div-gpt-ad-1425500431462-112').addService(googletag.pubads());
	var slot103=googletag.defineSlot('/116956976/SALive_B_News', [300, 250], 'div-gpt-ad-1425500431462-113').addService(googletag.pubads());
	var slot104=googletag.defineSlot('/116956976/SALive_B_News', [300, 250], 'div-gpt-ad-1425500431462-114').addService(googletag.pubads());
	var slot105=googletag.defineSlot('/116956976/SALive_B_News', [300, 250], 'div-gpt-ad-1425500431462-115').addService(googletag.pubads());
	var slot106=googletag.defineSlot('/116956976/SALive_B_News', [300, 250], 'div-gpt-ad-1425500431462-116').addService(googletag.pubads());
	var slot107=googletag.defineSlot('/116956976/SALive_B_News', [300, 250], 'div-gpt-ad-1425500431462-117').addService(googletag.pubads());
	var slot108=googletag.defineSlot('/116956976/SALive_B_News', [300, 250], 'div-gpt-ad-1425500431462-118').addService(googletag.pubads());
	var slot109=googletag.defineSlot('/116956976/SALive_B_News', [300, 250], 'div-gpt-ad-1425500431462-119').addService(googletag.pubads());
	var slot110=googletag.defineSlot('/116956976/SALive_B_News', [300, 250], 'div-gpt-ad-1425500431462-120').addService(googletag.pubads());
	// News Views
	var slot201=googletag.defineSlot('/116956976/SALive_BW_News', ban, 'div-gpt-ad-1425500431462-202').addService(googletag.pubads());
	var slot202=googletag.defineSlot('/116956976/SALive_BW_News', ban, 'div-gpt-ad-1425500431462-203').addService(googletag.pubads());
	var slot203=googletag.defineSlot('/116956976/SALive_BW_News', ban, 'div-gpt-ad-1425500431462-204').addService(googletag.pubads());
	var slot204=googletag.defineSlot('/116956976/SALive_BW_News', ban, 'div-gpt-ad-1425500431462-205').addService(googletag.pubads());
	// Obit View
	var slot301=googletag.defineSlot('/116956976/SALive_BW_Obit', ban, 'div-gpt-ad-1425500431462-302').addService(googletag.pubads());
	var slot302=googletag.defineSlot('/116956976/SALive_BW_Obit', ban, 'div-gpt-ad-1425500431462-303').addService(googletag.pubads());
	var slot303=googletag.defineSlot('/116956976/SALive_BW_Obit', ban, 'div-gpt-ad-1425500431462-304').addService(googletag.pubads());
	var slot304=googletag.defineSlot('/116956976/SALive_BW_Obit', ban, 'div-gpt-ad-1425500431462-305').addService(googletag.pubads());
	*/
  googletag.pubads().enableSingleRequest();
  googletag.enableServices();
});
  $(window).resize(function(){
		googletag.pubads().refresh([slot1, slot3, slot4, slot5, slot6, slot7, slot8, slot9, slot10, slot11, slot12, slot13, slot14, slot15, slot16, slot17, slot18, slot19, slot20, slot101, slot102, slot103, slot104, slot105, slot106, slot107, slot108, slot109, slot110, slot111, slot112, slot113, slot114, slot115, slot116, slot117, slot118, slot119, slot120, slot201, slot202, slot203, slot204, slot301, slot302, slot303, slot304]);
	})(jQuery);

