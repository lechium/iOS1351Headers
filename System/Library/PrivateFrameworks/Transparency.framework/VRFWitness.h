/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:16 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Transparency/GPBMessage.h>
#import <Transparency/TransparencyVerifiable.h>

@class TransparencyVRFVerifier, NSData;

@interface VRFWitness : GPBMessage <TransparencyVerifiable>

@property (retain) TransparencyVRFVerifier * verifier; 
@property (retain) NSData * message; 
@property (retain) NSData * salt; 
@property (assign,nonatomic) int type; 
@property (nonatomic,copy) NSData * output; 
@property (nonatomic,copy) NSData * proof; 
+(id)descriptor;
-(NSData *)message;
-(void)setMessage:(NSData *)arg1 ;
-(NSData *)salt;
-(BOOL)verifyWithError:(id*)arg1 ;
-(void)setSalt:(NSData *)arg1 ;
-(TransparencyVRFVerifier *)verifier;
-(void)setVerifier:(TransparencyVRFVerifier *)arg1 ;
@end
