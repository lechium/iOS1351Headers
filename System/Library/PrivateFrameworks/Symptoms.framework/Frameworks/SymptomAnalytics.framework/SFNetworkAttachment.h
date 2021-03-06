/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:44 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSDate, NSString, NSData, NSSet;

@interface SFNetworkAttachment : NSManagedObject

@property (nonatomic,copy) NSNumber * attrs; 
@property (nonatomic,copy) NSDate * firstTimeStamp; 
@property (nonatomic,copy) NSString * identifier; 
@property (assign,nonatomic) BOOL isHotSpot; 
@property (assign,nonatomic) BOOL isKnownGood; 
@property (assign,nonatomic) BOOL isLowInternetDL; 
@property (assign,nonatomic) BOOL isLowInternetUL; 
@property (nonatomic,copy) NSNumber * kind; 
@property (nonatomic,retain) NSData * netSignature; 
@property (nonatomic,copy) NSNumber * overallStayMean; 
@property (nonatomic,copy) NSNumber * overallStayVar; 
@property (nonatomic,copy) NSString * service; 
@property (nonatomic,copy) NSDate * timeStamp; 
@property (nonatomic,copy) NSNumber * velo; 
@property (assign,nonatomic) BOOL wasLastFailed; 
@property (nonatomic,retain) NSSet * hasDefaultRoute; 
@property (nonatomic,retain) NSSet * supportsFlows; 
+(id)fetchRequest;
+(id)entityName;
@end

