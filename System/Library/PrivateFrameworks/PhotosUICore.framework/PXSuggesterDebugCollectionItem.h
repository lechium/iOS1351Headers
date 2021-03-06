/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:12 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSDictionary, PHSuggestion, NSDate;

@interface PXSuggesterDebugCollectionItem : NSObject {

	NSString* _name;
	NSString* _description;
	NSDictionary* _info;
	PHSuggestion* _suggestion;
	NSDate* _date;

}

@property (readonly) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (readonly) NSString * description;                 //@synthesize description=_description - In the implementation block
@property (readonly) NSDictionary * info;                    //@synthesize info=_info - In the implementation block
@property (readonly) PHSuggestion * suggestion;              //@synthesize suggestion=_suggestion - In the implementation block
@property (readonly) NSDate * date;                          //@synthesize date=_date - In the implementation block
@property (readonly) BOOL isInvalid; 
-(NSString *)description;
-(NSString *)name;
-(NSDate *)date;
-(NSDictionary *)info;
-(BOOL)isInvalid;
-(PHSuggestion *)suggestion;
-(id)initWithSuggestion:(id)arg1 suggestionInfo:(id)arg2 ;
@end

