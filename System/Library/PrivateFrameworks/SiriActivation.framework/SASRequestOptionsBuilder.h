/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:42 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class SASSystemState;

@interface SASRequestOptionsBuilder : NSObject {

	SASSystemState* _systemState;
	long long _presentationIdentifier;

}

@property (nonatomic,retain) SASSystemState * systemState;                  //@synthesize systemState=_systemState - In the implementation block
@property (assign,nonatomic) long long presentationIdentifier;              //@synthesize presentationIdentifier=_presentationIdentifier - In the implementation block
-(SASSystemState *)systemState;
-(void)setSystemState:(SASSystemState *)arg1 ;
-(BOOL)_siriIsEnabled;
-(void)setPresentationIdentifier:(long long)arg1 ;
-(id)_createRequestOptionsForRequest:(id)arg1 withDataSource:(id)arg2 ;
-(long long)presentationIdentifier;
-(id)buildOptionsWithRequest:(id)arg1 presentationIdentifier:(long long)arg2 dataSource:(id)arg3 ;
@end

