/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:03 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UIWebClip, NSError;

@interface SBFWebClipSanitationReport : NSObject {

	UIWebClip* _webClip;
	long long _result;
	NSError* _error;

}

@property (nonatomic,readonly) UIWebClip * webClip;               //@synthesize webClip=_webClip - In the implementation block
@property (nonatomic,readonly) long long result;                  //@synthesize result=_result - In the implementation block
@property (nonatomic,copy,readonly) NSError * error;              //@synthesize error=_error - In the implementation block
-(id)description;
-(NSError *)error;
-(long long)result;
-(id)initWithWebClip:(id)arg1 result:(long long)arg2 error:(id)arg3 ;
-(UIWebClip *)webClip;
@end

