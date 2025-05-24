/**
 * @file drop_table_executor.h
 * @author Willaaaaaaa
 * @date 2025-04-14
 */

#pragma once

#include "common/sys/rc.h"

class SQLStageEvent;

/**
 * @brief 创建表的执行器
 * @ingroup Executor
 */
class DropTableExecutor
{
public:
  DropTableExecutor()          = default;
  virtual ~DropTableExecutor() = default;

  RC execute(SQLStageEvent *sql_event);
};
