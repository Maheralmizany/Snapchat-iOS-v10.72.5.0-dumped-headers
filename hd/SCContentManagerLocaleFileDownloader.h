//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCLocaleFileDownloader.h"

@class SCLazy;

@interface SCContentManagerLocaleFileDownloader : NSObject <SCLocaleFileDownloader>
{
    SCLazy *_contentDelivery;
}

- (void).cxx_destruct;
- (void)downloadLocaleStringFile:(id)arg1 downloadURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)contentDelivery;
- (id)initWithContentDelivery:(id)arg1;

@end

