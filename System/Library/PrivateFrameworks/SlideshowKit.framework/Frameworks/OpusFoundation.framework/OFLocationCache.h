/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:54 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <OpusFoundation/OpusFoundation-Structs.h>
@class NSString, NSManagedObjectModel, NSManagedObjectContext, NSPersistentStoreCoordinator, NSPredicate;

@interface OFLocationCache : NSObject {

	NSString* _diskCacheFilepath;
	NSManagedObjectModel* _managedObjectModel;
	NSManagedObjectContext* _managedObjectContext;
	NSManagedObjectContext* _parentManagedObjectContext;
	NSPersistentStoreCoordinator* _persistentStoreCoordinator;
	NSPredicate* _predicateEntryTemplate;
	NSPredicate* _predicateEntryWithLocalRegionTemplate;

}

@property (nonatomic,retain) NSManagedObjectModel * managedObjectModel;                              //@synthesize managedObjectModel=_managedObjectModel - In the implementation block
@property (nonatomic,retain) NSManagedObjectContext * managedObjectContext;                          //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (nonatomic,retain) NSPersistentStoreCoordinator * persistentStoreCoordinator;              //@synthesize persistentStoreCoordinator=_persistentStoreCoordinator - In the implementation block
+(id)defaultCache;
-(id)init;
-(void)dealloc;
-(BOOL)save;
-(NSManagedObjectModel *)managedObjectModel;
-(void)setPersistentStoreCoordinator:(NSPersistentStoreCoordinator *)arg1 ;
-(NSPersistentStoreCoordinator *)persistentStoreCoordinator;
-(void)setManagedObjectModel:(NSManagedObjectModel *)arg1 ;
-(NSManagedObjectContext *)managedObjectContext;
-(BOOL)_save;
-(void)setManagedObjectContext:(NSManagedObjectContext *)arg1 ;
-(void)invalidateDiskCaches;
-(void)invalidateMemoryCaches;
-(void)invalidateCacheForLocationCoordinate:(CLLocationCoordinate2D)arg1 ;
-(void)setPlacemarks:(id)arg1 forLocationCoordinate:(CLLocationCoordinate2D)arg2 ;
-(id)placemarksForLocationCoordinate:(CLLocationCoordinate2D)arg1 ;
-(id)placemarksForLocationCoordinate:(CLLocationCoordinate2D)arg1 andAccuracy:(double)arg2 ;
-(void)_didEnterBackgroundNotification;
-(void)_willTerminateNotification;
-(id)initWithDiskCacheFilepath:(id)arg1 ;
-(id)placemarksForLocationCoordinate:(CLLocationCoordinate2D)arg1 andAccuracy:(double)arg2 closestResultDistance:(double*)arg3 numberOfResults:(unsigned long long*)arg4 ;
@end
