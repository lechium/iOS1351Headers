/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:25 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Network.framework/Network
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface NWPHHandler : NSObject {

	NSArray* _allowedEntitlementGroup;
	/*function pointer*/void* _handlerFunction;

}

@property (retain) NSArray * allowedEntitlementGroup;                      //@synthesize allowedEntitlementGroup=_allowedEntitlementGroup - In the implementation block
@property (assign) /*function pointer*/void* handlerFunction;              //@synthesize handlerFunction=_handlerFunction - In the implementation block
-(id)initWithHandlerFunction:(/*function pointer*/void*)arg1 allowedEntitlementGroup:(id)arg2 ;
-(NSArray *)allowedEntitlementGroup;
-(void)setAllowedEntitlementGroup:(NSArray *)arg1 ;
-(/*function pointer*/void*)handlerFunction;
-(void)setHandlerFunction:(/*function pointer*/void*)arg1 ;
@end

