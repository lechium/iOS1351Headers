/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:29 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary;

@interface LPiTunesMediaLookupItemArtwork : NSObject {

	NSDictionary* _dictionary;

}

@property (nonatomic,readonly) long long height; 
@property (nonatomic,readonly) long long width; 
+(id)colorForColorKind:(id)arg1 inColorDictionary:(id)arg2 ;
-(id)initWithDictionary:(id)arg1 ;
-(long long)width;
-(long long)height;
-(id)colors;
-(id)URLWithHeight:(long long)arg1 width:(long long)arg2 cropStyle:(id)arg3 format:(id)arg4 ;
@end
