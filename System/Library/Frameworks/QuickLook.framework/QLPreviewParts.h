/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:53 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <QuickLook/QuickLook-Structs.h>
@class NSURL, NSData, NSString, NSURLConnection, NSURLResponse, NSMutableSet, NSMutableDictionary, NSThread, NSError, NSURLRequest, NSSet;

@interface QLPreviewParts : NSObject {

	NSURL* _url;
	NSData* _data;
	NSString* _fileName;
	NSString* _uti;
	NSString* _password;
	BOOL _progressive;
	void* _convertFunction;
	NSURLConnection* _connection;
	long long _pageCount;
	float _pageWidth;
	float _pageHeight;
	NSURL* previewURL;
	NSURLResponse* previewResponse;
	NSMutableSet* registeredURLs;
	NSMutableSet* outstandingURLs;
	NSMutableDictionary* encodingsForURLs;
	NSThread* delegateCallbackThread;
	NSError* mainError;
	BOOL computed;
	BOOL cancelled;
	const void* representedObject;
	SCD_Struct_QL13* representedObjectCallbacks;
	long long representedObjectProtection;
	BOOL htmlErrorDisabled;
	BOOL _shouldRemoveURLAfterGeneration;
	id _delegate;

}

@property (nonatomic,retain) NSURL * url;                                      //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSData * data;                                    //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSString * fileName;                              //@synthesize fileName=_fileName - In the implementation block
@property (nonatomic,retain) NSString * uti;                                   //@synthesize uti=_uti - In the implementation block
@property (nonatomic,retain) NSString * password;                              //@synthesize password=_password - In the implementation block
@property (assign,nonatomic) BOOL progressive;                                 //@synthesize progressive=_progressive - In the implementation block
@property (nonatomic,retain) NSURLConnection * connection;                     //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) BOOL shouldRemoveURLAfterGeneration;              //@synthesize shouldRemoveURLAfterGeneration=_shouldRemoveURLAfterGeneration - In the implementation block
@property (assign,nonatomic,__weak) id delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (assign) BOOL htmlErrorDisabled; 
@property (nonatomic,readonly) NSURLRequest * previewRequest; 
@property (nonatomic,readonly) NSURLResponse * previewResponse; 
@property (nonatomic,readonly) NSURL * previewURL; 
@property (nonatomic,readonly) NSSet * attachmentURLs; 
@property (readonly) long long pageCount;                                      //@synthesize pageCount=_pageCount - In the implementation block
@property (readonly) float pageWidth;                                          //@synthesize pageWidth=_pageWidth - In the implementation block
@property (readonly) float pageHeight;                                         //@synthesize pageHeight=_pageHeight - In the implementation block
@property (getter=isComputed,readonly) BOOL computed; 
@property (getter=isCancelled,readonly) BOOL cancelled; 
+(void)registerPreview:(id)arg1 ;
+(void)unregisterPreview:(id)arg1 ;
+(BOOL)isSafeURL:(id)arg1 ;
+(BOOL)isSafeRequest:(id)arg1 ;
+(id)safeURLScheme;
+(id)relativeStringForSafeURL:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(NSString *)password;
-(NSData *)data;
-(void)cancel;
-(void)setData:(NSData *)arg1 ;
-(BOOL)isCancelled;
-(void)setError:(id)arg1 ;
-(NSURL *)url;
-(void)setPassword:(NSString *)arg1 ;
-(NSURLConnection *)connection;
-(void)setConnection:(NSURLConnection *)arg1 ;
-(NSString *)uti;
-(void)setUti:(NSString *)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(long long)pageCount;
-(NSString *)fileName;
-(void)setFileName:(NSString *)arg1 ;
-(id)safeRequestForRequest:(id)arg1 ;
-(NSURLResponse *)previewResponse;
-(NSURLRequest *)previewRequest;
-(NSURL *)previewURL;
-(float)pageWidth;
-(float)pageHeight;
-(NSSet *)attachmentURLs;
-(BOOL)isComputed;
-(void)setShouldRemoveURLAfterGeneration:(BOOL)arg1 ;
-(void)startComputingPreview;
-(void)setHtmlErrorDisabled:(BOOL)arg1 ;
-(BOOL)htmlErrorDisabled;
-(void)startDataRepresentationWithContentType:(id)arg1 properties:(id)arg2 ;
-(void)appendData:(id)arg1 forURL:(id)arg2 lastChunk:(BOOL)arg3 ;
-(id)newAttachmentURLWithID:(id)arg1 properties:(id)arg2 ;
-(void)setDocumentObject:(const void*)arg1 callbacks:(const SCD_Struct_QL13*)arg2 ;
-(const void*)documentObject;
-(id)mimeTypeForAttachmentURL:(id)arg1 ;
-(id)_voidRequest;
-(id)_requestForURL:(id)arg1 ;
-(void)computePreviewInThread;
-(void)_protectRepresentedObjectSafely;
-(void)computePreview;
-(void)_discardRepresentedObjectSafely;
-(void)_registerURL:(id)arg1 mimeType:(id)arg2 textEncoding:(id)arg3 ;
-(id)newSafeAttachmentURLWithID:(id)arg1 mimeType:(id)arg2 textEncoding:(id)arg3 ;
-(unsigned)cfEncodingForAttachmentURL:(id)arg1 ;
-(BOOL)progressive;
-(void)setProgressive:(BOOL)arg1 ;
-(BOOL)shouldRemoveURLAfterGeneration;
@end

