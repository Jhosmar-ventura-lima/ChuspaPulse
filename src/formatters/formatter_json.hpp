#pragma once

#include <string>
#include <vector>

#include "iformatter.hpp"
#include "core/types.hpp"

namespace ChuspaPulse::formatters {

/**
 * @brief Formateador JSON para snapshots de métricas.
 */
class FormatterJSON : public IFormatter {
public:
    /**
     * @brief Retorna el identificador del formato.
     */
    std::string formato() const override;

    /**
     * @brief Retorna el content type HTTP.
     */
    std::string contentType() const override;

    /**
     * @brief Serializa un snapshot individual.
     */
    std::string formatear(
        const ChuspaPulse::core::Snapshot& snapshot
    ) const override;

    /**
     * @brief Serializa un historial de snapshots.
     */
    std::string formatearHistorial(
        const std::vector<ChuspaPulse::core::Snapshot>& snapshots
    ) const override;
};

}