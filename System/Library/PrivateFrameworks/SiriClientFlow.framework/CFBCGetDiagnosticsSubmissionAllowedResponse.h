/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:53 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseCommand.h>
#import <libobjc.A.dylib/SAServerBoundCommand.h>

@class NSString;

@interface CFBCGetDiagnosticsSubmissionAllowedResponse : SABaseCommand <SAServerBoundCommand>

@property (assign,nonatomic) BOOL allowed; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)aceObjectWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)getDiagnosticsSubmissionAllowedResponse;
+(id)getDiagnosticsSubmissionAllowedResponseWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setAllowed:(BOOL)arg1 ;
-(BOOL)allowed;
@end

