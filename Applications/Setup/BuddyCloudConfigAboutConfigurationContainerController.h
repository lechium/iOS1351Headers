//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSString, UILabel, UIScrollView;

@interface BuddyCloudConfigAboutConfigurationContainerController : UIViewController
{
    _Bool _isSupervised;	// 8 = 0x8
    UIScrollView *_containerView;	// 16 = 0x10
    UILabel *_descriptionLabel;	// 24 = 0x18
    NSString *_organizationName;	// 32 = 0x20
    NSString *_organizationDepartment;	// 40 = 0x28
    NSString *_organizationAddress;	// 48 = 0x30
    NSString *_organizationAddressLine1;	// 56 = 0x38
    NSString *_organizationAddressLine2;	// 64 = 0x40
    NSString *_organizationCity;	// 72 = 0x48
    NSString *_organizationRegion;	// 80 = 0x50
    NSString *_organizationZipCode;	// 88 = 0x58
    NSString *_organizationCountry;	// 96 = 0x60
    NSString *_organizationSupportPhone;	// 104 = 0x68
}

+ (id)defaultParagraphTextAttributes;	// IMP=0x00000001000f13f8
- (void).cxx_destruct;	// IMP=0x00000001000f2514
@property(nonatomic) _Bool isSupervised; // @synthesize isSupervised=_isSupervised;
@property(copy, nonatomic) NSString *organizationSupportPhone; // @synthesize organizationSupportPhone=_organizationSupportPhone;
@property(copy, nonatomic) NSString *organizationCountry; // @synthesize organizationCountry=_organizationCountry;
@property(copy, nonatomic) NSString *organizationZipCode; // @synthesize organizationZipCode=_organizationZipCode;
@property(copy, nonatomic) NSString *organizationRegion; // @synthesize organizationRegion=_organizationRegion;
@property(copy, nonatomic) NSString *organizationCity; // @synthesize organizationCity=_organizationCity;
@property(copy, nonatomic) NSString *organizationAddressLine2; // @synthesize organizationAddressLine2=_organizationAddressLine2;
@property(copy, nonatomic) NSString *organizationAddressLine1; // @synthesize organizationAddressLine1=_organizationAddressLine1;
@property(copy, nonatomic) NSString *organizationAddress; // @synthesize organizationAddress=_organizationAddress;
@property(copy, nonatomic) NSString *organizationDepartment; // @synthesize organizationDepartment=_organizationDepartment;
@property(copy, nonatomic) NSString *organizationName; // @synthesize organizationName=_organizationName;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UIScrollView *containerView; // @synthesize containerView=_containerView;
- (id)_descriptionText;	// IMP=0x00000001000f1b58
- (void)controllerDone:(id)arg1;	// IMP=0x00000001000f1b44
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001000f19d0
- (void)viewDidLayoutSubviews;	// IMP=0x00000001000f1884
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000001000f1554

@end

