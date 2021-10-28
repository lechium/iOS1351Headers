/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:32 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MDM.framework/MDM
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MDM/MCSSRequestDelegate.h>
#import <libobjc.A.dylib/SSPersonalizeOffersDelegate.h>

@class SSPersonalizeOffersResponse, SSPersonalizeOffersRequest, NSString;

@interface MCSSPersonalizeOffersDelegate : MCSSRequestDelegate <SSPersonalizeOffersDelegate> {

	SSPersonalizeOffersResponse* _response;

}

@property (nonatomic,retain,readonly) SSPersonalizeOffersRequest * request; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithItems:(id)arg1 ;
-(void)personalizeOffersRequest:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)startCompletionBlock:(/*^block*/id)arg1 ;
@end
