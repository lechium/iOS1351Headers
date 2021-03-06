/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:48 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebKit/WebKit-Structs.h>
#import <Foundation/NSProgress.h>

@interface WKDownloadProgress : NSProgress {

	RetainPtr<NSURLSessionDownloadTask>* m_task;
	WeakPtr<WebKit::Download>* m_download;
	RefPtr<WebKit::SandboxExtension, WTF::DumbPtrTraits<WebKit::SandboxExtension> >* m_sandboxExtension;

}
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)publish;
-(void)unpublish;
-(id)initWithDownloadTask:(id)arg1 download:(Download*)arg2 URL:(id)arg3 sandboxExtension:(RefPtr<WebKit::SandboxExtension, WTF::DumbPtrTraits<WebKit::SandboxExtension> >*)arg4 ;
-(void)performCancel;
@end

