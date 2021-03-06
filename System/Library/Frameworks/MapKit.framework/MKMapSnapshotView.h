/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:22 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIImageView.h>

@class MKMapSnapshotter;

@interface MKMapSnapshotView : UIImageView {

	MKMapSnapshotter* _snapshotter;
	MKMapSnapshotter* _gridSnapshotter;

}
-(void)cancel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)takeSnapshotWithOptions:(id)arg1 gridOptions:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

