//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ADLDecoderCallback : NSObject
{
    struct Handle<std::__1::shared_ptr<addlive::DecoderCallback>, std::__1::shared_ptr<addlive::DecoderCallback>> _cppRefHandle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)onDecoderError;
- (void)onFrameDecoded:(id)arg1;
- (id)initWithCpp:(const shared_ptr_5d6e4d93 *)arg1;

@end

