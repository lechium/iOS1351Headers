/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:22 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/HealthExperience.framework/HealthExperience
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@class NSString, _TtC16HealthExperience4Feed, NSOrderedSet;

@interface HealthExperience.FeedSection : NSManagedObject

@property (copy,nonatomic) NSString * identifier; 
@property (retain,nonatomic) _TtC16HealthExperience4Feed * feed; 
@property (retain,nonatomic) NSOrderedSet * feedItems; 
@property (assign,nonatomic) BOOL isCollapsible; 
@property (assign,nonatomic) long long sortOrder; 
-(id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2 ;
@end

