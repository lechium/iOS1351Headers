/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:52 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SafariShared/SafariShared-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, WBSHistoryItem, WBSHistoryVisit;

@interface WBSHistoryVisitIdentifier : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _hash;
	NSString* _urlString;
	double _visitTime;
	WBSHistoryItem* _associatedHistoryItem;
	WBSHistoryVisit* _associatedHistoryVisit;

}

@property (nonatomic,copy,readonly) NSString * urlString;                           //@synthesize urlString=_urlString - In the implementation block
@property (nonatomic,readonly) double visitTime;                                    //@synthesize visitTime=_visitTime - In the implementation block
@property (nonatomic,retain) WBSHistoryItem * associatedHistoryItem;                //@synthesize associatedHistoryItem=_associatedHistoryItem - In the implementation block
@property (nonatomic,retain) WBSHistoryVisit * associatedHistoryVisit;              //@synthesize associatedHistoryVisit=_associatedHistoryVisit - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)urlString;
-(double)visitTime;
-(WBSHistoryVisit *)associatedHistoryVisit;
-(id)initWithURLString:(id)arg1 visitTime:(double)arg2 ;
-(WBSHistoryItem *)associatedHistoryItem;
-(void)setAssociatedHistoryItem:(WBSHistoryItem *)arg1 ;
-(void)setAssociatedHistoryVisit:(WBSHistoryVisit *)arg1 ;
@end

