/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:08 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/REHTMLElement.h>

@class NSString, NSArray, NSDictionary;

@interface REHTMLTagElement : REHTMLElement {

	NSString* _tag;
	NSString* _content;
	NSArray* _classes;
	NSDictionary* _attributes;
	NSString* _prefix;
	NSString* _suffix;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)attributes;
-(id)classes;
-(id)_contentString;
-(id)initWithTag:(id)arg1 content:(id)arg2 ;
-(id)_prefixContentString;
-(id)_suffixContentString;
-(id)elementByAddingClass:(id)arg1 ;
-(id)elementByAddingClasses:(id)arg1 ;
-(id)elementBySettingClasses:(id)arg1 ;
-(id)elementBySettingAtttibutes:(id)arg1 ;
@end

