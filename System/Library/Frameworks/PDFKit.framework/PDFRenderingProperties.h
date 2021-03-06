/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:06 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PDFKit/PDFKit-Structs.h>
@class PDFRenderingPropertiesPrivate, PDFView, PDFLayerController, UIColor;

@interface PDFRenderingProperties : NSObject {

	PDFRenderingPropertiesPrivate* _private;

}

@property (assign,setter=setPDFView:,nonatomic,__weak) PDFView * pdfView; 
@property (assign,setter=setPDFLayerController:,nonatomic,__weak) PDFLayerController * pdfLayerController; 
@property (assign,nonatomic) long long displayBox; 
@property (assign,nonatomic) BOOL shouldAntiAlias; 
@property (assign,nonatomic) double greekingThreshold; 
@property (assign,nonatomic) long long interpolationQuality; 
@property (assign,nonatomic) double lineWidthThreshold; 
@property (nonatomic,retain) UIColor * pageColor; 
@property (assign,nonatomic) BOOL enablePageShadows; 
@property (assign,nonatomic) double screenScaleFactor; 
@property (assign,nonatomic) BOOL enableTileUpdates; 
@property (assign,nonatomic) BOOL enableBackgroundImages; 
@property (assign,nonatomic) BOOL isUsingPDFExtensionView; 
@property (assign,nonatomic) CGColorSpaceRef deviceColorSpace; 
-(id)init;
-(void)dealloc;
-(PDFView *)pdfView;
-(PDFLayerController *)pdfLayerController;
-(long long)displayBox;
-(BOOL)shouldAntiAlias;
-(double)greekingThreshold;
-(long long)interpolationQuality;
-(double)lineWidthThreshold;
-(UIColor *)pageColor;
-(BOOL)enablePageShadows;
-(double)screenScaleFactor;
-(BOOL)enableTileUpdates;
-(BOOL)enableBackgroundImages;
-(BOOL)isUsingPDFExtensionView;
-(CGColorSpaceRef)deviceColorSpace;
-(void)_notifyPropertyChanged:(long long)arg1 ;
-(void)setPDFView:(id)arg1 ;
-(void)setPDFLayerController:(id)arg1 ;
-(void)setDisplayBox:(long long)arg1 ;
-(void)setShouldAntiAlias:(BOOL)arg1 ;
-(void)setGreekingThreshold:(double)arg1 ;
-(void)setInterpolationQuality:(long long)arg1 ;
-(void)setLineWidthThreshold:(double)arg1 ;
-(void)setPageColor:(UIColor *)arg1 ;
-(void)setEnablePageShadows:(BOOL)arg1 ;
-(void)setScreenScaleFactor:(double)arg1 ;
-(void)setEnableTileUpdates:(BOOL)arg1 ;
-(void)setEnableBackgroundImages:(BOOL)arg1 ;
-(void)setIsUsingPDFExtensionView:(BOOL)arg1 ;
-(void)setDeviceColorSpace:(CGColorSpaceRef)arg1 ;
@end

