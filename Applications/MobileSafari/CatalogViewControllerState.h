//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIViewController;

@interface CatalogViewControllerState : NSObject
{
    _Bool _showingCompletions;	// 8 = 0x8
    _Bool _showingUniversalFirstTimeExperience;	// 9 = 0x9
    long long _favoritesState;	// 16 = 0x10
    NSString *_queryString;	// 24 = 0x18
    UIViewController *_completionDetailViewController;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001000cef94
@property(retain, nonatomic) UIViewController *completionDetailViewController; // @synthesize completionDetailViewController=_completionDetailViewController;
@property(nonatomic, getter=isShowingUniversalFirstTimeExperience) _Bool showingUniversalFirstTimeExperience; // @synthesize showingUniversalFirstTimeExperience=_showingUniversalFirstTimeExperience;
@property(nonatomic, getter=isShowingCompletions) _Bool showingCompletions; // @synthesize showingCompletions=_showingCompletions;
@property(copy, nonatomic) NSString *queryString; // @synthesize queryString=_queryString;
@property(nonatomic) long long favoritesState; // @synthesize favoritesState=_favoritesState;

@end

