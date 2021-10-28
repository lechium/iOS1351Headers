/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:59 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PLIndexMappingCache <NSObject>
@property (nonatomic,copy,readonly) id<NSObject><NSCopying> cachedIndexMapState; 
@optional
-(id)currentStateForChange;

@required
-(BOOL)mappedDataSourceChanged:(id)arg1 remoteNotificationData:(id)arg2;
-(Class)derivedChangeNotificationClass;
-(id<NSObject><NSCopying>)cachedIndexMapState;

@end
