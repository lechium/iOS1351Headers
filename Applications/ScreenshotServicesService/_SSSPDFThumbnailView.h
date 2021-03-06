//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class PDFThumbnailView, PDFView, _SSSPDFPageMiniMapView;

@interface _SSSPDFThumbnailView : UIView
{
    PDFView *_pdfView;	// 8 = 0x8
    _SSSPDFPageMiniMapView *_miniMapView;	// 16 = 0x10
    PDFThumbnailView *_thumbnailView;	// 24 = 0x18
    struct CGRect _scrollViewVisibleRectInPDFView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100033570
@property(retain, nonatomic) PDFThumbnailView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
@property(retain, nonatomic) _SSSPDFPageMiniMapView *miniMapView; // @synthesize miniMapView=_miniMapView;
@property(nonatomic) struct CGRect scrollViewVisibleRectInPDFView; // @synthesize scrollViewVisibleRectInPDFView=_scrollViewVisibleRectInPDFView;
@property(retain, nonatomic) PDFView *pdfView; // @synthesize pdfView=_pdfView;
- (void)createMiniMapView;	// IMP=0x000000010003345c
- (void)createThumbnailView;	// IMP=0x0000000100033354
- (_Bool)shouldUseMiniMapView;	// IMP=0x00000001000332f8
- (_Bool)shouldShowThumbnailOptionView;	// IMP=0x00000001000332b0
- (_Bool)isShowingThumbnailOptionView;	// IMP=0x0000000100033280
@property(nonatomic) _Bool shouldUpdate;
- (void)layoutSubviews;	// IMP=0x0000000100032ffc

@end

