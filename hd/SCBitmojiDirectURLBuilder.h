//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SOJUBitmojiImageRequest;

@interface SCBitmojiDirectURLBuilder : NSObject
{
    SOJUBitmojiImageRequest *_imageRequest;
    unsigned long long _endpoint;
    _Bool _useStaging;
    _Bool _useHotshot;
    _Bool _allowHotshot;
    _Bool _batchRequest;
}

+ (id)determineHeaders:(id)arg1;
@property(nonatomic) _Bool useHotshot; // @synthesize useHotshot=_useHotshot;
@property(nonatomic) _Bool useStaging; // @synthesize useStaging=_useStaging;
@property(nonatomic) unsigned long long endpoint; // @synthesize endpoint=_endpoint;
@property(retain, nonatomic) SOJUBitmojiImageRequest *imageRequest; // @synthesize imageRequest=_imageRequest;
@property(nonatomic) _Bool batchRequest; // @synthesize batchRequest=_batchRequest;
- (void).cxx_destruct;
- (id)build;
- (id)_determineBitmojiDirectURLFromRequest:(id)arg1;
- (id)initWithImageRequest:(id)arg1 endpoint:(unsigned long long)arg2 allowHotshot:(_Bool)arg3;
- (id)initWithImageRequest:(id)arg1 endpoint:(unsigned long long)arg2;

@end

