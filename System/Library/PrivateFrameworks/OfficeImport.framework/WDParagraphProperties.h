/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:43 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class WDCharacterProperties, WDParagraphPropertiesValues, WDDocument;

@interface WDParagraphProperties : NSObject <NSCopying> {

	WDCharacterProperties* mCharacterProperties;
	BOOL mCharacterPropertiesOverridden;
	unsigned mOriginal : 1;
	unsigned mTracked : 1;
	unsigned mResolved : 1;
	WDParagraphPropertiesValues* mOriginalProperties;
	WDParagraphPropertiesValues* mTrackedProperties;
	WDDocument* mDocument;

}

@property (__weak,readonly) WDDocument * document; 
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(short)lineSpacing;
-(void)setLineSpacing:(short)arg1 ;
-(long long)width;
-(long long)height;
-(void)setWidth:(long long)arg1 ;
-(void)setHeight:(long long)arg1 ;
-(id)initWithDocument:(id)arg1 ;
-(WDDocument *)document;
-(id)rightBorder;
-(unsigned long long)listIndex;
-(void)setListIndex:(unsigned long long)arg1 ;
-(void)setPageBreakBefore:(BOOL)arg1 ;
-(BOOL)wrap;
-(void)setWrap:(BOOL)arg1 ;
-(void)setFirstLineIndent:(short)arg1 ;
-(short)firstLineIndent;
-(id)baseStyle;
-(void)setBaseStyle:(id)arg1 ;
-(id)topBorder;
-(id)bottomBorder;
-(BOOL)isBaseStyleOverridden;
-(BOOL)isHorizontalAnchorOverridden;
-(int)horizontalAnchor;
-(BOOL)isVerticalAnchorOverridden;
-(int)verticalAnchor;
-(BOOL)isHorizontalPositionOverridden;
-(long long)horizontalPosition;
-(BOOL)isVerticalPositionOverridden;
-(long long)verticalPosition;
-(id)characterProperties;
-(BOOL)isCharacterPropertiesOverridden;
-(BOOL)isSpaceAfterOverridden;
-(unsigned short)spaceAfter;
-(BOOL)isSpaceBeforeOverridden;
-(unsigned short)spaceBefore;
-(BOOL)isLineSpacingOverridden;
-(BOOL)isJustificationOverridden;
-(int)justification;
-(BOOL)isLeftIndentOverridden;
-(short)leftIndent;
-(BOOL)isRightIndentOverridden;
-(short)rightIndent;
-(BOOL)isLeadingIndentOverridden;
-(short)leadingIndent;
-(BOOL)isFollowingIndentOverridden;
-(short)followingIndent;
-(BOOL)isFirstLineIndentOverridden;
-(BOOL)isShadingOverridden;
-(id)shading;
-(BOOL)isBottomBorderOverridden;
-(BOOL)isListIndexOverridden;
-(BOOL)isListLevelOverridden;
-(unsigned char)listLevel;
-(BOOL)isWidthOverridden;
-(BOOL)isTopBorderOverridden;
-(BOOL)isLeftBorderOverridden;
-(BOOL)isRightBorderOverridden;
-(id)leftBorder;
-(BOOL)isHeightOverridden;
-(BOOL)isAnythingOverridden;
-(unsigned short)outlineLevel;
-(void)setOutlineLevel:(unsigned short)arg1 ;
-(void)setCharacterProperties:(id)arg1 ;
-(void)setResolveMode:(int)arg1 ;
-(id)mutableTopBorder;
-(id)mutableLeftBorder;
-(id)mutableBottomBorder;
-(id)mutableRightBorder;
-(int)resolveMode;
-(void)setFormattingChanged:(int)arg1 ;
-(void)setIndexToAuthorIDOfFormattingChange:(unsigned short)arg1 ;
-(BOOL)isFormattingChangedOverridden;
-(int)formattingChanged;
-(BOOL)isIndexToAuthorIDOfFormattingChangeOverridden;
-(unsigned short)indexToAuthorIDOfFormattingChange;
-(id)mutableShading;
-(void)setJustification:(int)arg1 ;
-(void)setVerticalAnchor:(int)arg1 ;
-(void)setHorizontalAnchor:(int)arg1 ;
-(void)setVerticalPosition:(long long)arg1 ;
-(void)setHorizontalPosition:(long long)arg1 ;
-(BOOL)isAnythingOverriddenIn:(id)arg1 ;
-(void)negateFormattingChangesWithDefaults:(id)arg1 ;
-(void)clearBaseStyle;
-(void)copyPropertiesInto:(id)arg1 ;
-(BOOL)isPageBreakBeforeOverridden;
-(BOOL)isPageBreakBefore;
-(void)setListLevel:(unsigned char)arg1 ;
-(BOOL)isHeightRuleOverridden;
-(int)heightRule;
-(void)setHeightRule:(int)arg1 ;
-(BOOL)isVerticalSpaceOverridden;
-(long long)verticalSpace;
-(void)setVerticalSpace:(long long)arg1 ;
-(BOOL)isHorizontalSpaceOverridden;
-(long long)horizontalSpace;
-(void)setHorizontalSpace:(long long)arg1 ;
-(BOOL)isWrapOverridden;
-(BOOL)isWrapCodeOverridden;
-(char)wrapCode;
-(void)setWrapCode:(char)arg1 ;
-(BOOL)isAnchorLockOverridden;
-(BOOL)anchorLock;
-(void)setAnchorLock:(BOOL)arg1 ;
-(void)setSpaceBefore:(unsigned short)arg1 ;
-(BOOL)isSpaceBeforeAutoOverridden;
-(BOOL)spaceBeforeAuto;
-(void)setSpaceBeforeAuto:(BOOL)arg1 ;
-(void)setSpaceAfter:(unsigned short)arg1 ;
-(BOOL)isSpaceAfterAutoOverridden;
-(BOOL)spaceAfterAuto;
-(void)setSpaceAfterAuto:(BOOL)arg1 ;
-(BOOL)isLineSpacingRuleOverridden;
-(int)lineSpacingRule;
-(void)setLineSpacingRule:(int)arg1 ;
-(void)setLeftIndent:(short)arg1 ;
-(void)setLeadingIndent:(short)arg1 ;
-(void)setFollowingIndent:(short)arg1 ;
-(void)setRightIndent:(short)arg1 ;
-(BOOL)isPhysicalJustificationOverridden;
-(int)physicalJustification;
-(void)setPhysicalJustification:(int)arg1 ;
-(BOOL)isOutlineLevelOverridden;
-(BOOL)isKeepNextParagraphTogetherOverridden;
-(BOOL)keepNextParagraphTogether;
-(void)setKeepNextParagraphTogether:(BOOL)arg1 ;
-(BOOL)isKeepLinesTogetherOverridden;
-(BOOL)keepLinesTogether;
-(void)setKeepLinesTogether:(BOOL)arg1 ;
-(BOOL)isSuppressAutoHyphensOverridden;
-(BOOL)suppressAutoHyphens;
-(void)setSuppressAutoHyphens:(BOOL)arg1 ;
-(BOOL)isSuppressLineNumbersOverridden;
-(BOOL)suppressLineNumbers;
-(void)setSuppressLineNumbers:(BOOL)arg1 ;
-(BOOL)isWidowControlOverridden;
-(BOOL)widowControl;
-(void)setWidowControl:(BOOL)arg1 ;
-(BOOL)isBiDiOverridden;
-(BOOL)biDi;
-(void)setBiDi:(BOOL)arg1 ;
-(BOOL)isKinsokuOffOverridden;
-(BOOL)kinsokuOff;
-(void)setKinsokuOff:(BOOL)arg1 ;
-(id)mutableBetweenBorder;
-(id)betweenBorder;
-(BOOL)isBetweenBorderOverridden;
-(id)mutableBarBorder;
-(id)barBorder;
-(BOOL)isBarBorderOverridden;
-(BOOL)isDropCapOverridden;
-(SCD_Struct_WD110)dropCap;
-(void)setDropCap:(SCD_Struct_WD110)arg1 ;
-(unsigned long long)tabStopAddedCount;
-(void)setTabStopAddedCount:(unsigned long long)arg1 ;
-(SCD_Struct_WD111*)tabStopAddedAt:(unsigned long long)arg1 ;
-(void)addTabStopAdded:(SCD_Struct_WD111*)arg1 ;
-(unsigned long long)tabStopDeletedPositionCount;
-(void)setTabStopDeletedPositionCount:(unsigned long long)arg1 ;
-(short)tabStopDeletedPositionAt:(unsigned long long)arg1 ;
-(void)addTabStopDeletedPosition:(short)arg1 ;
-(short)leftIndentChars;
-(void)setLeftIndentChars:(short)arg1 ;
-(short)rightIndentChars;
-(void)setRightIndentChars:(short)arg1 ;
-(short)firstLineIndentChars;
-(void)setFirstLineIndentChars:(short)arg1 ;
-(BOOL)contextualSpacing;
-(void)setContextualSpacing:(BOOL)arg1 ;
-(id)mutableCharacterProperties;
-(void)clearChararacterProperties;
-(void)clearLeftIndent;
-(void)clearLeadingIndent;
-(void)clearFollowingIndent;
-(void)clearRightIndent;
-(void)clearFirstLineIndent;
-(BOOL)isLeftIndentCharsOverridden;
-(BOOL)isRightIndentCharsOverridden;
-(BOOL)isFirstLineIndentCharsOverridden;
-(BOOL)hasTabStopAddedAtPosition:(short)arg1 ;
-(BOOL)hasTabStopDeletedAtPosition:(short)arg1 ;
-(void)removeTabStopAddedWithPosition:(short)arg1 ;
-(void)removeTabStopDeletedPosition:(short)arg1 ;
-(BOOL)isContextualSpacingOverridden;
@end

