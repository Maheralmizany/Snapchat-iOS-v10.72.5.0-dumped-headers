//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCNShimsDataProvider.h"

@interface SCNShimsDataProviderCppProxy : NSObject <SCNShimsDataProvider>
{
    struct Handle<std::__1::shared_ptr<snap::shims::DataProvider>, std::__1::shared_ptr<snap::shims::DataProvider>> _cppRefHandle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)data;
- (id)initWithCpp:(const shared_ptr_bd03877a *)arg1;

@end

