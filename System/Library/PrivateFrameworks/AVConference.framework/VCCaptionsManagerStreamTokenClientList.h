/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:58 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol VCCaptionsSource;
@class NSMutableArray, NSArray;

@interface VCCaptionsManagerStreamTokenClientList : NSObject {

	long long _streamToken;
	id<VCCaptionsSource> _captionsSource;
	NSMutableArray* _clientContextList;

}

@property (nonatomic,readonly) id<VCCaptionsSource> captionsSource;              //@synthesize captionsSource=_captionsSource - In the implementation block
@property (nonatomic,readonly) NSArray * clientContextList;                      //@synthesize clientContextList=_clientContextList - In the implementation block
+(BOOL)isValidContext:(id)arg1 ;
+(long long)streamTokenFromClientContext:(id)arg1 ;
-(void)dealloc;
-(void)removeContext:(id)arg1 ;
-(id)initWithStreamToken:(long long)arg1 captionsSource:(id)arg2 ;
-(id)newContext;
-(id<VCCaptionsSource>)captionsSource;
-(NSArray *)clientContextList;
@end
