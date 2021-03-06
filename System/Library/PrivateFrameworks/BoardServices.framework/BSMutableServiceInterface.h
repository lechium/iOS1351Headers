/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:22 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BoardServices/BoardServices-Structs.h>
#import <BoardServices/BSServiceInterface.h>

@class NSString, BSObjCProtocol;

@interface BSMutableServiceInterface : BSServiceInterface

@property (nonatomic,copy) NSString * identifier; 
@property (assign,nonatomic) long long clientMessagingExpectation; 
@property (nonatomic,copy) BSObjCProtocol * server; 
@property (nonatomic,copy) BSObjCProtocol * client; 
+(id)interfaceWithIdentifier:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setClient:(BSObjCProtocol *)arg1 ;
-(void)setServer:(BSObjCProtocol *)arg1 ;
-(void)setClientMessagingExpectation:(long long)arg1 ;
@end

