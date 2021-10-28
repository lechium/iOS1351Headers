/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:04 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@class NSString, NSDate, NSData, NSURL, NSNumber, VUIVideoManagedObject;

@interface VUIFPSKeyInfoManagedObject : NSManagedObject

@property (assign,nonatomic) BOOL allowsManualRenewal; 
@property (nonatomic,copy) NSString * contentID; 
@property (nonatomic,copy) NSDate * expirationDate; 
@property (assign,nonatomic) BOOL isInvalid; 
@property (assign,nonatomic) BOOL isLowValue; 
@property (nonatomic,retain) NSData * keyData; 
@property (nonatomic,copy) NSURL * keyURI; 
@property (nonatomic,copy) NSNumber * playbackDuration; 
@property (nonatomic,copy) NSDate * playbackExpirationStartDate; 
@property (nonatomic,copy) NSDate * renewalDate; 
@property (nonatomic,copy) NSNumber * renewalInterval; 
@property (nonatomic,copy) NSDate * retrievalDate; 
@property (nonatomic,retain) VUIVideoManagedObject * video; 
+(id)fetchRequest;
-(void)populateFromKeyRequest:(id)arg1 video:(id)arg2 ;
@end
