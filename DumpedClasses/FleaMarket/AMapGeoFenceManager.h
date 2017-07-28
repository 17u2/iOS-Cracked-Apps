//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AMapGeoFenceRegionDelegate.h"
#import "AMapLocationManagerDelegate.h"
#import "AMapLocationSearchManagerDelegate.h"

@class AMapLocationManager, AMapLocationSearchManager, CLLocation, NSMapTable, NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface AMapGeoFenceManager : NSObject <AMapLocationManagerDelegate, AMapGeoFenceRegionDelegate, AMapLocationSearchManagerDelegate>
{
    id <AMapGeoFenceManagerDelegate> _delegate;
    unsigned long long _activeAction;
    NSObject<OS_dispatch_queue> *_regionHandlingQueue;
    AMapLocationSearchManager *_searchManager;
    AMapLocationManager *_regionLocationManager;
    NSMutableArray *_monitoringRegions;
    NSMapTable *_regionIdentifiers;
    CLLocation *_latestLocation;
}

@property(retain, nonatomic) CLLocation *latestLocation; // @synthesize latestLocation=_latestLocation;
@property(retain, nonatomic) NSMapTable *regionIdentifiers; // @synthesize regionIdentifiers=_regionIdentifiers;
@property(retain, nonatomic) NSMutableArray *monitoringRegions; // @synthesize monitoringRegions=_monitoringRegions;
@property(retain, nonatomic) AMapLocationManager *regionLocationManager; // @synthesize regionLocationManager=_regionLocationManager;
@property(retain, nonatomic) AMapLocationSearchManager *searchManager; // @synthesize searchManager=_searchManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *regionHandlingQueue; // @synthesize regionHandlingQueue=_regionHandlingQueue;
@property(nonatomic) unsigned long long activeAction; // @synthesize activeAction=_activeAction;
@property(nonatomic) __weak id <AMapGeoFenceManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)monitoringGeoFenceRegionWithCustomID:(id)arg1 block:(CDUnknownBlockType)arg2;
@property(readonly, copy) NSString *description;
- (void)stopAndExitAllCLM;
- (void)deallocOperation;
- (void)dealloc;
- (void)amapGeoFenceRegionStatusDidChangedToStayed:(id)arg1;
- (void)amapLocationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)amapLocationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)amapLocationManager:(id)arg1 didUpdateLocation:(id)arg2 reGeocode:(id)arg3;
- (id)sameFenceRegionWithRegion:(id)arg1;
- (void)notifyDelegateWhenRegionStatusChange:(id)arg1;
- (void)notifyDelegateWhenRegionsAddFailed:(id)arg1 customID:(id)arg2;
- (void)notifyDelegateWhenRegionsAddSuccess:(id)arg1 customID:(id)arg2;
- (void)handleToSavingPowerWithMinDistance:(double)arg1;
- (void)processMonitoringRegionsWithLocation:(id)arg1;
- (void)removeAllMonitoringRegions;
- (void)removeRegion:(id)arg1;
- (void)addRegion:(id)arg1;
- (void)startMonitoringForRegion:(id)arg1;
- (id)errorWithErrorCode:(long long)arg1 info:(id)arg2;
- (void)createPOIOrDistrictRegionsWithRequest:(id)arg1 searchResult:(id)arg2;
- (void)onDistrictSearchDone:(id)arg1 result:(id)arg2;
- (void)onPOIAroundSearchDone:(id)arg1 result:(id)arg2;
- (void)onPOIKeywordsSearchDone:(id)arg1 result:(id)arg2;
- (void)locationSearchRequest:(id)arg1 didFailWithError:(id)arg2;
- (void)removeAllGeoFenceRegions;
- (void)removeGeoFenceRegionsWithCustomID:(id)arg1;
- (void)removeTheGeoFenceRegion:(id)arg1;
- (id)geoFenceRegionsWithCustomID:(id)arg1;
- (void)addDistrictRegionForMonitoringWithDistrictName:(id)arg1 customID:(id)arg2;
- (void)addAroundPOIRegionForMonitoringWithLocationPoint:(struct CLLocationCoordinate2D)arg1 aroundRadius:(long long)arg2 keyword:(id)arg3 POIType:(id)arg4 size:(long long)arg5 customID:(id)arg6;
- (void)addKeywordPOIRegionForMonitoringWithKeyword:(id)arg1 POIType:(id)arg2 city:(id)arg3 size:(long long)arg4 customID:(id)arg5;
- (void)addPolygonRegionForMonitoringWithCoordinates:(struct CLLocationCoordinate2D *)arg1 count:(long long)arg2 customID:(id)arg3;
- (void)addCircleRegionForMonitoringWithCenter:(struct CLLocationCoordinate2D)arg1 radius:(double)arg2 customID:(id)arg3;
@property(nonatomic) _Bool detectRiskOfFakeLocation;
@property(nonatomic) _Bool allowsBackgroundLocationUpdates;
@property(nonatomic) _Bool pausesLocationUpdatesAutomatically;
- (void)stopRegionCLManager;
- (void)startRegionCLManager;
- (void)initRegionCLManager;
- (void)initProperties;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
