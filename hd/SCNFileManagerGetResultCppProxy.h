//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCNFileManagerGetResult.h"

@interface SCNFileManagerGetResultCppProxy : NSObject <SCNFileManagerGetResult>
{
    struct Handle<std::__1::shared_ptr<snap::file_manager::GetResult>, std::__1::shared_ptr<snap::file_manager::GetResult>> _cppRefHandle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)getData;
- (long long)getError;
- (id)initWithCpp:(const shared_ptr_82d95599 *)arg1;

@end

