/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:41 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OfficeImport/OADGraphic.h>

@class OADShapeGeometry, OADOle, OADMovie;

@interface OADImage : OADGraphic {

	OADShapeGeometry* mGeometry;
	OADOle* mOle;
	OADMovie* mMovie;

}
-(id)init;
-(id)description;
-(id)imageProperties;
-(id)geometry;
-(void)setGeometry:(id)arg1 ;
-(id)movie;
-(void)setMovie:(id)arg1 ;
-(id)initWithBlipRef:(id)arg1 ;
-(void)setParentTextListStyle:(id)arg1 ;
-(void)changeParentTextListStylePreservingEffectiveValues:(id)arg1 ;
-(id)ole;
-(void)setOle:(id)arg1 ;
-(id)createImageFill;
-(void)createPictureFramePresetGeometry;
@end

