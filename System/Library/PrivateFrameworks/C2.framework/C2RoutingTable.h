/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:12 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/C2.framework/C2
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface C2RoutingTable : NSObject {

	NSMutableDictionary* _routingTable;

}

@property (nonatomic,retain) NSMutableDictionary * routingTable;              //@synthesize routingTable=_routingTable - In the implementation block
-(id)init;
-(void)updateOriginalHostname:(id)arg1 destinationHostname:(id)arg2 ;
-(id)copyAndDecorateRequest:(id)arg1 ;
-(NSMutableDictionary *)routingTable;
-(void)setRoutingTable:(NSMutableDictionary *)arg1 ;
@end

