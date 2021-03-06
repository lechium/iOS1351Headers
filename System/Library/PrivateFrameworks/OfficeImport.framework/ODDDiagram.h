/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:41 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OfficeImport/OADDrawable.h>

@class ODDNodePoint, ODDColorTransform, ODDStyleDefinition, NSArray;

@interface ODDDiagram : OADDrawable {

	ODDNodePoint* mDocumentPoint;
	ODDColorTransform* mColorTransform;
	ODDStyleDefinition* mStyleDefinition;
	NSArray* mEquivalentDrawables;

}

@property (nonatomic,retain) NSArray * equivalentDrawables; 
-(id)init;
-(id)description;
-(id)colorTransform;
-(id)documentPoint;
-(id)styleDefinition;
-(void)setParentTextListStyle:(id)arg1 ;
-(void)setEquivalentDrawables:(NSArray *)arg1 ;
-(void)setDocumentPoint:(id)arg1 ;
-(NSArray *)equivalentDrawables;
@end

