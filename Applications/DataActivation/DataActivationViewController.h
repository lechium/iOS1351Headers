//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

@class NSSet;

@interface DataActivationViewController : UINavigationController
{
    _Bool _currentlyPinningInputViews;	// 8 = 0x8
    _Bool _shouldPinInputViews;	// 9 = 0x9
    NSSet *_popPassthroughViewControllerClasses;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000100011988
@property(nonatomic) _Bool shouldPinInputViews; // @synthesize shouldPinInputViews=_shouldPinInputViews;
@property(copy, nonatomic) NSSet *popPassthroughViewControllerClasses; // @synthesize popPassthroughViewControllerClasses=_popPassthroughViewControllerClasses;
- (id)popViewControllerAnimated:(_Bool)arg1;	// IMP=0x0000000100011744
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100011690
- (void)pinInputViewsIfNeeded;	// IMP=0x0000000100011670
- (void)_endPinningInputViews;	// IMP=0x00000001000115dc
- (void)_beginPinningInputViews;	// IMP=0x000000010001153c
- (_Bool)_shouldAutoPinInputViewsForModalFormSheet;	// IMP=0x0000000100011534
- (void)dealloc;	// IMP=0x00000001000114bc
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000001000113ac

@end
