/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:17 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AudioToolboxCore/AudioToolboxCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class _ACPluginDB, NSString, NSMutableDictionary, NSData, NSMutableArray;

@interface _ACPluginDBDirectory : NSObject <NSSecureCoding> {

	_ACPluginDB* mDB;
	NSString* mFullPath;
	double mModificationDate;
	int mPriority;
	NSMutableDictionary* mBundlesByName;
	FSEventStreamRef mFSMonitor;
	double mCurrentModificationDate;
	NSData* mCarbonComponentHash;
	BOOL mComponentsLoadable;
	NSMutableArray* mChangedBundlePaths;
	unsigned long long mNrOfPathsChanged;
	BOOL mShouldRescan;

}
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)loadAllComponents:(AudioComponentVector*)arg1 ;
-(id)initWithPath:(id)arg1 priority:(int)arg2 ;
-(BOOL)refreshModificationDate;
-(void)bundlesChanged:(id)arg1 shouldRescan:(BOOL)arg2 ;
-(void)eventStreamCallback:(id)arg1 flags:(const unsigned*)arg2 ;
-(void)monitorDirectory;
-(void)scanDirectory;
-(id)scanBundle:(id)arg1 loadable:(BOOL)arg2 ;
@end

