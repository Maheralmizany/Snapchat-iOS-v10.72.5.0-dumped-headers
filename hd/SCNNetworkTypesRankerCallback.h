//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCNNetworkTypesRankerCallback : NSObject
{
    struct Handle<std::__1::shared_ptr<snap::network_types::RankerCallback>, std::__1::shared_ptr<snap::network_types::RankerCallback>> _cppRefHandle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)onCanceled:(id)arg1;
- (void)onFailed:(id)arg1;
- (void)onSucceeded:(id)arg1;
- (id)initWithCpp:(const shared_ptr_6022ac5d *)arg1;

@end
