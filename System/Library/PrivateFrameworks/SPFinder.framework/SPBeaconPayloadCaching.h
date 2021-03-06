/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:00 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SPFinder.framework/SPFinder
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SPBeaconPayloadCaching <NSObject>
@required
-(void)saveBeaconPayloads:(id)arg1 completion:(/*^block*/id)arg2;
-(void)beaconPayloadsForSearchCriteria:(id)arg1 completion:(/*^block*/id)arg2;
-(void)beaconAdvertisementAtFileURL:(id)arg1 beaconIdentifier:(id)arg2 scanDate:(id)arg3 completion:(/*^block*/id)arg4;
-(void)markBeaconPayloadsProcessed:(id)arg1 completion:(/*^block*/id)arg2;

@end

