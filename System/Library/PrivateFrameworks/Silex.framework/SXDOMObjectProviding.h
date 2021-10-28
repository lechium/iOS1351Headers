/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:42 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class SXComponents;


@protocol SXDOMObjectProviding <NSObject>
@property (nonatomic,readonly) id<SXDocumentStyle> documentStyle; 
@property (nonatomic,readonly) SXComponents * components; 
@property (nonatomic,readonly) id<SXAutoPlacement> autoPlacement; 
@required
-(SXComponents *)components;
-(id)componentLayoutForIdentifier:(id)arg1;
-(id)componentStyleForIdentifier:(id)arg1;
-(id)componentStyleForComponent:(id)arg1;
-(id)componentStyleForIdentifiers:(id)arg1;
-(id)textStyleForIdentifier:(id)arg1;
-(id)componentTextStyleForIdentifiers:(id)arg1;
-(id)componentTextStyleForIdentifier:(id)arg1 classification:(id)arg2;
-(id)componentTextStyleForIdentifier:(id)arg1 inheritingFromComponentTextStyle:(id)arg2;
-(id)resourceForIdentifier:(id)arg1;
-(id)imageResourceForIdentifier:(id)arg1;
-(id<SXDocumentStyle>)documentStyle;
-(id<SXAutoPlacement>)autoPlacement;

@end
