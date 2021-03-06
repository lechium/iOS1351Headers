/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:53 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSSet;

@interface ATXHeuristicActionMakersAndExpirers : NSObject <NSSecureCoding> {

	NSArray* _actionMakers;
	NSSet* _expirers;

}

@property (nonatomic,readonly) NSArray * actionMakers;              //@synthesize actionMakers=_actionMakers - In the implementation block
@property (nonatomic,readonly) NSSet * expirers;                    //@synthesize expirers=_expirers - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithActionMakers:(id)arg1 expirers:(id)arg2 ;
-(NSArray *)actionMakers;
-(NSSet *)expirers;
@end

