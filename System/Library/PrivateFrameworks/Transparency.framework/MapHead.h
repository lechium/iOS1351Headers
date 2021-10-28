/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:16 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Transparency/GPBMessage.h>

@class NSData, LogHead;

@interface MapHead : GPBMessage

@property (assign,nonatomic) unsigned long long logBeginningMs; 
@property (nonatomic,copy) NSData * mapHeadHash; 
@property (assign,nonatomic) int application; 
@property (nonatomic,retain) LogHead * changeLogHead; 
@property (assign,nonatomic) BOOL hasChangeLogHead; 
@property (assign,nonatomic) unsigned long long revision; 
@property (assign,nonatomic) int mapType; 
@property (assign,nonatomic) unsigned long long treeId; 
+(id)descriptor;
@end
