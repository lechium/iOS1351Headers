/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:11 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CorePDF/CorePDF-Structs.h>
#import <libobjc.A.dylib/CPDisposable.h>

@class CPParagraphListItem;

@interface CPList : NSObject <CPDisposable> {

	CGRect spacer;
	int type;
	unsigned ordinalPrefixLength;
	unsigned ordinalSuffixLength;
	CPParagraphListItem* parentItem;
	CFArrayRef items;

}

@property (assign,nonatomic) CGRect spacer; 
@property (assign,nonatomic) int type; 
@property (assign,nonatomic) unsigned ordinalPrefixLength; 
@property (assign,nonatomic) unsigned ordinalSuffixLength; 
@property (nonatomic,retain) CPParagraphListItem * parentItem; 
-(id)init;
-(void)dealloc;
-(void)finalize;
-(int)type;
-(void)setType:(int)arg1 ;
-(void)addItem:(id)arg1 ;
-(unsigned)itemCount;
-(id)itemAtIndex:(unsigned)arg1 ;
-(CPParagraphListItem *)parentItem;
-(void)setParentItem:(CPParagraphListItem *)arg1 ;
-(void)dispose;
-(BOOL)containsParagraph:(id)arg1 ;
-(BOOL)isMultilevel;
-(CGRect)spacer;
-(void)setSpacer:(CGRect)arg1 ;
-(unsigned)ordinalPrefixLength;
-(void)setOrdinalPrefixLength:(unsigned)arg1 ;
-(unsigned)ordinalSuffixLength;
-(void)setOrdinalSuffixLength:(unsigned)arg1 ;
@end

