/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:38 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface CKRecipientGenerator : NSObject {

	NSArray* _searchABPropertyTypes;

}

@property (nonatomic,retain) NSArray * searchABPropertyTypes;              //@synthesize searchABPropertyTypes=_searchABPropertyTypes - In the implementation block
+(id)sharedRecipientGenerator;
-(id)recipientWithAddress:(id)arg1 ;
-(id)recipientWithContact:(id)arg1 ;
-(id)recipientWithContactProperty:(id)arg1 ;
-(void)setSearchABPropertyTypes:(NSArray *)arg1 ;
-(void)getAddressForContact:(id)arg1 address:(id*)arg2 kind:(unsigned long long*)arg3 ;
-(void)_appendSearchResults:(id)arg1 identifiers:(id)arg2 abPropertyType:(int)arg3 toArray:(id)arg4 ;
-(NSArray *)searchABPropertyTypes;
@end

