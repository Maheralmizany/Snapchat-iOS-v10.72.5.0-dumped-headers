//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCNLearnedSearchModelFileBuffer : NSObject
{
    struct Handle<std::__1::shared_ptr<snap::learned_search::ModelFileBuffer>, std::__1::shared_ptr<snap::learned_search::ModelFileBuffer>> _cppRefHandle;
}

+ (id)modelFileBufferInstanceWithPath:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dispose;
- (_Bool)stateIsValid;
- (long long)getSize;
- (long long)getAddress;
- (id)initWithCpp:(const shared_ptr_f82b880c *)arg1;

@end

