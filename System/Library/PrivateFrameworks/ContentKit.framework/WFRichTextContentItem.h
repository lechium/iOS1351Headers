/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:14 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContentKit/WFGenericFileContentItem.h>
#import <libobjc.A.dylib/WFContentItemClass.h>

@interface WFRichTextContentItem : WFGenericFileContentItem <WFContentItemClass>
+(id)typeDescription;
+(id)ownedTypes;
+(id)outputTypes;
+(id)contentCategories;
+(id)pluralTypeDescription;
+(BOOL)supportedTypeMustBeDeterminedByInstance:(id)arg1 ;
+(BOOL)typeRequiresMainThread:(id)arg1 ;
+(id)attributedStringFromHTMLFile:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 error:(id*)arg4 ;
+(id)attributesDictionaryForType:(id)arg1 ;
+(id)documentTypeForType:(id)arg1 ;
+(id)htmlHeader;
+(id)htmlFooter;
+(id)normalizedHTMLDocumentFromHTML:(id)arg1 ;
+(id)normalizedHTMLDocumentFromHTMLData:(id)arg1 ;
-(id)generateFileRepresentationForType:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)generateObjectRepresentations:(/*^block*/id)arg1 options:(id)arg2 forClass:(Class)arg3 ;
-(void)generateFileRepresentations:(/*^block*/id)arg1 options:(id)arg2 forType:(id)arg3 ;
-(void)getFileRepresentationsForSerialization:(/*^block*/id)arg1 ;
-(id)preferredFileType;
-(BOOL)canGenerateRepresentationForType:(id)arg1 ;
-(BOOL)isContent;
-(void)generateRTFDRepresentation:(/*^block*/id)arg1 fromAttributedString:(id)arg2 forType:(id)arg3 ;
-(void)generateDataRepresentation:(/*^block*/id)arg1 fromAttributedString:(id)arg2 forType:(id)arg3 ;
-(void)generateAttributedString:(/*^block*/id)arg1 fromFile:(id)arg2 forClass:(Class)arg3 ;
@end

